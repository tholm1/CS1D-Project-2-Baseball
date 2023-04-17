#include "dbmanager.h"

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
