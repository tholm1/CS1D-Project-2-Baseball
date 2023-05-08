#include "dbmanager.h"
#include <QQueue>
#include <string>
#include <fstream>
#include <QFileDialog>
#include <QFile>
#include <iostream>
#include <QInputDialog>
#include "souvenir2.h"

dbManager* dbManager::managerInstance = NULL;

dbManager::dbManager()
{

    QSqlDatabase m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("/Users/trevorholm/Documents/CS1D/Github/CS1D-Project-2-Baseball/MLBDB2.db");

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
dbManager* dbManager::getInstance()
{
    if (managerInstance == NULL)
    {
        // Should only be executed once per runtime
        managerInstance = new dbManager();
    }
    return managerInstance;
}
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

QList<Souvenir3> dbManager::getAllSouvenirs()
{
    QSqlQuery query;
    QList<Souvenir3> souvenirList;
    if (query.exec("SELECT \"Team\", \"Souvenir\", \"Price\" from \"Souvenirs\"")) {
        if (query.first()) {
            while (query.isValid()) {
                QString teamName          = query.value(0).toString();
                QString souvenirName      = query.value(1).toString();
                double  souvenirPrice     = query.value(2).toDouble();

                // initialize the souvenir to be added to the souvenirList (QList)
                Souvenir3 tempSouvenir = Souvenir3(teamName, souvenirName, souvenirPrice);
                souvenirList.append(tempSouvenir);
                query.next();
            }
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return souvenirList;
}


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

QSqlQueryModel* dbManager::loadSouvenirNamesOnly()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString sQry = "select \"Souvenir\" as \"Souvenir Names\" from \"Souvenirs\" group by \"Souvenir\";";
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Teams\n";
    }

    model->setQuery(qry);
    return model;
}

QSqlQueryModel* dbManager::loadStadiumSouvenirs(QString stadium)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString sQry = "select Souvenir as 'Souvenirs', Price as 'Cost($)' from Souvenirs where Team = '" +stadium+ "';";
    qDebug() << sQry;
    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Stadiums\n";
    }

    model->setQuery(qry);
    return model;
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

double dbManager::GetTotalCost(QString teamIn, QString souvIn)
{
    double total = 0.0;

    QString sQry = "select Price as 'Cost' "
                   "from Souvenirs where Team = '" +teamIn+ "' and Souvenir = '" +souvIn+ "'";
    QSqlQuery qry;
    qry.prepare(sQry);
    qry.exec();

    if(qry.next())
    {
        total = qry.value(0).toDouble();
    }
    return total;
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

void dbManager::createCart()
{
    //cartQry - temporary table
    QSqlQuery cartQry;
    cartQry.prepare("create table Cart as SELECT * from Souvenirs;");

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
