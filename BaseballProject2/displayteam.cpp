#include "displayteam.h"
#include "ui_displayteam.h"
#include "displayinfo.h"

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

