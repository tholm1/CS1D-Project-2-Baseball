#ifndef MODIFYSTADIUMS_H
#define MODIFYSTADIUMS_H

#include <QDialog>
#include "dbmanager.h"


namespace Ui {
class ModifyStadiums;
}

class ModifyStadiums : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyStadiums(QWidget *parent = nullptr);
    ~ModifyStadiums();
    void populateTableView();
    void updateDataView();

private slots:


    void on_delBtn_clicked();

    void on_backBtn_clicked();

private:
    Ui::ModifyStadiums *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Team> teamList;
    dbManager m_database;
};

#endif // MODIFYSTADIUMS_H
