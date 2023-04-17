#include "modifyinfomation.h"
#include "ui_modifyinfomation.h"

modifyInfomation::modifyInfomation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyInfomation)
{
    ui->setupUi(this);
}

modifyInfomation::~modifyInfomation()
{
    delete ui;
}
