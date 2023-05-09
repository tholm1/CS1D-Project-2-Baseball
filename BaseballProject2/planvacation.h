#ifndef PLANVACATION_H
#define PLANVACATION_H

#include <QDialog>

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

    void on_GraphTraversals_pushButton_clicked();

    void on_TripPlanner_pushButton_clicked();

private:
    Ui::planVacation *ui;
};

#endif // PLANVACATION_H
