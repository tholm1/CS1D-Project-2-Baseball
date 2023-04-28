#include "modifystadiums.h"
#include "ui_modifystadiums.h"
#include "maintenance.h"
#include "dbmanager.h"

ModifyStadiums::ModifyStadiums(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyStadiums)
{
    ui->setupUi(this);
    this->populateTableView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);

    ui->comboBox->setModel(m_database.loadTeamNamesOnly());
}

ModifyStadiums::~ModifyStadiums()
{
    delete ui;
}

void ModifyStadiums::populateTableView()
{
    this->teamList = dbManager::getInstance()->getAllTeams();
    TeamTableModel* model = new TeamTableModel(this->teamList);
    this->proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(model);
    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        ui->tableView->setColumnHidden(i, false);
    }
    ui->tableView->horizontalHeader()->restoreState(this->defaultTableState);
    ui->accumulatorLabel->clear();
}

void ModifyStadiums::on_pushButton_clicked()
{
    maintenance maintenancePage;
    maintenancePage.setModal(true);
    hide();
    maintenancePage.exec();
}




void ModifyStadiums::on_addBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void ModifyStadiums::on_modBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void ModifyStadiums::on_delBtn_clicked()
{

}


void ModifyStadiums::on_addBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void ModifyStadiums::on_modBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

