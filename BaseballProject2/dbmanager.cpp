#include "dbmanager.h"

dbManager::dbManager()
{
    //Connects the database to the project
        m_database = QSqlDatabase::addDatabase("QSQLITE");
        m_database.setDatabaseName("C:/Users/Yaqub/OneDrive/Desktop/CS1D/CS1D-Project-2-Baseball/MLBDB2.db");
        if(!m_database.open())
        {
            qDebug() << "\nError Opening Database\n";
        }
}

dbManager::~dbManager()
{

}
