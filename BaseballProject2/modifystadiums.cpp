#include "modifystadiums.h"
#include "ui_modifystadiums.h"
#include "maintenance.h"
#include "dbmanager.h"

ModifyStadiums::ModifyStadiums(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyStadiums)
{
    ui->setupUi(this);

    updateDataView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);

    // combo box initializations
    // add combo boxes
    ui->playingSurfaceAddBox->addItems({"Grass", "AstroTurf GameDay Grass", "AstroTurf GameDay Grass 3D"});
    ui->leagueAddBox->addItems({"National", "American"});
    ui->ballparkTypologyAddBox->addItems({"Retro Modern", "Retro Classic", "Jewel Box", "Modern", "Contemporary", "Multipurpose"});
    ui->roofTypeAddBox->addItems({"Retractable", "Open", "Fixed"});
    // modify combo boxes
    ui->playingSurfaceUpdateBox->addItems({"Grass", "AstroTurf GameDay Grass", "AstroTurf GameDay Grass 3D"});
    ui->leagueUpdateBox->addItems({"National", "American"});
    ui->ballparkTypologyUpdateBox->addItems({"Retro Modern", "Retro Classic", "Jewel Box", "Modern", "Contemporary", "Multipurpose"});
    ui->roofTypeUpdateBox->addItems({"Retractable", "Open", "Fixed"});

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
    ui->teamNameUpdateBox->setModel(m_database.loadTeamNamesOnly());
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
    QString addParkTypology             = ui->ballparkTypologyAddBox->currentText();
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


void ModifyStadiums::on_teamNameUpdateBox_currentTextChanged(const QString &updatedTeamName)
{
    qDebug() << "Changed to " << updatedTeamName << Qt::endl;
    QSqlQuery* fetchQuery = new QSqlQuery(dbManager::managerInstance->m_database);
    fetchQuery->prepare("SELECT \"Stadium Name\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    QString updatedStadiumName = fetchQuery->value(0).toString();

    ui->stadiumNameUpdateLine->setText(updatedStadiumName);

    // Seating capacity data fetch

    fetchQuery->prepare("SELECT \"Seating Capacity\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    int updatedSeatingCapacity = fetchQuery->value(0).toInt();

    ui->seatingCapacityUpdateBox->setValue(updatedSeatingCapacity);

    fetchQuery->prepare("SELECT \"Location\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    QString updatedLocation = fetchQuery->value(0).toString();

    QStringList parts = updatedLocation.split(", ");

    QString updatedCityName;
    QString updatedStateName;

    // Splits the location string into a city and state variable
    updatedCityName = parts[0];
    updatedStateName = parts[1];

    ui->locationCityUpdateLine->setText(updatedCityName);
    ui->locationStateUpdateLine->setText(updatedStateName);

    fetchQuery->prepare("SELECT \"Playing Surface\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    /*
     * This code is used to set the combo box of the playing
     * surface to match the playing surface of the stadium selected.
     */
    QString updatedPlayingSurface = fetchQuery->value(0).toString();
    int playingSurfaceIndex = ui->playingSurfaceUpdateBox->findText(updatedPlayingSurface);

    if ( playingSurfaceIndex != -1 ) { // -1 for not found
       ui->playingSurfaceUpdateBox->setCurrentIndex(playingSurfaceIndex);
    }

    // League data fetch
    fetchQuery->prepare("SELECT \"League\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    /*
     * This code is used to set the combo box of the league
     * to match the league of the stadium selected.
     */
    QString updatedLeague = fetchQuery->value(0).toString();
    int leagueIndex = ui->leagueUpdateBox->findText(updatedLeague);

    if ( leagueIndex != -1 ) { // -1 for not found
       ui->leagueUpdateBox->setCurrentIndex(leagueIndex);
    }

    // Date opened data fetch
    fetchQuery->prepare("SELECT \"Date Opened\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    int updatedDateOpened = fetchQuery->value(0).toInt();

    ui->dateOpenedUpdateBox->setValue(updatedDateOpened);

    // Distance to Center Field data fetch
    fetchQuery->prepare("SELECT \"Distance to Center Field\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    int updatedDistanceToCenterField = fetchQuery->value(0).toInt();

    ui->distanceToCenterFieldUpdateBox->setValue(updatedDistanceToCenterField);

    // Ballpark Typology data fetch
    fetchQuery->prepare("SELECT \"Ballpark Typology\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    /*
     * This code is used to set the combo box of the ballpark typology
     * to match the league of the stadium selected.
     */
    QString updatedBallparkTypology = fetchQuery->value(0).toString();
    int ballparkTypologyIndex = ui->ballparkTypologyUpdateBox->findText(updatedBallparkTypology);

    if ( ballparkTypologyIndex != -1 ) { // -1 for not found
       ui->ballparkTypologyUpdateBox->setCurrentIndex(ballparkTypologyIndex);
    }

    // Roof type data fetch
    fetchQuery->prepare("SELECT \"Roof Type\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    /*
     * This code is used to set the combo box of the roof type
     * to match the league of the stadium selected.
     */
    QString updatedRoofType = fetchQuery->value(0).toString();
    int roofTypeIndex = ui->roofTypeUpdateBox->findText(updatedRoofType);

    if ( ballparkTypologyIndex != -1 ) { // -1 for not found
       ui->roofTypeUpdateBox->setCurrentIndex(roofTypeIndex);
    }
}

