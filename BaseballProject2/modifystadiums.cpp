#include "modifystadiums.h"
#include "ui_modifystadiums.h"
#include "maintenance.h"
#include "dbmanager.h"
#include <QApplication>
#include <QFileDialog>
#include <QTextStream>

ModifyStadiums::ModifyStadiums(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyStadiums)
{
    ui->setupUi(this);

    updateDataView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);

    // combo box initializations
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
    delQuery->finish();

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

    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open Text File", "", "Text Files (*.txt)");


    if (!filePath.isEmpty()) {
            // Open the selected file
            QFile file(filePath);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                // Read the file contents into a QTextStream
                QTextStream in(&file);
                while (!in.atEnd()) {
                    QString addTeamName                 = in.readLine();
                    QString addStadiumName              = in.readLine();
                    int     addSeatingCapacity          = in.readLine().toInt();
                    QString addLocation                 = in.readLine();
                    QString addPlayingSurface           = in.readLine();
                    QString addLeague                   = in.readLine();
                    int     addDateOpened               = in.readLine().toInt();
                    int     addDistanceToCenterField    = in.readLine().toInt();
                    QString addParkTypology             = in.readLine();
                    QString addRoofType                 = in.readLine();

                    // Display the file contents
                    qDebug() << "File Contents:\n" << addTeamName << Qt::endl << addStadiumName << Qt::endl << addSeatingCapacity
                             << Qt::endl << addLocation << Qt::endl << addPlayingSurface << Qt::endl << addLeague
                             << Qt::endl << addDateOpened << Qt::endl << addDistanceToCenterField
                             << Qt::endl << addParkTypology << Qt::endl << addRoofType;
                    try
                           {
                               QSqlQuery* checkTeamQuery = new QSqlQuery(dbManager::managerInstance->m_database);
                               checkTeamQuery->prepare("SELECT \"Team Name\" FROM \"MLB Teams\" WHERE \"Team Name\" = :checkTeamName");
                               checkTeamQuery->bindValue(":checkTeamName", addTeamName);
                               checkTeamQuery->exec();
                               checkTeamQuery->next();

                               QString teamSearched = checkTeamQuery->value(0).toString();
                               checkTeamQuery->finish();
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

                               checkStadiumQuery->finish();

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
                                   qDebug() << "DUPLICATE TEAM NAME";
                                            //<< Qt::endl; // insert error message
                               }
                               if(addUpdateError == 1)
                               {
                                   ui->errorLabel->setText("You cannot enter a duplicate stadium name.");
                                   qDebug() << "DUPLICATE STADIUM NAME";
                                            //<< Qt::endl; // insert error message
                               }
                           }


                }

                // Close the file
                file.close();
            } else {
                qDebug() << "Failed to open the file:" << file.errorString();
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
    // Stadium name data fetch
    QSqlQuery* fetchQuery = new QSqlQuery(dbManager::managerInstance->m_database);
    fetchQuery->prepare("SELECT \"Stadium Name\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    QString updatedStadiumName = fetchQuery->value(0).toString();
    fetchQuery->clear();

    ui->stadiumNameUpdateLine->setText(updatedStadiumName);

    // Seating capacity data fetch

    fetchQuery->prepare("SELECT \"Seating Capacity\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    int updatedSeatingCapacity = fetchQuery->value(0).toInt();
    fetchQuery->clear();

    ui->seatingCapacityUpdateBox->setValue(updatedSeatingCapacity);

    // Location data fetch
    fetchQuery->prepare("SELECT \"Location\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    QString updatedLocation = fetchQuery->value(0).toString();
    fetchQuery->clear();

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
    fetchQuery->clear();
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
    fetchQuery->clear();
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
    fetchQuery->clear();

    ui->dateOpenedUpdateBox->setValue(updatedDateOpened);

    // Distance to Center Field data fetch
    fetchQuery->prepare("SELECT \"Distance to Center Field\" FROM \"MLB Teams\" WHERE \"Team Name\" = :updatedTeamName");
    fetchQuery->bindValue(":updatedTeamName", updatedTeamName);
    fetchQuery->exec();
    fetchQuery->next();

    int updatedDistanceToCenterField = fetchQuery->value(0).toInt();
    fetchQuery->clear();

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
    fetchQuery->clear();
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
    fetchQuery->clear();
    int roofTypeIndex = ui->roofTypeUpdateBox->findText(updatedRoofType);

    if ( ballparkTypologyIndex != -1 ) { // -1 for not found
       ui->roofTypeUpdateBox->setCurrentIndex(roofTypeIndex);
    }

    fetchQuery->finish();
}


void ModifyStadiums::on_confirmUpdateBtn_clicked()
{
    QString updateTeamName                 = ui->teamNameUpdateBox->currentText();
    QString updateStadiumName              = ui->stadiumNameUpdateLine->text();
    int     updateSeatingCapacity          = ui->seatingCapacityUpdateBox->value();
    QString updateCity                     = ui->locationCityUpdateLine->text();
    QString updateState                    = ui->locationStateUpdateLine->text();
    QString updateLocation                 = updateCity + ", " + updateState;
    QString updatePlayingSurface           = ui->playingSurfaceUpdateBox->currentText();
    QString updateLeague                   = ui->leagueUpdateBox->currentText();
    int     updateDateOpened               = ui->dateOpenedUpdateBox->value();
    int     updateDistanceToCenterField    = ui->distanceToCenterFieldUpdateBox->value();
    QString updateParkTypology             = ui->ballparkTypologyUpdateBox->currentText();
    QString updateRoofType                 = ui->roofTypeUpdateBox->currentText();

    try
        {


            QSqlQuery* checkStadiumQuery = new QSqlQuery(dbManager::managerInstance->m_database);
            checkStadiumQuery->prepare("SELECT \"Stadium Name\" FROM \"MLB Teams\" WHERE \"Stadium Name\" = :checkStadiumName");
            checkStadiumQuery->bindValue(":checkStadiumName", updateStadiumName);
            checkStadiumQuery->exec();
            checkStadiumQuery->next();

            QString stadiumSearched = checkStadiumQuery->value(0).toString();
            checkStadiumQuery->finish();
            if(stadiumSearched == updateStadiumName) // checks for duplicate stadium name
            {
               throw 1;
            }

            QSqlQuery* updateQuery = new QSqlQuery(dbManager::managerInstance->m_database);
            updateQuery->prepare(   "UPDATE \"MLB Teams\" "
                                    "SET "
                                        "\"Stadium Name\" = :stadiumName, "
                                        "\"Seating Capacity\" = :seatingCapacity, "
                                        "\"Location\" = :location, "
                                        "\"Playing Surface\" = :playingSurface, "
                                        "\"League\" = :league, "
                                        "\"Date Opened\" = :dateOpened, "
                                        "\"Distance to Center Field\" = :distanceToCenterField, "
                                        "\"Ballpark Typology\" = :ballParkTypology, "
                                        "\"Roof Type\" = :roofType "
                                    "WHERE \"Team Name\" = :teamName"
                                );

            updateQuery->bindValue(":stadiumName",             updateStadiumName);
            updateQuery->bindValue(":seatingCapacity",         updateSeatingCapacity);
            updateQuery->bindValue(":location",                updateLocation);
            updateQuery->bindValue(":playingSurface",          updatePlayingSurface);
            updateQuery->bindValue(":league",                  updateLeague);
            updateQuery->bindValue(":dateOpened",              updateDateOpened);
            updateQuery->bindValue(":distanceToCenterField",   updateDistanceToCenterField);
            updateQuery->bindValue(":ballParkTypology",        updateParkTypology);
            updateQuery->bindValue(":roofType",                updateRoofType);
            updateQuery->bindValue(":teamName",                updateTeamName);

            if (updateQuery->exec()) {
                // The query executed successfully
                updateDataView();
            } else {
                // An error occurred during execution
                QSqlError error = updateQuery->lastError();
                qDebug() << "Error executing query: " << error.text();
                // Display error message to user
                ui->errorLabel_2->setVisible(true);
                ui->errorLabel_2->setText("Error executing query: " + error.text());
            }
        }
        catch(int addUpdateError)
        {
            ui->errorLabel_2->setVisible(true);

            if(addUpdateError == 1)
            {
                ui->errorLabel_2->setText("You cannot enter a duplicate stadium name.");
                qDebug() << "DUPLICATE STADIUM NAME";
                        // << Qt::endl; // insert error message
            }
        }
}

