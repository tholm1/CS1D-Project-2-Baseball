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
    int calculateShortestPath(const std::string& start, const std::string& end);
    ~TripPlanner();

private slots:
    void on_PushButton_MostEfficientTrip_clicked();

    void on_PushButton_BeginTrip_clicked();

private:
    Ui::TripPlanner *ui;
       dbManager db;
       Graph *graph;
       void showTeamDBCombo(QSqlQueryModel *model);
};

#endif // TRIPPLANNER_H
