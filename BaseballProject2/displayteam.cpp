#include "displayteam.h"
#include "ui_displayteam.h"
#include "displayinfo.h"
#include "allinfo.h"
#include "filteredteams.h"
displayTeam::displayTeam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayTeam)
{
    ui->setupUi(this);
}

displayTeam::~displayTeam()
{
    delete ui;
}

void displayTeam::on_back_pushButton_clicked()
{
    displayInfo display;
    display.setModal(true);
    hide();
    display.exec();
}

void displayTeam::on_displaySingleTeam_pushButton_clicked()
{
    Allinfo display;
    display.setModal(true);

    display.exec();
}


void displayTeam::on_displayWithFilter_pushButton_clicked()
{
    filteredTeams filter;
    filter.setModal(true);

    filter.exec();
}

