#include "planvacation.h"
#include "ui_planvacation.h"
#include "displayinfo.h"
#include "Souvenir.h"

#include <QMessageBox>
#include <QSpinBox>

static QVector <QString> outputNodes;
static QVector <Souvenir*> souvenirs;
static QVector <QString> teams;
static double totalSouvenirprice;

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


void planVacation::on_calculatesouvbtn_clicked()
{
    for(int i = 0; i< souvenirs.count(); i++)
    {
        int val = static_cast<QSpinBox*>(ui->souvenirtable->cellWidget(i,3))->value();
        QTableWidgetItem *price = ui->souvenirtable->item(i,2);
        totalSouvenirprice = totalSouvenirprice + (price->text().toDouble()*val);
    }
    ui->grandtotal->setNum(totalSouvenirprice);
    totalSouvenirprice = 0;
}


void planVacation::on_backtotrip_clicked()
{
    for(int i = 0; i< souvenirs.count(); i++)
    {
        int val = static_cast<QSpinBox*>(ui->souvenirtable->cellWidget(i,3))->value();
        QTableWidgetItem *price = ui->souvenirtable->item(i,2);
        totalSouvenirprice = totalSouvenirprice + (price->text().toDouble()*val);
    }
    ui->grandtotal->setNum(totalSouvenirprice);
    totalSouvenirprice = 0;

    QMessageBox::information(this, "Receipt", "You Spent $" + ui->grandtotal->text() + ". Returning to all Trip Options..."  , QMessageBox::Ok, QMessageBox::NoButton);
    ui->stackedWidget->setCurrentWidget(ui->page);
    resetDataMembers();
    teams.clear();
    souvenirs.clear();
    ui->grandtotal->clear();
}


void planVacation::on_clearsouvbtn_clicked()
{
    for(int i = 0;i< souvenirs.count();i++)
    {
        QSpinBox *box = static_cast<QSpinBox*>(ui->souvenirtable->cellWidget(i,3));
        box->setValue(0);
    }
    ui->grandtotal->clear();
}

void planVacation::resetDataMembers()
{
    while(!selectedStadiums.empty())
    {
        selectedStadiums.pop_front();
    }

    while(!sortedStadiums.empty())
    {
        sortedStadiums.pop_front();
    }

    totalDistance = 0;

    //trip = None;
}


void planVacation::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

