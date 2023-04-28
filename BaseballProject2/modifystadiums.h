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

private slots:
    void on_pushButton_clicked();

    void on_addBtn_clicked();

    void on_modBtn_clicked();

    void on_delBtn_clicked();

    void on_addBack_clicked();

    void on_modBack_clicked();

private:
    Ui::ModifyStadiums *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Team> teamList;
    dbManager m_database;
};

#endif // MODIFYSTADIUMS_H
