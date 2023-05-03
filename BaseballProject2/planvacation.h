#ifndef PLANVACATION_H
#define PLANVACATION_H

#include <QDialog>
#include "dbmanager.h"
using namespace std;
namespace Ui {
class planVacation;
}

class planVacation : public QDialog
{
    Q_OBJECT

public:
    explicit planVacation(QWidget *parent = nullptr);
    ~planVacation();

private slots:

    void on_back_pushButton_clicked();
    void on_push_DFS_clicked();

private:
    Ui::planVacation *ui;
    dbManager m_database;
};

#endif // PLANVACATION_H
