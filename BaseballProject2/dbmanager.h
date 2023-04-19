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

class dbManager
{
public:
    dbManager();
    ~dbManager();
    static  dbManager* managerInstance;
    QSqlDatabase m_database;
    /** \fn loadCampusNamesOnly()
     * Using the SQl query funtion, only the name of the college campuses are read in from the database into a QSqlQueryModel.
     * If a database error occurs, an error warning is printed to the console.
     * @return pointer model, the name of the campus in the from of sql database
     */
    QSqlQueryModel *loadTeamNamesOnly();
    static  dbManager* getInstance();
    QList<Team> getAllTeams();
};

#endif // DBMANAGER_H
