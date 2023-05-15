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
#include <QStringListModel>
#include <QAbstractItemView>

namespace Ui {
class TripPlanner;
}

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

private:
    Ui::TripPlanner *ui;
    dbManager db; // Database manager object
    Graph* graph; // Graph object
    std::vector<std::string> teams; // Vector to store the teams
    std::vector<std::string> sortedTeams; // Vector to store the sorted teams
};

#endif // TRIPPLANNER_H
