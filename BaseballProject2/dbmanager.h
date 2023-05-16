#ifndef DBMANAGER_H
#define DBMANAGER_H

#include<QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>
#include <QSortFilterProxyModel>
#include <QStandardItemModel>
#include <QList>
#include <QFile>
#include <QRegularExpression>
#include <unordered_map>
#include "teamtablemodel.h"
#include "Souvenir.h"
#include <vector>
using namespace std;


struct stadium{
    string starting;
    string ending;
    int distance;
};

class dbManager
{
public:
    dbManager();
    ~dbManager();
    static dbManager* managerInstance; /**< Static pointer to a single instance of the database. */
    QSqlDatabase m_database;

    /**
     * @brief loadTeamNamesOnly
     * Using the SQL query function, only the name of the college campuses are read from the database into a QSqlQueryModel.
     * If a database error occurs, an error warning is printed to the console.
     * @return pointer model, the name of the campus in the form of SQL database
     */
    QSqlQueryModel* loadTeamNamesOnly();

    /**
     * @brief getInstance
     * Returns a single instance of the database.
     * @return instance
     */
    static dbManager* getInstance();

    QList<Team> getMaxMinDistanceToCF(bool max);

    /**
     * @brief getTeamByName
     * This function will retrieve the team by its name.
     * @param stadiumName
     * @return Team object
     */
    Team getTeamByName(QString stadiumName);

    /**
     * @brief getAllTeams
     * Returns a QList of all the teams and their corresponding attributes.
     * @return teams
     */
    QList<Team> getAllTeams();

    void loadGraph(std::unordered_map<std::string, int>& vertexIndexMap, std::vector<std::tuple<std::string, std::string, int>>& edges);

    QSqlDatabase db;

    /**
     * @brief rowCount
     * Returns the number of rows in the database.
     * @return row count
     */
    int rowCount();

    /**
     * @brief loadStadiumNames
     * Loads the names of stadiums from the database and returns them in a vector of strings.
     * @return vector of stadium names
     */
    std::vector<std::string> loadStadiumNames();

    /**
     * @brief loadDistance
     * Loads the distances between stadiums from the database and returns them in a vector of stadium objects.
     * @return vector of stadium objects
     */
    vector<stadium> loadDistance();
    /**
     * @brief loadOriginalTeamNames
     * Loads the original team names from the database into a QSqlQueryModel.
     * @return pointer to the QSqlQueryModel containing the original team names
     */
    QSqlQueryModel* loadOriginalTeamNames();

    /**
     * @brief loadDestinationTeamNames
     * Loads the destination team names from the database into a QSqlQueryModel.
     * @return pointer to the QSqlQueryModel containing the destination team names
     */
    QSqlQueryModel* loadDestinationTeamNames();

    bool readSouvenirFile();

    void createSouvenir(QString teamname ,QString item, QString price);

    QSqlQueryModel *loadTeamSouvenirs(QString team);

    QSqlQueryModel* loadSouvCart(QString sQry);

    void createCart();

    void deleteCart();

    void updateCartQuantity(QString team, QString souv, int quantity);

    double GetTotalCost(QString teamIn, QString souvIn);

    QSqlQueryModel* loadSouvenirNamesOnly();

    QSqlQueryModel* loadSouvenirQuantityOnly();

    QList<Souvenir> getAllSouvenirs();

    QList <Souvenir*>  listOfSouvenirs;
};

#endif // DBMANAGER_H
