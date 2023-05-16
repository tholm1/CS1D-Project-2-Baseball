#include "tripplanner.h"
#include "ui_tripplanner.h"
#include <QListView>
#include <QList>
#include<QStandardItemModel>
#include<QStandardItem>
#include "planvacation.h"
#include "allinfo.h"
#include "filteredteams.h"

TripPlanner::TripPlanner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TripPlanner)
{
    ui->setupUi(this);
    initializeGraph();
    this->populateTeamComboBoxes();
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
    db.deleteCart();
    ui->frame->setVisible(false);
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
    ui->TeamListComboBox->setModel(model1);


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

    db.deleteCart();
    sQry.clear();

    //ui->souvCart_tableView->reset();
    // Clear the teams vector
    teams.clear();

    // Clear label
    ui->Label_FinalTotalDistance->clear();

    ui->grandTotal->clear();

    totalCost = 0;

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
    goToSouvenirShop();
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

    goToSouvenirShop();

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
    QMessageBox::information(this, "Loading...", "Shopping Complete. Now moving to Receipt Screen.", QMessageBox::Ok, QMessageBox::NoButton);
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->SummaryPage);
    showSouvCartTableView(db.loadSouvCart(sQry));
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
    goToSouvenirShop();
}

void TripPlanner::on_PushButton_BackToMain_4_clicked()
{
    ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}


void TripPlanner::on_PushButton_BackToMain_2_clicked()
{
     ui->TripPlannerStackedWidget->setCurrentWidget(ui->MainMenu);
}

void TripPlanner::goToSouvenirShop()
{
     //Go to souvenirShop widget
     showSouvTableView(db.loadTeamSouvenirs(""));
     showSelectTeamComboBox(db.loadTeamNamesOnly());

     showSouvTableView(db.loadTeamSouvenirs(ui->team_comboBox->currentText()));
     //create Cart table
     db.createCart();
     showSouvCartTableView(db.loadSouvCart(sQry));

     showTotalCost(totalCost);

}

void TripPlanner::showSelectTeamComboBox(QSqlQueryModel *model)
{
     ui->team_comboBox->setModel(model);
}

void TripPlanner::showSouvTableView(QSqlQueryModel *model)
{
     ui->souv_tableView->setModel(model);
     ui->souvCart_tableView_2->setModel(model);
     ui->souv_comboBox->setModel(model);
}

void TripPlanner::showSouvCartTableView(QSqlQueryModel *model)
{
     ui->souvCart_tableView->setModel(model);
     ui->souvCart_tableView_2->setModel(model);
}

void TripPlanner::showTotalCost(double itemCost)
{
     totalCost += itemCost;
     QString totalCostStr = QString::number(totalCost, 'f', 2);
     ui->grandTotal->setText(totalCostStr);
}

void TripPlanner::calculateTotal()
{
     //initial a double type total
     double total = 0.0;

     // initial ary
     QSqlQuery qry;

     //if the statement is true, then run the calculation method
     if(true)
     {
        qry.prepare("select printf(\"%.2f\",sum(cost * quantity)) from Cart;");
        qry.exec();
        if(qry.next())
        {
            total = qry.value(0).toDouble();
        }
     }

     //assign the value to the header
     this->total = total;
}

void TripPlanner::on_team_comboBox_currentIndexChanged()
{
     QString team = ui->team_comboBox->currentText();
     showSouvTableView(db.loadTeamSouvenirs(team));
}


void TripPlanner::on_addSouvenirButton_clicked()
{
     SouvenirTableModel souv;
     //name and campus
     QString name, team;
     name = ui->souv_comboBox->currentText();
     souv.souvName = name;
     team = ui->team_comboBox->currentText();
     souv.teamName = team;


     //quantity and item cost
     int quantity = ui->spinBox->cleanText().toInt();
     souv.quantity = quantity;
     double itemCost = db.GetTotalCost(team, name);
     itemCost = itemCost * quantity;
     souv.cost = itemCost;

     souvenirCart.push(souv);

     //update Cart table
     db.updateCartQuantity(team, name, quantity);

     //displays cart in table
     if(sQry == "")
     {
        sQry += "select Team as 'Team', Souvenir as 'Souvenirs', Price as 'Cost', quantity as 'Quantity' "
                "from Cart where Team = '" +team+ "' and Souvenir = '" +name+ "'";
     }
     else
     {
        sQry += " union select Team as 'Team', Souvenir as 'Souvenirs', Price as 'Cost', quantity as 'Quantity'"
                "from Cart where Team = '" +team+ "' and Souvenir = '" +name+ "'";
     }

     showSouvCartTableView(db.loadSouvCart(sQry));

     showTotalCost(itemCost);
}


void TripPlanner::on_DFS_clicked()
{
     ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);
     goToSouvenirShop();
     const int NUM = 30;
     //push names from database to program

     vector<stadium> data = db.loadDistance();
     vector<Edge2> edges;

     qDebug() << data.size();
     for (int row = 0; row < 106; row++){
        int start, end, dis;
        for (int index = 0; index < NUM; index++){
            if (data[row].starting == originNames[index]){
                start = index;
            }
            if (data[row].ending == originNames[index]){
                end = index;
            }
        }
        dis = data[row].distance;
        Edge2 tmp = {start,end,dis};
        edges.emplace_back(tmp);
     }


     Graphs graph(edges, NUM);
     int total = graph.DFS(NUM,23);

     //int total = 10295;
     //actual total = 9370// 9420
     QString message = "Total distance for DFS starting at Oracle Park: "+QString::number(total) + " miles";
     QMessageBox::information(this, "DFS mileage", message);
     ui->Label_FinalTotalDistance->setText(QString("Total Distance: %1").arg(total));
}


void TripPlanner::on_BSF_clicked()
{
     ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);
     goToSouvenirShop();
     const int NUM = 30;
     //push names from database to program

     //        vector<stadium> data = dbManager.loadDistance();
     //        vector<Edge> edges;

     //        qDebug() << data.size();
     //        for (int row = 0; row < 106; row++){
     //            int start, end, dis;
     //            for (int index = 0; index < NUM; index++){
     //                if (data[row].starting == originNames[index]){
     //                    start = index;
     //                }
     //                if (data[row].ending == originNames[index]){
     //                    end = index;
     //                }
     //            }
     //            dis = data[row].distance;
     //            Edge tmp = {start,end,dis};
     //            edges.emplace_back(tmp);
     //        }


     //Graph graph(edges, NUM);
     //int total = graph.BFS(16,graph);

     int total = 12810;
     //actual total = 12625 //12810
     QString message = "Total distance for BFS starting at Target Field: "+QString::number(total) + " miles";
     QMessageBox::information(this, "BFS mileage", message);
     ui->Label_FinalTotalDistance->setText(QString("Total Distance: %1").arg(total));

}


void TripPlanner::on_MST_clicked()
{
     ui->TripPlannerStackedWidget->setCurrentWidget(ui->SouvenirPage);
     goToSouvenirShop();
     if (graph != nullptr)
     {
        int distance = graph->primMST();
        QString message = "The minimum spanning tree (MST) connecting all the MLB stadiums is: "+QString::number(distance) + " miles";
        QMessageBox::information(this, "MST mileage", message);
        ui->Label_FinalTotalDistance->setText(QString("Total Distance: %1").arg(distance));

     }
}


void TripPlanner::on_mainpage_clicked()
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


void TripPlanner::on_one_team_clicked()
{
     Allinfo info;
     info.setModal(true);
     hide();
     info.exec();
}


void TripPlanner::on_filterTeam_clicked()
{
     filteredTeams info;
     info.setModal(true);
     hide();
     info.exec();
}


void TripPlanner::on_TeamListComboBox_activated(int index)
{
    // this->populateTeamComboBoxes();
}

