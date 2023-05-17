#ifndef TRIPPLANNER_H
#define TRIPPLANNER_H

#include <QList>
#include <QDebug>
#include <QQueue>
#include <QWidget>
#include "dbmanager.h"
#include "graph.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QStringListModel>
#include <QAbstractItemView>

namespace Ui {
class TripPlanner;
}

/**
 * @brief Souvenir struct to hold all souvenirs to be called later
 */
struct SouvenirTableModel
{
    SouvenirTableModel() {}
    explicit SouvenirTableModel(QString teamName, QString souvName, double cost) {

        this->teamName = teamName;
        this->souvName = souvName;
        this->cost = cost;
    }

    QString souvName;
    QString teamName;
    double cost;
    int quantity;
};

class TripPlanner : public QDialog
{
    Q_OBJECT

public:
    explicit TripPlanner(QWidget *parent = 0);
    /**
     * @brief populateTeamComboBoxes Populates the team combo boxes with data.
     */
    void populateTeamComboBoxes();

    /**
     * @brief initializeGraph Initializes the graph object.
     */
    void initializeGraph();
    ~TripPlanner();

private slots:
    /**
     * @brief Calculates the most efficient trip when you click the button
     */
    void on_PushButton_MostEfficientTrip_clicked();

    /**
     * @brief Starts the trip when clicked
     */
    void on_PushButton_BeginTrip_clicked();

    /**
     * @brief Brings you back to the main menu whenever when you click this button
     */
    void on_PushButton_BackToMain_6_clicked();

    /**
     * @brief Adds team to the custom trip
     */
    void on_PushButton_AddTeam_clicked();

    /**
     * @brief Begins the trip for the shortest path
     */
    void on_PushButton_BeginCustomTrip_clicked();

    /**
     * @brief Lets the user go back to main
     */
    void on_PushButton_BackToMain_clicked();

    /**
     * @brief This function will clear the teams in the Custom trip
     */
    void on_PushButton_BeginCustomTrip_Clear_clicked();

    /**
     * @brief This button will bring you to the custom trip menu
     */
    void on_PushButton_CustomTrip_clicked();

    /**
     * @brief Button that brings the user to the Summary page that shows
     *        the total distance and the souvenirs purchased
     */
    void on_PushButton_SouvenirFinishTrip_clicked();

    /**
     * @brief This button will bring you to the Marlin Park trip
     */
    void on_PushButton_MarlinParkTrip_clicked();

    /**
     * @brief This button will calculate the most efficient order of the stadiums
     *        the user chooses
     */
    void on_PushButton_BeginCustomTrip_2_clicked();

    /**
     * @brief Button that allows the user to go back to the main menu with all the
     *        trips
     */
    void on_PushButton_BackToMain_4_clicked();

    /**
     * @brief Button that allows the user to go back to the main menu with all the
     *        trips
     */
    void on_PushButton_BackToMain_2_clicked();

    /**
     * @brief Combo box that holds the teams for the selected trip and updates
     *        info based on the team
     */
    void on_team_comboBox_currentIndexChanged();

    /**
     * @brief Function that adds souvenir to the shopping cart
     */
    void on_addSouvenirButton_clicked();

    /**
     * @brief Displays the teams from the database in the combo box when called
     *        This is for the Souvenir page.
     * @param model
     */
    void showSelectTeamComboBox(QSqlQueryModel *model);

    /**
     * @brief Displays the souvenirs from the database and outputs them
     *        in the souvenir shop
     * @param model
     */
    void showSouvTableView(QSqlQueryModel *model);

    /**
     * @brief Displays the souvenirs the user purchased in this table
     *        view.
     * @param model
     */
    void showSouvCartTableView(QSqlQueryModel *model);

    /**
     * @brief Displays the total cost for the sovuvenirs purchased and
     *        dispalys the total cost to a label
     * @param itemCost
     */
    void showTotalCost(double itemCost);

    /**
     * @brief Calculates the total from the souvenirs purchased from the
     *        souvenir shop by using the database values.
     */
    void calculateTotal();

    /**
     * @brief This function changes the stacked widget to
     *        go to the souvenir shop and displays the souvenirs
     *        of each team and allows the user to buy souvenirs
     */
    void goToSouvenirShop();

    /**
     * @brief Calculates the DFS trip and displays the trip and order
     *        in the menu
     */
    void on_DFS_clicked();

    /**
     * @brief Calculates the BFS trip and displays the trip and order
     *        in the menu
     */
    void on_BSF_clicked();

    /**
     * @brief Calculates the MST trip and displays the trip and order
     *        in the menu
     */
    void on_MST_clicked();

    /**
     * @brief Menu button that allows the user to back to the mainpage
     *        by clicking on the button
     */
    void on_mainpage_clicked();

    /**
     * @brief Menu button that allows the user to go to the filter
     *        for one team and display all of their info
     */
    void on_one_team_clicked();

    /**
     * @brief Menu button that allows the user to go to the filter
     *        for all of the teams
     */
    void on_filterTeam_clicked();

    /**
     * @brief on_TeamListComboBox_activated
     * @param index
     */
    void on_TeamListComboBox_activated(int index);

private:
    Ui::TripPlanner *ui;
    /**
     * @brief db
     */
    dbManager db; // Database manager object
    Graph* graph; // Graph object
    std::vector<std::string> teams; // Vector to store the teams
    QPushButton *primMSTButton;
    //QVBoxLayout *layout;
    QLabel *distanceLabel;
    double totalCost; // Double to hold the total cost when buying souvenirs
    QString sQry; //QString to display that the item has been added to the cart succesfully
    QStack<SouvenirTableModel> souvenirCart; //Stack to hold the cart
    QVector<QString> selectedTeams; //Vector to store the teams
    double total;
};

#endif // TRIPPLANNER_H
