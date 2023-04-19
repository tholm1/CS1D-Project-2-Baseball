#include "filteredteams.h"
#include "ui_filteredteams.h"
#include "displayteam.h"

filteredTeams::filteredTeams(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filteredTeams)
{
    ui->setupUi(this);
    this->populateTableView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);
}

filteredTeams::~filteredTeams()
{
    delete ui;
}

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


void filteredTeams::on_back_pushButton_clicked()
{
    displayTeam display;
    display.setModal(true);
    hide();
    display.exec();
}


void filteredTeams::on_filterByTypology_radioButton_clicked()
{
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

