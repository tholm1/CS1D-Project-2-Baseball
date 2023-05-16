#ifndef FILTEREDTEAMS_H
#define FILTEREDTEAMS_H

#include <QDialog>
//#include <QRegExp>
#include "dbmanager.h"
#include "teamtablemodel.h"
#include "mainwindow.h"

namespace Ui {
class filteredTeams;
}

class filteredTeams : public QDialog
{
    Q_OBJECT

public:
    explicit filteredTeams(QWidget *parent = nullptr);
    ~filteredTeams();
    /**
     * @brief populateTableView
     * Populates the table view with the filtered teams based on the selected filter criteria.
     */
    void populateTableView();

private slots:
     void on_noFilter_radioButton_clicked();

     void on_filterByAmericanLeague_radioButton_clicked();

     void on_filterByNationalLeague_radioButton_clicked();

     void on_filterByTypology_radioButton_clicked();

     void on_filterByOpenRoof_radioButton_clicked();

     void on_filterByDateOpen_radioButton_clicked();

     void on_filterBySeatingCapacity_radioButton_clicked();

     void on_filterByDistancetoCF_radioButton_clicked();

     void on_filterMaxMin_clicked();

     void on_mainpage_clicked();

     void on_one_team_clicked();

     void on_DFS_clicked();

 private:
    Ui::filteredTeams *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Team> teamList;
};

#endif // FILTEREDTEAMS_H
