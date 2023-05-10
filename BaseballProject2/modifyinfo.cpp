#include "modifyinfo.h"
#include "ui_modifyinfo.h"

modifyInfo::modifyInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyInfo)
{
    ui->setupUi(this);
}

modifyInfo::~modifyInfo()
{
    delete ui;
}
