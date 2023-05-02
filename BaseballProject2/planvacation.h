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

    void on_calculatesouvbtn_clicked();

    void on_backtotrip_clicked();

    void on_clearsouvbtn_clicked();

    void resetDataMembers();

    void on_pushButton_clicked();

private:
    Ui::planVacation *ui;

    QVector<QString> selectedStadiums;
    QVector<QString> sortedStadiums;
    double totalDistance = 0;
    //tripType trip = None;
};

#endif // PLANVACATION_H
