#include "modifysouvenirs.h"
#include "ui_modifysouvenirs.h"
#include "maintenance.h"
#include <QMessageBox>

ModifySouvenirs::ModifySouvenirs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifySouvenirs)
{
    ui->setupUi(this);
    ui->team_comboBox->setModel(database.loadTeamNamesOnly());
    ui->team2_comboBox->setModel(database.loadTeamNamesOnly());
    ui->team3_comboBox->setModel(database.loadTeamNamesOnly());
}

ModifySouvenirs::~ModifySouvenirs()
{
    delete ui;
}

void ModifySouvenirs::on_addSouvButton_clicked()
{
    QSqlQuery data;
    QSqlQuery dataOne;
    QSqlQuery dataTwo;

    QString teamName = ui->team_comboBox->currentText();
    QString souvName = ui->souvName_lineEdit->text();
    QString souvPrice = ui->souvPrice_lineEdit->text();

    bool check = false;

    for(int i = 0; i < souvPrice.length(); i++)
    {
        if(souvPrice[i] != '0' && souvPrice[i] != '1' && souvPrice[i] != '2' && souvPrice[i] != '3'
            && souvPrice[i] != '4' && souvPrice[i] != '5'
            && souvPrice[i] != '6' && souvPrice[i] != '7'
            && souvPrice[i] != '8' && souvPrice[i] != '9' && souvPrice[i] != '.')
        {
            check = true;
            break;
        }
    }

    if(check == true)
    {
        QMessageBox::about(this, "Invalid Input", "There was an invalid input. Please use only Numerals(0-9) and the . ");
        //ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
        return;
    }

    data.prepare("INSERT INTO Souvenirs (Team, Souvenir, Price) VALUES ('"+teamName+"', '"+souvName+"', '"+souvPrice+"')");

    if(!data.exec())
    {
        QMessageBox::about(this, "Error", "Database not found double check path to database!");

    }
    else
    {
        QMessageBox::about(this, "", "The item was added. Double check if an error occured.");
    }

}


void ModifySouvenirs::on_modifySouvenirButton_clicked()
{
    QString souvTeam;
    QString souvName;
    QString souvPrice;

    souvTeam = ui->team2_comboBox->currentText();
    souvName = ui->souv2_lineEdit->text();
    souvPrice = ui->souvPrice_lineEdit_2->text();

    bool check = false;

    for(int i = 0; i < souvPrice.length(); i++)
    {
        if(souvPrice[i] != '0' && souvPrice[i] != '1' && souvPrice[i] != '2' && souvPrice[i] != '3'
            && souvPrice[i] != '4' && souvPrice[i] != '5'
            && souvPrice[i] != '6' && souvPrice[i] != '7'
            && souvPrice[i] != '8' && souvPrice[i] != '9' && souvPrice[i] != '.')
        {
            check = true;
            break;
        }
    }

    if(check == true)
    {
        QMessageBox::about(this, "Invalid Input", "There was an invalid input. Please use only Numerals(0-9) and the . ");
        //ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
        return;
    }

    QSqlQuery qry;
    qry.prepare("UPDATE Souvenirs SET souvCollege = '"+souvTeam+"', souvTrad = '"+souvName+"' ,souvCost = '"+souvPrice+"' WHERE souvTrad = '"+souvName+"' AND souvCollege = '"+souvTeam+"' ");
    qry.exec();

    if(qry.numRowsAffected() == 0)
    {
        QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }
    else
    {
        QMessageBox::about(this, tr("Edit"), tr("Updated"));
    }

    //ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}


void ModifySouvenirs::on_deleteSouvenir_pushButton_clicked()
{
    int souvCount = 0;
    int afterSouvCount = 0;

    QString nameTeam = ui->team3_comboBox->currentText();
    QString nameSouv = ui->souv_lineEdit->text();

    QSqlQuery data;
    QSqlQuery dataOne;
    QSqlQuery dataTwo;
    QSqlQuery qry;

    souvCount = data.prepare("SELECT COUNT(Team) FROM Souvenirs");
    data.exec();

    if(data.next())
    {
        souvCount = data.value(0).toInt();
    }

    qry.prepare("DELETE FROM Souvenirs WHERE Team = '"+nameTeam+"' AND Souvenir = '"+nameSouv+"'");
    qry.exec();
    dataOne.exec();

    afterSouvCount = dataTwo.prepare("SELECT COUNT(Team) FROM Souvenirs");
    dataTwo.exec();

    if(dataTwo.next())
    {
        afterSouvCount = dataTwo.value(0).toInt();
    }

    if(souvCount == afterSouvCount)
    {
        QMessageBox::about(this, "Error", "Value not found double check path to database!");
    }
    else
    {
        QMessageBox::about(this, "", "The item was deleted. Double check if an error occured");

        //ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
    }
}


void ModifySouvenirs::on_backButton_clicked()
{
    maintenance maintenancePage;
    maintenancePage.setModal(true);
    hide();
    maintenancePage.exec();
}

