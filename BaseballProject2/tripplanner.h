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
    void on_PushButton_MostEfficientTrip_clicked();

    void on_PushButton_BeginTrip_clicked();

    void on_PushButton_BackToMain_6_clicked();

    void on_PushButton_AddTeam_clicked();

    void on_PushButton_BeginCustomTrip_clicked();

    void on_PushButton_BackToMain_clicked();

    void on_PushButton_BeginCustomTrip_Clear_clicked();

    void on_PushButton_CustomTrip_clicked();

    void on_PushButton_SouvenirFinishTrip_clicked();

    void on_PushButton_MarlinParkTrip_clicked();

    void on_PushButton_BeginCustomTrip_2_clicked();

    void on_PushButton_BackToMain_4_clicked();

    void on_PushButton_BackToMain_2_clicked();

    void on_team_comboBox_currentIndexChanged();

    void on_addSouvenirButton_clicked();

    void showSelectTeamComboBox(QSqlQueryModel *model);

    void showSouvTableView(QSqlQueryModel *model);

    void showSouvCartTableView(QSqlQueryModel *model);

    void showTotalCost(double itemCost);

    void goToSouvenirShop();

    void on_DFS_clicked();

    void on_BSF_clicked();

    void on_MST_clicked();

private:
    Ui::TripPlanner *ui;
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
};

#endif // TRIPPLANNER_H
