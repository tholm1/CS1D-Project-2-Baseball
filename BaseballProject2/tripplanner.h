#ifndef TRIPPLANNER_H
#define TRIPPLANNER_H

#include <QList>
#include <QDebug>
#include <QQueue>
#include <QRegExp>
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
    void populateTeamComboBoxes();
    void initializeGraph();
    ~TripPlanner();

private slots:
    void on_PushButton_MostEfficientTrip_clicked();
    void on_PushButton_BeginTrip_clicked();
    void on_PushButton_BackToMain_6_clicked();
    void on_PushButton_CustomMostEfficientTrip_clicked();
    void on_PushButton_AddTeam_clicked();
    void on_PushButton_BeginCustomTrip_clicked();

    void on_PushButton_BackToMain_clicked();

    void on_PushButton_BeginCustomTrip_Clear_clicked();

    void on_PushButton_CustomTrip_clicked();

private:
    Ui::TripPlanner *ui;
    dbManager db;
    Graph *graph;
    std::vector<std::string> teams;
};

#endif // TRIPPLANNER_H
