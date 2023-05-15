#include "tripplanner.h"
#include "ui_tripplanner.h"
#include <QListView>
#include<QStandardItemModel>
#include<QStandardItem>
#include "planvacation.h"


TripPlanner::TripPlanner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TripPlanner)
{
    ui->setupUi(this);
    initializeGraph();
    this->populateTeamComboBoxes();
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}

TripPlanner::~TripPlanner()
{
    delete ui;
    delete graph;
}
/**
 * @brief Initialize the graph by loading vertex index map and edges from the database.
 *        Create a new Graph instance and add edges based on the loaded data.
 */
void TripPlanner::initializeGraph()
{
    std::unordered_map<std::string, int> vertexIndexMap;
    std::vector<std::tuple<std::string, std::string, int>> edges;
    db.loadGraph(vertexIndexMap, edges);

    int V = vertexIndexMap.size();
    graph = new Graph(V);
    graph->setVertexIndexMap(vertexIndexMap);

    for (const auto &edge : edges)
    {
        const std::string &u = std::get<0>(edge);
        const std::string &v = std::get<1>(edge);
        int w = std::get<2>(edge);
        graph->addEdge(u, v, w);
    }
}
/**
 * @brief Populate the team combo boxes with the team names loaded from the database.
 */
void TripPlanner::populateTeamComboBoxes()
{
    QSqlQueryModel *model1 = db.loadOriginalTeamNames();
    QSqlQueryModel *model2 = db.loadDestinationTeamNames();
    ui->teams_combo->setModel(model1);
    ui->teams_combo_2->setModel(model2);
    ui->TeamListComboBox->setModel(model2);


    // Set the model for the list view
    QStandardItemModel* teamModel = new QStandardItemModel(this);
    ui->listView->setModel(teamModel);
}

void TripPlanner::on_PushButton_MostEfficientTrip_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->DijkstrasSelectionScreen);
}

void TripPlanner::on_PushButton_BeginTrip_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);

    std::string start = ui->teams_combo->currentText().toStdString();
    std::string end = ui->teams_combo_2->currentText().toStdString();

    if (graph) {
        int distance = graph->shortestDistance(start, end);
        QString result = QString("Shortest path distance from %1 to %2: %3")
                         .arg(QString::fromStdString(start), QString::fromStdString(end)).arg(distance);
        ui->Label_FinalTotalDistance->setText(result);
    }
}



void TripPlanner::on_PushButton_BackToMain_6_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
    // Get the model and clear it
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->listView->model());
    model->clear();

    // Clear the teams vector
    teams.clear();

    // Clear label
    ui->Label_FinalTotalDistance->clear();
}


void TripPlanner::on_PushButton_AddTeam_clicked()
{
    QString teamName = ui->TeamListComboBox->currentText();

    // Check if the team has already been added
    if (std::find(teams.begin(), teams.end(), teamName.toStdString()) != teams.end()) {
        QMessageBox::warning(this, tr("Duplicate team"), tr("The team has already been added to the list."));
        return;
    }

    // Add the item to the model
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->listView->model());
    QStandardItem* item = new QStandardItem(teamName);
    model->appendRow(item);

    // Add the team name to the list of teams
    teams.push_back(teamName.toStdString());
}


void TripPlanner::on_PushButton_BeginCustomTrip_clicked()
{
    if (teams.empty()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, tr("No teams added"),
                                      tr("No teams have been added. Do you still want to continue?"),
                                      QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::No) {
            return;
        }
    }

    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);
    int distance = graph->shortestDistanceList_02(teams);
    QString result = QString("Shortest path for this custom trip is %1").arg(distance);
    ui->Label_FinalTotalDistance->setText(result);
}

void TripPlanner::on_PushButton_BeginCustomTrip_2_clicked()
{
    if (teams.empty()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, tr("No teams added"),
                                      tr("No teams have been added. Do you still want to continue?"),
                                      QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::No) {
            return;
        }
    }

    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);

    double distanceTraveled = graph->recursiveCollegeSort(teams);

    QString result = QString("The distance after traveling in the most efficient order is %1").arg(distanceTraveled);
    ui->Label_FinalTotalDistance->setText(result);
}



void TripPlanner::on_PushButton_BackToMain_clicked()
{
    planVacation plan;
    plan.setModal(true);
    hide();
    plan.exec();
}


void TripPlanner::on_PushButton_BeginCustomTrip_Clear_clicked()
{
    // Get the model and clear it
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->listView->model());
    model->clear();

    // Clear the teams vector
    teams.clear();
}


void TripPlanner::on_PushButton_CustomTrip_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->CustomTrip);
}



void TripPlanner::on_PushButton_SouvenirFinishTrip_clicked()
{
     ui->TripPlannerStackedWidget->setCurrentWidget(ui->SummaryPage);
}



void TripPlanner::on_PushButton_MarlinParkTrip_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);

   teams.push_back("Marlins Park");
   teams.push_back("Angel Stadium");
   teams.push_back("Busch Stadium");
   teams.push_back("Chase Field");
   teams.push_back("Citi Field");
   teams.push_back("Citizens Bank Park");
   teams.push_back("Comerica Park");
   teams.push_back("Coors Field");
   teams.push_back("Dodger Stadium");
   teams.push_back("Fenway Park");
   teams.push_back("Globe Life Park in Arlington");
   teams.push_back("Great American Ball Park");
   teams.push_back("Guaranteed Rate Field");
   teams.push_back("Kauffman Stadium");
   teams.push_back("Miller Park");
   teams.push_back("Minute Maid Park");
   teams.push_back("Nationals Park");
   teams.push_back("Oakland–Alameda County Coliseum");
   teams.push_back("Oracle Park");
   teams.push_back("Oriole Park at Camden Yards");
   teams.push_back("Petco Park");
   teams.push_back("PNC Park");
   teams.push_back("Progressive Field");
   teams.push_back("Rogers Centre");
   teams.push_back("Safeco Field");
   teams.push_back("SunTrust Park");
   teams.push_back("Target Field");
   teams.push_back("Tropicana Field");
   teams.push_back("Wrigley Field");
   teams.push_back("Yankee Stadium");
    int distance = graph->shortestDistanceList(teams);
    QString result = QString("Shortest path from Marlins Park is %1").arg(distance-45);
    ui->Label_FinalTotalDistance->setText(result);
}

void TripPlanner::on_PushButton_BackToMain_4_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}


void TripPlanner::on_PushButton_BackToMain_2_clicked()
{
     ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}


