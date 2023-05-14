#include "planvacation.h"
#include "ui_planvacation.h"
#include "displayinfo.h"
#include "tripplanner.h"
#include "graphtraversals.h"

planVacation::planVacation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planVacation)
{
    ui->setupUi(this);
}

planVacation::~planVacation()
{
    delete ui;
}


void planVacation::on_back_pushButton_clicked()
{
    displayInfo display;
    display.setModal(true);
    hide();
    display.exec();
}


void planVacation::on_pushButton_7_clicked()
{
    TripPlanner tPlanner;
    tPlanner.setModal(true);
    hide();
    tPlanner.exec();
}



void planVacation::on_pushButton_6_clicked()
{
    GraphTraversals traversal;
    traversal.setModal(true);
    hide();
    traversal.exec();
}

