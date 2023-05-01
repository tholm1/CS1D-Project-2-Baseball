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

    // combo box initializations
    ui->playingSurfaceAddBox->addItems({"Grass", "AstroTurf GameDay Grass", "AstroTurf GameDay Grass 3D"});
    ui->leagueAddBox->addItems({"National", "American"});
    ui->parkTypologyAddBox->addItems({"Retro Modern", "Retro Classic", "Jewel Box", "Modern", "Contemporary", "Multipurpose"});
    ui->roofTypeAddBox->addItems({"Retractable", "Open", "Fixed"});

    ui->errorLabel->setVisible(false);
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


void ModifyStadiums::on_confirmAddBtn_clicked()
{

    QString addTeamName                 = ui->teamNameAddLine->text();
    QString addStadiumName              = ui->stadiumNameAddLine->text();
    int     addSeatingCapacity          = ui->seatingCapacityAddBox->value();
    QString addCity                     = ui->locationCityAddLine->text();
    QString addState                    = ui->locationStateAddLine->text();
    QString addLocation                 = addCity + ", " + addState;
    QString addPlayingSurface           = ui->playingSurfaceAddBox->currentText();
    QString addLeague                   = ui->leagueAddBox->currentText();
    int     addDateOpened               = ui->dateOpenedAddBox->value();
    int     addDistanceToCenterField    = ui->distanceToCenterFieldAddBox->value();
    QString addParkTypology             = ui->parkTypologyAddBox->currentText();
    QString addRoofType                 = ui->roofTypeAddBox->currentText();


    try
        {
            QSqlQuery* checkTeamQuery = new QSqlQuery(dbManager::managerInstance->m_database);
            checkTeamQuery->prepare("SELECT \"Team Name\" FROM \"MLB Teams\" WHERE \"Team Name\" = :checkTeamName");
            checkTeamQuery->bindValue(":checkTeamName", addTeamName);
            checkTeamQuery->exec();
            checkTeamQuery->next();

            QString teamSearched = checkTeamQuery->value(0).toString();
            if(teamSearched == addTeamName) // checks for duplicate team name
            {
               throw 0;
            }

            QSqlQuery* checkStadiumQuery = new QSqlQuery(dbManager::managerInstance->m_database);
            checkStadiumQuery->prepare("SELECT \"Stadium Name\" FROM \"MLB Teams\" WHERE \"Stadium Name\" = :checkStadiumName");
            checkStadiumQuery->bindValue(":checkStadiumName", addStadiumName);
            checkStadiumQuery->exec();
            checkStadiumQuery->next();

            QString stadiumSearched = checkStadiumQuery->value(0).toString();
            if(stadiumSearched == addStadiumName) // checks for duplicate stadium name
            {
               throw 1;
            }

            QSqlQuery* addQuery = new QSqlQuery(dbManager::managerInstance->m_database);
            addQuery->prepare("INSERT INTO \"MLB Teams\" ("
                                  "\"Team Name\", "
                                  "\"Stadium Name\", "
                                  "\"Seating Capacity\", "
                                  "\"Location\", "
                                  "\"Playing Surface\", "
                                  "\"League\", "
                                  "\"Date Opened\", "
                                  "\"Distance to Center Field\", "
                                  "\"Ballpark Typology\", "
                                  "\"Roof Type\""
                              ") "
                              "VALUES ("
                                  ":teamName, "
                                  ":stadiumName, "
                                  ":seatingCapacity, "
                                  ":location, "
                                  ":playingSurface, "
                                  ":league, "
                                  ":dateOpened, "
                                  ":distanceToCenterField, "
                                  ":ballParkTypology, "
                                  ":roofType"
                              ")");

            addQuery->bindValue(":teamName", addTeamName);
            addQuery->bindValue(":stadiumName", addStadiumName);
            addQuery->bindValue(":seatingCapacity", addSeatingCapacity);
            addQuery->bindValue(":location", addLocation);
            addQuery->bindValue(":playingSurface", addPlayingSurface);
            addQuery->bindValue(":league", addLeague);
            addQuery->bindValue(":dateOpened", addDateOpened);
            addQuery->bindValue(":distanceToCenterField", addDistanceToCenterField);
            addQuery->bindValue(":ballParkTypology", addParkTypology);
            addQuery->bindValue(":roofType", addRoofType);

            addQuery->exec();
            updateDataView();
        }
        catch(int addUpdateError)
        {
            ui->errorLabel->setVisible(true);

            if(addUpdateError == 0)
            {
                ui->errorLabel->setText("You cannot enter a duplicate team name.");
                qDebug() << "DUPLICATE TEAM NAME" << Qt::endl; // insert error message
            }
            if(addUpdateError == 1)
            {
                ui->errorLabel->setText("You cannot enter a duplicate stadium name.");
                qDebug() << "DUPLICATE STADIUM NAME" << Qt::endl; // insert error message
            }
        }
}


void ModifyStadiums::on_teamNameAddLine_textEdited(const QString &arg1)
{
    ui->errorLabel->setVisible(false);
    ui->errorLabel->setText("");
}


void ModifyStadiums::on_stadiumNameAddLine_textEdited(const QString &arg1)
{
    ui->errorLabel->setVisible(false);
    ui->errorLabel->setText("");
}

