#include "filteredteams.h"
#include "ui_filteredteams.h"
#include "displayteam.h"
#include "allinfo.h"
#include "tripplanner.h""

filteredTeams::filteredTeams(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filteredTeams)
{
    ui->setupUi(this);
    this->populateTableView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);
    ui->frame->setVisible(false);
}

filteredTeams::~filteredTeams()
{
    delete ui;
}
/**
 * @brief Populate the table view with all teams from the database.
 */
void filteredTeams::populateTableView()
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

void filteredTeams::on_noFilter_radioButton_clicked()
{
    this->populateTableView();
}


void filteredTeams::on_filterByAmericanLeague_radioButton_clicked()
{
    // rest table
    populateTableView();
       for (int i = 0; i < Team::COLUMN_COUNT; i++) {
           if (i != 5 && i != 1 && i != 0) {
               ui->tableView->setColumnHidden(i, true);
           }
       }

    proxyModel->setFilterFixedString("American");
    proxyModel->setFilterKeyColumn(5);

    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}


void filteredTeams::on_filterByNationalLeague_radioButton_clicked()
{
    // rest table
    populateTableView();
        for (int i = 0; i < Team::COLUMN_COUNT; i++) {
            if (i != 5 && i != 1 && i != 0) {
                ui->tableView->setColumnHidden(i, true);
            }
        }
    proxyModel->setFilterFixedString("National");
    proxyModel->setFilterKeyColumn(5);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}





void filteredTeams::on_filterByTypology_radioButton_clicked()
{
    // rest table
    populateTableView();

        for (int i = 0; i < Team::COLUMN_COUNT; i++) {
            if (i != 8 && i != 1 && i != 0) {
                ui->tableView->setColumnHidden(i, true);
            }
        }
    proxyModel->setFilterKeyColumn(8);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}


void filteredTeams::on_filterByOpenRoof_radioButton_clicked()
{
    // rest table
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 9 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);
        }
    }
    proxyModel->setFilterFixedString("Open");
    proxyModel->setFilterKeyColumn(9);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    int openRoofTypeAccumulator = 0;
       for (int i = 0; i < this->teamList.size(); i++) {
           qDebug() << teamList[i].roofType;
           if (teamList[i].roofType == "Open") {
               openRoofTypeAccumulator++;
           }
       }

    ui->accumulatorLabel->setText("There are " + QString::number(openRoofTypeAccumulator) + " stadiums with an open roof type!");
}


void filteredTeams::on_filterByDateOpen_radioButton_clicked()
{
    // rest table
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
          if (i != 6 && i != 1 && i != 0)
          {
            ui->tableView->setColumnHidden(i, true);
          }
        }
    proxyModel->setFilterKeyColumn(6);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}


void filteredTeams::on_filterBySeatingCapacity_radioButton_clicked()
{
    populateTableView();

        for (int i = 0; i < Team::COLUMN_COUNT; i++) {
            if (i != 2 && i != 1 && i != 0) {
                ui->tableView->setColumnHidden(i, true);

            }
        }
        proxyModel->setFilterKeyColumn(2);
        ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
        ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
        ui->tableView->horizontalHeader()->setStretchLastSection(true);

        // update the accumulator label
        int totalCapacityAccumulator = 0;
        for (int i = 0; i < this->teamList.size(); i++) {
            totalCapacityAccumulator += teamList[i].seatingCapacity;
        }

        // Adds commas to separate digits in (ten)thousands place.
//        QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
//        QLocale aEnglish;
//        QString formattedNumber = aEnglish.toString(totalCapacityAccumulator);
        ui->accumulatorLabel->setText("There is a total capacity of " + QString::number(totalCapacityAccumulator) + " seats among all MLB teams!");
}


void filteredTeams::on_filterByDistancetoCF_radioButton_clicked()
{
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 7 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);
        }
    }
    proxyModel->setFilterKeyColumn(7);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}


void filteredTeams::on_filterMaxMin_clicked()
{
    QList<Team> filteredTeams;
    if (ui->filterMaxMin->text() == "Filter by Max") {
        filteredTeams = dbManager::getInstance()->getMaxMinDistanceToCF(true);
        ui->filterMaxMin->setText("Filter by Min");
    } else {
        filteredTeams = dbManager::getInstance()->getMaxMinDistanceToCF(false);
        ui->filterMaxMin->setText("Filter by Max");
    }

    TeamTableModel* model = new TeamTableModel(filteredTeams);
    this->proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(model);
    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);
}


void filteredTeams::on_mainpage_clicked()
{
    QList<QWidget*> topLevelWidgets = qApp->topLevelWidgets();
    foreach(QWidget *widget, topLevelWidgets) {
        QMainWindow *mainWindow = qobject_cast<QMainWindow*>(widget);
        if (mainWindow) {
            // Show the main window if it was previously hidden
            if (!mainWindow->isVisible()) {
                mainWindow->show();
            }
            break;
        }
    }
    hide();
}



void filteredTeams::on_one_team_clicked()
{
    Allinfo info;
    info.setModal(true);
    hide();
    info.exec();
}


void filteredTeams::on_DFS_clicked()
{
    TripPlanner info;
    info.setModal(true);
    hide();
    info.exec();
}

