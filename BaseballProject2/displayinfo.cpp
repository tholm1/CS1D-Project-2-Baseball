#include "displayinfo.h"
#include "ui_displayinfo.h"

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
