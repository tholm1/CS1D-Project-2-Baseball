#include "modifysouvenirs.h"
#include "ui_modifysouvenirs.h"
#include "maintenance.h"
#include "dbmanager.h"
#include "souvenir2.h"

ModifySouvenirs::ModifySouvenirs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifySouvenirs)
{
    ui->setupUi(this);

    this->populateTableView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);

    ui->stadiumDelComboBox_2->setModel(m_database.loadSouvenirNamesOnly());

    ui->stadiumDelComboBox->setModel(m_database.loadTeamNamesOnly());
}

ModifySouvenirs::~ModifySouvenirs()
{
    delete ui;
}

void ModifySouvenirs::on_confirmAddBtn_clicked()
{
    QString addTeamName                 = ui->teamNameAddLine->text();
    QString addSouvenirName             = ui->souvenirNameAddLine->text();
    QString addSouvenirPrice            = ui->souvenirPriceAddLine->text();

    try
    {
        QSqlQuery* checkQuery = new QSqlQuery(dbManager::managerInstance->m_database);
        checkQuery->prepare("SELECT \"Team\" FROM \"Souvenirs\" WHERE \"Team\" = :checkTeamName");
        checkQuery->bindValue(":checkTeamName", addTeamName);
        checkQuery->exec();
        checkQuery->next();

        QString souvenirSearched = checkQuery->value(0).toString();
        if(souvenirSearched == addSouvenirName)
        {
            throw 0;
        }

        QSqlQuery* addQuery = new QSqlQuery(dbManager::managerInstance->m_database);
        addQuery->prepare("INSERT INTO \"Souvenirs\" ("
                          "\"Team\", "
                          "\"Souvenir\", "
                          "\"Price\""
                          ") "
                          "VALUES ("
                          ":teamName, "
                          ":souvenirName, "
                          ":souvenirPrice"
                          ")");

        addQuery->bindValue(":teamName", addTeamName);
        addQuery->bindValue(":souvenirName", addSouvenirName);
        addQuery->bindValue(":souvenirPrice", addSouvenirPrice);

        addQuery->exec();
        updateDataView();
    }
    catch(int addUpdateError)
    {

        if(addUpdateError == 0)
        {
            qDebug() << "DUPLICATE SOUVENIR NAME"; // insert error message
        }
    }
}


void ModifySouvenirs::on_delBtn_2_clicked()
{
    QSqlQuery* delQuery = new QSqlQuery(dbManager::managerInstance->m_database);
    QString editStadiumName = ui->stadiumDelComboBox->currentText();

    delQuery->prepare("DELETE FROM \"Souvenirs\" WHERE \"Souvenir\" = :team_name");
    delQuery->bindValue(":team_name", editStadiumName);
    delQuery->exec();

    updateDataView();
}


void ModifySouvenirs::on_backBtn_clicked()
{
    maintenance maintenancePage;
    maintenancePage.setModal(true);
    hide();
    maintenancePage.exec();
}

void ModifySouvenirs::populateTableView()
{
    this->souvenirList = dbManager::getInstance()->getAllSouvenirs();
    SouvenirTableModel* model = new SouvenirTableModel(this->souvenirList);
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

void ModifySouvenirs::updateDataView()
{
    this->populateTableView();
    ui->stadiumDelComboBox->setModel(m_database.loadTeamNamesOnly());
}
