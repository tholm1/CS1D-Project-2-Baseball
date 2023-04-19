#ifndef FILTEREDTEAMS_H
#define FILTEREDTEAMS_H

#include <QDialog>
#include <QRegExp>
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
     void populateTableView();

private slots:
     void on_noFilter_radioButton_clicked();

     void on_filterByAmericanLeague_radioButton_clicked();

     void on_filterByNationalLeague_radioButton_clicked();

     void on_back_pushButton_clicked();

     void on_filterByTypology_radioButton_clicked();

     void on_filterByOpenRoof_radioButton_clicked();

     void on_filterByDateOpen_radioButton_clicked();

private:
    Ui::filteredTeams *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Team> teamList;
};

#endif // FILTEREDTEAMS_H
