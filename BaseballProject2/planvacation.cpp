#include "planvacation.h"
#include "ui_planvacation.h"
#include "displayinfo.h"
//#include "Souvenir.h"
//#include "souvenir2.h"
#include "dbmanager.h"
#include "teamtablemodel.h"

#include <QMessageBox>
#include <QSpinBox>
#include <QSqlQueryModel>

planVacation::planVacation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planVacation)
{
    ui->setupUi(this);
    showTeamDBCombo2(m_database.loadTeamNamesOnly());
    showSouvenirDBCombo(m_database.loadSouvenirNamesOnly());
    showSouvenirTable(m_database.loadSouvenirNamesOnly());
}

planVacation::~planVacation()
{
    delete ui;
}

void planVacation::showTeamDBCombo2(QSqlQueryModel *model)
{
    ui->selectTeamName->setModel(model);
}

void planVacation::showSouvenirDBCombo(QSqlQueryModel *model)
{
    ui->souv_comboBox->setModel(model);
}

void planVacation::showSouvenirTable(QSqlQueryModel *model)
{
    ui->souv_tableView->setModel(model);
}

void planVacation::showSouvenirCart(QSqlQueryModel *model)
{
    ui->souvCart_tableView->setModel(model);
}

void planVacation::showSouvCartTableView(QSqlQueryModel *model)
{
    ui->souvCart_tableView->setModel(model);
}

void planVacation::on_back_pushButton_clicked()
{
    displayInfo display;
    display.setModal(true);
    hide();
    display.exec();
}

void planVacation::on_backButton_clicked()
{
    QMessageBox::information(this, "Souvenir Shop", "Going back to the trip..."  , QMessageBox::Ok, QMessageBox::NoButton);

    ui->stackedWidget->setCurrentWidget(ui->page);
}

void planVacation::on_addSouv_button_clicked()
{
    Souvenir souv;
    //name and campus
    QString name, team;
    name = ui->souv_comboBox->currentText();

    souv.souvName = name;
    team = ui->selectTeamName->currentText();
    souv.team = team;


    //quantity and item cost
    int quantity = ui-> quanitity_spinBox -> cleanText().toInt();
    souv.quantity = quantity;
    double itemCost = m_database.GetTotalCost(team, name);
    itemCost = itemCost * quantity;
    souv.cost = itemCost;

    souvenirCart.push(souv);

    //update Cart table
    m_database.updateCartQuantity(team, name, quantity);

    //displays cart in table
    if(sQry == "")
    {
        sQry += "select souvCollege as 'College', souvTrad as 'Souvenirs', souvCost as 'Cost', quantity as 'Quantity' "
                "from Cart where souvCollege = '" +team+ "' and souvTrad = '" +name+ "'";
    }
    else
    {
        sQry += " union select Team as 'Team', Souvenir as 'Souvenirs', Price as 'Cost', quantity as 'Quantity'"
                "from Souvenirs where Team = '" +team+ "' and Souvenir = '" +name+ "'";
    }

    showSouvCartTableView(m_database.loadSouvCart(sQry));

    showTotalCost(itemCost);
}

void planVacation::showTotalCost(double itemCost)
{
    totalCost += itemCost;
    QString totalCostStr = QString::number(totalCost, 'f', 2);
    ui->grandtotal->setText(totalCostStr);
}


void planVacation::on_pushButton_clicked()
{
    QMessageBox::information(this, "Souvenir Shop", "Visiting the Souvenir Shop..."  , QMessageBox::Ok, QMessageBox::NoButton);

    ui->stackedWidget->setCurrentWidget(ui->page_2);
}


void planVacation::on_selectTeamName_currentIndexChanged(int index)
{
    QString stadium = ui->selectTeamName->currentText();
    showSouvTableView(m_database.loadStadiumSouvenirs(stadium));
}

void planVacation::showSouvTableView(QSqlQueryModel *model)
{
    ui->souv_tableView->setModel(model);
    ui->souv_comboBox->setModel(model);
}


void planVacation::on_checkout_button_clicked()
{
    QMessageBox::information(this, "Souvenir Shop", "Your grand total was displayed during checkout." "\nThank you for going on this trip!" , QMessageBox::Ok, QMessageBox::NoButton);

    ui->stackedWidget->setCurrentWidget(ui->page);
}


void planVacation::on_pushButton_2_clicked()
{

}

