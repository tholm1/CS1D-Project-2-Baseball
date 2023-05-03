#ifndef PLANVACATION_H
#define PLANVACATION_H

#include <QDialog>
#include <QSqlQueryModel>
#include "dbmanager.h"
#include "Souvenir.h"

namespace Ui {
class planVacation;
}

class planVacation : public QDialog
{
    Q_OBJECT

public:
    struct Souvenir
    {
        QString souvName;
        QString team;
        double cost;
        int quantity;
    };

    explicit planVacation(QWidget *parent = nullptr);
    ~planVacation();
    void showTeamDBCombo2(QSqlQueryModel *model);
    void showSouvenirDBCombo(QSqlQueryModel *model);
    void showSouvenirTable(QSqlQueryModel *model);
    void showSouvenirCart(QSqlQueryModel *model);
    void on_addSouvenir_button_clicked();
    void showTotalCost(double itemCost);
    void showSouvTableView(QSqlQueryModel *model);
    void showSouvCartTableView(QSqlQueryModel *model);

private slots:

    void on_back_pushButton_clicked();

    void on_backButton_clicked();

    void on_addSouv_button_clicked();

    void on_pushButton_clicked();

    void on_selectTeamName_currentIndexChanged(int index);

    void on_checkout_button_clicked();

private:
    Ui::planVacation *ui;

    dbManager m_database;
    QVector<QString> selectedStadiums;
    QVector<QString> sortedStadiums;
    double totalDistance = 0;
    double totalCost = 0;
    QStack<Souvenir> souvenirCart;
    QString sQry;
    //tripType trip = None;
};

#endif // PLANVACATION_H
