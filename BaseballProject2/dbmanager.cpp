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
