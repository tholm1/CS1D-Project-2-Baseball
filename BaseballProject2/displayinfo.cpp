#include "displayinfo.h"
#include "ui_displayinfo.h"
#include "displayteam.h"
#include "planvacation.h"
#include "mainwindow.h"
#include "tripplanner.h"

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
    TripPlanner trip;
    trip.setModal(true);
    hide();
    trip.exec();
}

void displayInfo::on_back_pushButton_clicked()
{
    QList<QWidget*> topLevelWidgets = qApp->topLevelWidgets();
        foreach(QWidget *widget, topLevelWidgets) {
            QMainWindow *mainWindow = qobject_cast<QMainWindow*>(widget);
            if (mainWindow) {
                // Show the main window if it was previously hidden
                if (!mainWindow->isVisible()) {
                    mainWindow->show();
                }
                break;
            }
        }
    hide();
}
