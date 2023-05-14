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
#include "teamtablemodel.h"
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
    static  dbManager* managerInstance; /**< Static pointer to a single instance of the database. */
    QSqlDatabase m_database;
    /** \fn loadCampusNamesOnly()
     * Using the SQl query funtion, only the name of the college campuses are read in from the database into a QSqlQueryModel.
     * If a database error occurs, an error warning is printed to the console.
     * @return pointer model, the name of the campus in the from of sql database
     */
    QSqlQueryModel *loadTeamNamesOnly();
    /**
     * @brief getInstance returns a single instance of the database.
     * @return instance
     */
    static  dbManager* getInstance();
    QList<Team> getMaxMinDistanceToCF(bool max);
    Team getTeamByName(QString stadiumName);
    /**
     * @brief getAllTeams returns a QList of all the teams and their corresponding attributes.
     * @return teams
     */
    QList<Team> getAllTeams();
     void loadGraph(std::unordered_map<std::string, int> &vertexIndexMap, std::vector<std::tuple<std::string, std::string, int>> &edges);
    QSqlDatabase db;

    int rowCount();
    std::vector<std::string> loadStadiumNames();
    vector<stadium> loadDistance();
    //-------------------------------------
    QSqlQueryModel* loadOriginalTeamNames();
    QSqlQueryModel* loadDestinationTeamNames();
};

#endif // DBMANAGER_H
