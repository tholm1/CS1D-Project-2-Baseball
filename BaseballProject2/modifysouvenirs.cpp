#include "modifysouvenirs.h"
#include "ui_modifysouvenirs.h"

ModifySouvenirs::ModifySouvenirs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifySouvenirs)
{
    ui->setupUi(this);
}

ModifySouvenirs::~ModifySouvenirs()
{
    delete ui;
}
