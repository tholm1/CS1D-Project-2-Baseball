#include "planvacation.h"
#include "ui_planvacation.h"
#include "displayinfo.h"
#include "graphtraversals.h"
#include "tripplanner.h"

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


void planVacation::on_GraphTraversals_pushButton_clicked()
{
    GraphTraversals GraphTraversals;
    GraphTraversals.setModal(true);
    hide();
    GraphTraversals.exec();
}


void planVacation::on_TripPlanner_pushButton_clicked()
{
    TripPlanner trip;
    trip.setModal(true);
    hide();
    trip.exec();
}

