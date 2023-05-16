#include "dbmanager.h"
#include <QQueue>
#include <string>
#include <fstream>
#include <QFileDialog>
#include <QFile>
#include <iostream>
#include <QInputDialog>
#include "Souvenir.h"

dbManager* dbManager::managerInstance = NULL;

dbManager::dbManager()
{

    QSqlDatabase m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("../MLBDB2.db");


    if(m_database.open())
    {
        qDebug() << "Database: connection ok";
    }
    else
    {
       qDebug() << "Error: DBManager connection with database failed";
    }

}

dbManager::~dbManager()
{

}
/**
     * @brief getInstance
     * Returns a single instance of the database.
     * @return instance
     */
dbManager* dbManager::getInstance()
{
    if (managerInstance == NULL)
    {
        // Should only be executed once per runtime
        managerInstance = new dbManager();
    }
    return managerInstance;
}
QList<Team> dbManager::getMaxMinDistanceToCF(bool max)
{
    QSqlQuery query;
    QList<Team> filteredTeams;
    if (!max) {
        query.prepare("SELECT \"Team Name\", \"Stadium Name\", \"Distance to Center Field\" FROM \"MLB Teams\" ORDER BY \"Distance to Center Field\" ASC");
    } else {
        query.prepare("SELECT \"Team Name\", \"Stadium Name\", \"Distance to Center Field\" FROM \"MLB Teams\" ORDER BY \"Distance to Center Field\" DESC");
    }
    if (query.exec()) {
        if (query.first()) {
            double extremum = query.value(2).toDouble(); //either a max or minimum
            while (query.isValid()) {
                if (query.value(2).toDouble() == extremum) {
                    Team team = this->getTeamByName(query.value(1).toString());
                    filteredTeams.push_back(team);
                }
                query.next();
            }
        }
    }
    return filteredTeams;
}
/**
     * @brief getAllTeams
     * Returns a QList of all the teams and their corresponding attributes.
     * @return teams
     */
QList<Team> dbManager::getAllTeams()
{
    QSqlQuery query;
    QList<Team> teamList;
    if (query.exec("SELECT \"Team Name\", \"Stadium Name\", \"Seating Capacity\", \"Location\", \"Playing Surface\", \"League\", \"Date Opened\","
                   "\"Distance to Center Field\", \"Ballpark Typology\", \"Roof Type\" from \"MLB Teams\"")) {
        if (query.first()) {
            while (query.isValid()) {
                QString teamName          = query.value(0).toString();
                QString stadiumName       = query.value(1).toString();
                int     seatingCapacity   = query.value(2).toDouble();
                QString location          = query.value(3).toString();
                QString playingSurface    = query.value(4).toString();
                QString league            = query.value(5).toString();
                int     dateOpened        = query.value(6).toInt();
                int distanceToCF          = query.value(7).toInt();
                QString ballparkTopology  = query.value(8).toString();
                QString roofType          = query.value(9).toString();

                // initialize the team to be added to the teamList (QList)
                Team tempTeam = Team(teamName, stadiumName, seatingCapacity, location, playingSurface, league,
                                     dateOpened, distanceToCF, ballparkTopology, roofType);
                teamList.append(tempTeam);
                query.next();
            }
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return teamList;
}
/**
     * @brief getTeamByName
     * This function will retrieve the team by its name.
     * @param stadiumName
     * @return Team object
     */
Team dbManager::getTeamByName(QString stadiumName)
{
    QSqlQuery query;
    QList<Team> teamList;
    Team tempTeam;
    query.prepare("SELECT \"Team Name\", \"Stadium Name\", \"Seating Capacity\", \"Location\", \"Playing Surface\", \"League\", \"Date Opened\","
                  "\"Distance to Center Field\", \"Ballpark Typology\", \"Roof Type\" from \"MLB Teams\" WHERE \"Stadium Name\" = :stadiumName");
    query.bindValue(":stadiumName", stadiumName);

    if (query.exec()) {
        if (query.first()) {
            QString teamName          = query.value(0).toString();
            int     seatingCapacity   = query.value(2).toInt();
            QString location          = query.value(3).toString();
            QString playingSurface    = query.value(4).toString();
            QString league            = query.value(5).toString();
            int     dateOpened        = query.value(6).toInt();
            int     distanceToCF      = query.value(7).toInt();
            QString ballparkTopology  = query.value(8).toString();
            QString roofType          = query.value(9).toString();
            tempTeam                  = Team(teamName, stadiumName, seatingCapacity, location, playingSurface, league,
                                             dateOpened, distanceToCF, ballparkTopology, roofType);
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return tempTeam;
}
void dbManager::loadGraph(std::unordered_map<std::string, int> &vertexIndexMap, std::vector<std::tuple<std::string, std::string, int>> &edges)
{
    QSqlQuery query("SELECT \"Originated Stadium\", \"Destination Stadium\", \"Distance\" FROM \"MLB Distances Between Stadiums\"", db);

    int index = 0;
    while (query.next())
    {
        std::string u = query.value(0).toString().toStdString();
        std::string v = query.value(1).toString().toStdString();
        int w = query.value(2).toInt();

        if (vertexIndexMap.find(u) == vertexIndexMap.end())
            vertexIndexMap[u] = index++;

        if (vertexIndexMap.find(v) == vertexIndexMap.end())
            vertexIndexMap[v] = index++;

        edges.push_back(std::make_tuple(u, v, w));
    }
}
/**
     * @brief loadOriginalTeamNames
     * Loads the original team names from the database into a QSqlQueryModel.
     * @return pointer to the QSqlQueryModel containing the original team names
     */
QSqlQueryModel* dbManager::loadOriginalTeamNames() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query("SELECT DISTINCT \"Originated Stadium\" FROM \"MLB Distances Between Stadiums\"", db);
    model->setQuery(query);
    return model;
}
/**
     * @brief loadDestinationTeamNames
     * Loads the destination team names from the database into a QSqlQueryModel.
     * @return pointer to the QSqlQueryModel containing the destination team names
     */
QSqlQueryModel* dbManager::loadDestinationTeamNames() {
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query("SELECT DISTINCT \"Destination Stadium\" FROM \"MLB Distances Between Stadiums\"", db);
    model->setQuery(query);
    return model;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * loadTeamNamesOnly()
 * Using the "select XXX from" query funtion, the name of the college campuses are read in from the database into a QSqlQueryModel.
 * If a database error occurs, an error warning is printed to the console.
 * IN: no formal parameters
 * OUT: QSqlQueryModel (pointer)
 */
QSqlQueryModel* dbManager::loadTeamNamesOnly()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString sQry = "select \"Team Name\" as \"Teams\" from \"MLB Teams\" group by \"Team Name\";";
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Teams\n";
    }

    model->setQuery(qry);
    return model;
}
/**
     * @brief rowCount
     * Returns the number of rows in the database.
     * @return row count
     */
int dbManager::rowCount()
{
    QSqlQuery query("SELECT COUNT(*) FROM \"MLB Teams\"", m_database);
        if (!query.exec()) {
            qCritical() << "Failed to execute query:" << query.lastError().text();
            return -1;
        }

        // Get the result of the query
        int result = 0;
        if (query.next()) {
            result = query.value(0).toInt();
        }
        return result;
}
/**
     * @brief loadStadiumNames
     * Loads the names of stadiums from the database and returns them in a vector of strings.
     * @return vector of stadium names
     */
vector<string> dbManager::loadStadiumNames()
{
    QSqlQuery query("SELECT \"Stadium Name\" FROM \"MLB Teams\"", m_database);
        if (!query.exec()) {
            qCritical() << "Failed to execute query:" << query.lastError().text();

        }

        // Populate the string array with the data in the column
        QStringList stadiumNames;
        while (query.next()) {
            stadiumNames.append(query.value(0).toString());
        }

        // Convert the QStringList to a std::vector<std::string>
        std::vector<std::string> stadiumNamesVector;
        for (const QString& name : stadiumNames) {
            stadiumNamesVector.push_back(name.toStdString());
        }
        return stadiumNamesVector;
}
/**
     * @brief loadDistance
     * Loads the distances between stadiums from the database and returns them in a vector of stadium objects.
     * @return vector of stadium objects
     */
vector<stadium> dbManager::loadDistance()
{
    QSqlQuery query("SELECT * FROM \"MLB Distances Between Stadiums\"", m_database);
    if (!query.exec()) {
        qCritical() << "Failed to execute query:" << query.lastError().text();
        return {};
    }

    // Populate the vector of tuples with the data in the table
    vector<stadium> data;
    while (query.next()) {
        std::string str1 = query.value(0).toString().toStdString();
        std::string str2 = query.value(1).toString().toStdString();
        int value = query.value(2).toInt();
        stadium tmp = {str1, str2, value};
        data.push_back(tmp);
    }
    return data;
}

void dbManager::createSouvenir(QString teamname, QString item, QString price)
{
    // Step 1
    // Creating an entry into database
    QSqlQuery qry;
    qry.prepare("insert into Souvenir(     "
                "TeamName,                    "
                "Souvenir,                    "
                "Price)                       "
                "values(?,?,?);               "
                );
    qry.addBindValue(teamname);
    qry.addBindValue(item);
    qry.addBindValue(price);


    if(!qry.exec())
    {
        qDebug() << "Error adding Souvenir Info";
    }
    qry.clear();

    // Step 2
    // Creating an entry into local memory
    Souvenir *entry = new Souvenir();
    entry->setTeam(teamname);
    entry->setItem(item);
    entry->setPrice(price);

    this->listOfSouvenirs.append(entry);
}

bool dbManager::readSouvenirFile()
{
    QString file_name = QFileDialog::getOpenFileName(nullptr, "Open Record File",QDir::homePath());


    QFile file(file_name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString teamname = in.readLine();
        QString item = in.readLine();
        QString price = in.readLine();

        createSouvenir(teamname,item,price);
    }

    return true;
}

void dbManager::createCart()
{
    //cartQry - temporary table
    QSqlQuery cartQry;
    cartQry.prepare("create table Cart as SELECT * from Souvenir;");

    if(!cartQry.exec())
    {
        qDebug() << "\nError Creating Cart\n";
    }
    cartQry.prepare("ALTER table Cart add quantity real default 0;");
    if(!cartQry.exec())
    {
        qDebug() << "\nError Creating Quanitity Column\n";
    }
}

void dbManager::deleteCart()
{
    //cartQry - temporary table
    QSqlQuery cartQry;
    cartQry.prepare("drop table Cart;");

    if(!cartQry.exec())
    {
        qDebug() << "\nError dropping Cart\n";
    }
}

void dbManager::updateCartQuantity(QString team, QString souv, int quant)
{
    //Update quantity
    QSqlQuery updateQry;
    QString uQry = "UPDATE Cart SET quantity = quantity+" +QString::number(quant)+ " WHERE Team = '" +team+ "' and Souvenir = '" +souv+ "';";
    updateQry.prepare(uQry);

    if(!updateQry.exec())
    {
        qDebug() << "\nError updating Cart\n";
    }
}

QSqlQueryModel* dbManager::loadSouvCart(QString sQry)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Souvenirs\n";
    }

    model->setQuery(qry);
    return model;
}

double dbManager::GetTotalCost(QString teamIn, QString souvIn)
{
    double total = 0.0;

    QString sQry = "select Price as 'Cost' "
                   "from Cart where Team = '" +teamIn+ "' and Souvenir = '" +souvIn+ "'";
    QSqlQuery qry;
    qry.prepare(sQry);
    qry.exec();

    if(qry.next())
    {
        total = qry.value(0).toDouble();
    }
    return total;
}

QSqlQueryModel* dbManager::loadTeamSouvenirs(QString team)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString sQry = "select Souvenir as 'Souvenirs', Price as 'Cost($)' from Cart where Team = '" +team+ "';";
    qDebug() << sQry;
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Souvenirs\n";
    }

    model->setQuery(qry);
    return model;
}

QSqlQueryModel* dbManager::loadSouvenirNamesOnly()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString sQry = "select \"Souvenir\" as \"Souvenirs\" from \"Cart\" group by \"Souvenir\";";
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Souvenirs\n";
    }

    model->setQuery(qry);
    return model;
}

QSqlQueryModel* dbManager::loadSouvenirQuantityOnly()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString sQry = "select \"quantity\" as \"quantity\" from \"Cart\" group by \"quantity\";";
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Souvenirs\n";
    }

    model->setQuery(qry);
    return model;
}


