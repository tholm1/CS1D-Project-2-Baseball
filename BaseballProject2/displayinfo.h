#ifndef DISPLAYINFO_H
#define DISPLAYINFO_H

#include <QDialog>

namespace Ui {
class displayInfo;
}

class displayInfo : public QDialog
{
    Q_OBJECT

public:
    explicit displayInfo(QWidget *parent = nullptr);
    ~displayInfo();

private slots:
    void on_displayTeams_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_planVacation_pushButton_clicked();

private:
    Ui::displayInfo *ui;
};

#endif // DISPLAYINFO_H
