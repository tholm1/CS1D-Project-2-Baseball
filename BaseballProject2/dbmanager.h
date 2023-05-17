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

/**
 * @brief Struct for each stadium to hold the starting, end point, and the distances
 */
struct stadium{
    string starting;
    string ending;
    int distance;
};

class dbManager
{
public:
    /**
     * @brief Constructor for dbManager
     */
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

    /**
     * @brief Connects to the SQL database and obtains the farthest
     *        distance away from center field
     * @param max
     * @return The highest value to center field
     */
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

    /**
     * @brief Loads the graph with all the distances between the stadiums
     *        from the database.
     * @param vertexIndexMap
     * @param edges
     */
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

    /**
     * @brief Reads souvenirs from a text file and outputs them to the
     *        SQL database so that they can be used to purchase those souvenirs
     * @return
     */
    bool readSouvenirFile();

    /**
     * @brief Creates a souvenir from the souvenirs provided in the
     *        readSouvenirFile() function
     * @param teamname
     * @param item
     * @param price
     */
    void createSouvenir(QString teamname ,QString item, QString price);

    /**
     * @brief Loads
     * @param team
     * @return Model with all of the souvenirs for a specific team
     */
    QSqlQueryModel *loadTeamSouvenirs(QString team);

    /**
     * @brief Loads the souvenir cart for the souvenir shop
     * @param sQry
     * @return Model with the souvenir cart
     */
    QSqlQueryModel* loadSouvCart(QString sQry);

    /**
     * @brief Creates a cart table in the SQL database to hold the
     *        souvenirs purchased and the quantity for the user to
     *        see later.
     */
    void createCart();

    /**
     * @brief This function deletes the cart that was created when
     *        the souvenir shop is left and resets for the next trip
     */
    void deleteCart();

    /**
     * @brief updateCartQuantity
     * @param team
     * @param souv
     * @param quantity
     */
    void updateCartQuantity(QString team, QString souv, int quantity);

    /**
     * @brief Gets the total cost from the souvenirs the user purchased
     *        from the SQL database
     * @param teamIn
     * @param souvIn
     * @return The total cost that will be displayed as a label in the souvenir shop
     */
    double GetTotalCost(QString teamIn, QString souvIn);

    /**
     * @brief Loads all of the souvenir names from the SQL database
     * @return Model with all of the souvenir names
     */
    QSqlQueryModel* loadSouvenirNamesOnly();

    /**
     * @brief Loads the quantity of sovuenirs purchased through the amount
     *        in the spin box.
     * @return the quantity of souvenirs the user purchased
     */
    QSqlQueryModel* loadSouvenirQuantityOnly();

    /**
     * @brief Gets all of the souvenirs from the SQL database
     * @return A QList of all the souvenirs from the database
     */
    QList<Souvenir> getAllSouvenirs();

    QList <Souvenir*>  listOfSouvenirs;
};

#endif // DBMANAGER_H
