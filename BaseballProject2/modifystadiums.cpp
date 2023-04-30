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

    ui->stadiumDelComboBox->setModel(m_database.loadTeamNamesOnly());
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

void ModifyStadiums::updateDataView() {
    this->populateTableView();
    ui->stadiumDelComboBox->setModel(m_database.loadTeamNamesOnly());
}


void ModifyStadiums::on_delBtn_clicked()
{
    QSqlQuery* delQuery = new QSqlQuery(dbManager::managerInstance->m_database);
    QString editStadiumName = ui->stadiumDelComboBox->currentText();

    delQuery->prepare("DELETE FROM \"MLB Teams\" WHERE \"Team Name\" = :team_name");
    delQuery->bindValue(":team_name", editStadiumName);
    delQuery->exec();

    updateDataView();
}



void ModifyStadiums::on_backBtn_clicked()
{
    maintenance maintenancePage;
    maintenancePage.setModal(true);
    hide();
    maintenancePage.exec();
}

