#include "maintenance.h"
#include "ui_maintenance.h"
#include "displayinfo.h"


maintenance::maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maintenance)
{
    ui->setupUi(this);
}

maintenance::~maintenance()
{
    delete ui;
}


void maintenance::on_Add_Delete_Info_pushButton_clicked()
{

}


void maintenance::on_modifyInfo_pushButton_clicked()
{

}


void maintenance::on_back_pushButton_clicked()
{
    displayInfo display;
    display.setModal(true);
    hide();
    display.exec();
}

