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
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SummaryPage);

    std::string start = ui->teams_combo->currentText().toStdString();
    std::string end = ui->teams_combo_2->currentText().toStdString();

    if (graph) {
        int distance = graph->shortestPath(start, end);
        QString result = QString("Shortest path distance from %1 to %2: %3")
                         .arg(QString::fromStdString(start), QString::fromStdString(end)).arg(distance);
        ui->Label_FinalTotalDistance->setText(result);
    }
}



void TripPlanner::on_PushButton_BackToMain_6_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}


void TripPlanner::on_PushButton_CustomMostEfficientTrip_clicked()
{
      ui->TripPlannerStackedWidget->setCurrentWidget(ui->CustomOrderTrip_3);
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
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SummaryPage);
    int distance = graph->shortestPathList(teams);
    QString result = QString("Shortest path distance from %1").arg(distance);
    ui->Label_FinalTotalDistance->setText(result);

}


void TripPlanner::on_PushButton_BackToMain_clicked()
{
    planVacation plan;
    plan.setModal(true);
    hide();
    plan.exec();
}

