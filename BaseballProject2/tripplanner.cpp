#include "tripplanner.h"
#include "ui_tripplanner.h"
#include "graph.h"
#include "dbmanager.h"

TripPlanner::TripPlanner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TripPlanner)
{
    ui->setupUi(this);
    std::unordered_map<std::string, int> vertexIndexMap;
    std::vector<std::tuple<std::string, std::string, int>> edges;
    db.loadGraph(vertexIndexMap, edges);
    graph = new Graph(vertexIndexMap, edges); // Use 'new' to allocate memory for the graph object

    showTeamDBCombo(db.loadTeamNamesOnly());
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}
TripPlanner::~TripPlanner()
{
    delete ui;
    delete graph; // Add this line to delete the graph object
}


void TripPlanner::showTeamDBCombo(QSqlQueryModel *model)
{
    ui->teams_combo->setModel(model);
     ui->teams_combo_2->setModel(model);
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

    int distance = graph->shortestPath(start, end);

    QString result = QString("Shortest path distance from %1 to %2: %3").arg(QString::fromStdString(start), QString::fromStdString(end)).arg(distance);
    ui->Label_FinalTotalDistance->setText(result);
}
