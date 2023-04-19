#ifndef DBMANAGER_H
#define DBMANAGER_H

#include<QtSql>


class dbManager
{
public:
    dbManager();
    ~dbManager();
    QSqlDatabase m_database;
    /** \fn loadCampusNamesOnly()
     * Using the SQl query funtion, only the name of the college campuses are read in from the database into a QSqlQueryModel.
     * If a database error occurs, an error warning is printed to the console.
     * @return pointer model, the name of the campus in the from of sql database
     */
    QSqlQueryModel *loadTeamNamesOnly();
};

#endif // DBMANAGER_H
