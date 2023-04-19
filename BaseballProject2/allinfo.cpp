#include "allinfo.h"
#include "ui_allinfo.h"
#include "dbmanager.h"

Allinfo::Allinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Allinfo)
{
    ui->setupUi(this);
    showTeamDBCombo(m_database.loadTeamNamesOnly());
}

Allinfo::~Allinfo()
{
    delete ui;
}

/*
 * showTeamDBCombo(QSqlQueryModel *model)
 * The team combo box for the campus database display UI will display the information held in a QSqlQueryModel pointer.
 * IN: QSqlQueryModel, model (passed as a pointer)
 * OUT: nothing returned
 */
void Allinfo::showTeamDBCombo(QSqlQueryModel *model)
{
    ui->teams_combo->setModel(model);
}

/*
 * on_search_push_clicked
 * When the search button clicked, all the information will be retrieved from the database and show on the screen.
 * IN: no formal parameters
 * OUT: nothing returned
 */
void Allinfo::on_search_button_clicked()
{
    QString stadiumName;
    QString capacity;
    QString location;
    QString playingSurface;
    QString league;
    QString date;
    QString distance;
    QString ballPark;
    QString roof;

    ui->label->setText(ui->teams_combo->currentText());

    QString searchValue = ui->teams_combo->currentText(); // the value you want to search for in the first column

    // Prepare the SQL query
    QSqlQuery query;
    query.prepare("SELECT * FROM \"MLB Teams\" WHERE \"Team Name\" = :searchValue");
    query.bindValue(":searchValue", searchValue);

    // Execute the query
    if (query.exec()) {
        // Iterate over the results and output each row
        while (query.next()) {
            stadiumName = query.value(1).toString(); // assuming the first column is of type text
            capacity = query.value(2).toString(); // assuming the second column is of type text
            location = query.value(3).toString();
            playingSurface = query.value(4).toString();
            league = query.value(5).toString();
            date = query.value(6).toString();
            distance = query.value(7).toString();
            ballPark = query.value(8).toString();
            roof = query.value(9).toString();


        }
    } else {
        qDebug() << "Failed to execute query:" << query.lastError().text();
    }

    ui->stadium->setText(stadiumName);
    ui->seating->setText(capacity);
    ui->location->setText(location);
    ui->surface->setText(playingSurface);
    ui->league->setText(league);
    ui->date->setText(date);
    ui->distance->setText(distance);
    ui->ballpark->setText(ballPark);
    ui->roof->setText(roof);

}
