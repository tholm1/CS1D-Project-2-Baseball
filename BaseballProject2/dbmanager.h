#ifndef DBMANAGER_H
#define DBMANAGER_H

#include<QtSql>


class dbManager
{
public:
    dbManager();
    ~dbManager();
    QSqlDatabase m_database;
};

#endif // DBMANAGER_H
