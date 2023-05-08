#ifndef MODIFYSOUVENIRS_H
#define MODIFYSOUVENIRS_H

#include "dbmanager.h"
#include <QDialog>

namespace Ui {
class ModifySouvenirs;
}

class ModifySouvenirs : public QDialog
{
    Q_OBJECT

public:
    explicit ModifySouvenirs(QWidget *parent = nullptr);
    ~ModifySouvenirs();
    void populateTableView();
    void updateDataView();

private slots:
    void on_confirmAddBtn_clicked();

    void on_delBtn_2_clicked();

    void on_backBtn_clicked();

private:
    Ui::ModifySouvenirs *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Souvenir3> souvenirList;
    dbManager m_database;
};

#endif // MODIFYSOUVENIRS_H
