#include "displayinfo.h"
#include "ui_displayinfo.h"
#include "displayteam.h"
#include "planvacation.h"

displayInfo::displayInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayInfo)
{
    ui->setupUi(this);
}

displayInfo::~displayInfo()
{
    delete ui;
}

void displayInfo::on_displayTeams_pushButton_clicked()
{
    displayTeam display;
    display.setModal(true);
    hide();
    display.exec();
}

void displayInfo::on_planVacation_pushButton_clicked()
{
    planVacation plan;
    plan.setModal(true);
    hide();
    plan.exec();
}

void displayInfo::on_back_pushButton_clicked()
{

}
