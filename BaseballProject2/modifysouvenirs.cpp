#include "modifysouvenirs.h"
#include "ui_modifysouvenirs.h"
#include "maintenance.h"
#include <QMessageBox>
#include <QFileDialog>

ModifySouvenirs::ModifySouvenirs(QWidget *parent) : QDialog(parent),
                                                    ui(new Ui::ModifySouvenirs)
{
    ui->setupUi(this);
    showTeamComboBoxAddPage(database.loadTeamNamesOnly());
    showTeamComboBoxModifyPage(database.loadTeamNamesOnly());
    showTeamComboBoxDeletePage(database.loadTeamNamesOnly());
}

ModifySouvenirs::~ModifySouvenirs()
{
    delete ui;
}

void ModifySouvenirs::showTeamComboBoxAddPage(QSqlQueryModel *model)
{
    ui->team_comboBox->setModel(model);
}

void ModifySouvenirs::showTeamComboBoxModifyPage(QSqlQueryModel *model)
{
    ui->team2_comboBox->setModel(model);
}

void ModifySouvenirs::showTeamComboBoxDeletePage(QSqlQueryModel *model)
{
    ui->team3_comboBox->setModel(model);
}

void ModifySouvenirs::on_addSouvButton_clicked()
{
    QSqlQuery data;
    QSqlQuery dataOne;
    QSqlQuery dataTwo;

    QString teamName = ui->team_comboBox->currentText();
    QString souvName = ui->souvName_lineEdit->text();
    QString souvPrice = ui->souvPrice_lineEdit->text();
    QString quantity = "0.0";


    bool check = false;

    for (int i = 0; i < souvPrice.length(); i++)
    {
        if (souvPrice[i] != '0' && souvPrice[i] != '1' && souvPrice[i] != '2' && souvPrice[i] != '3' && souvPrice[i] != '4' && souvPrice[i] != '5' && souvPrice[i] != '6' && souvPrice[i] != '7' && souvPrice[i] != '8' && souvPrice[i] != '9' && souvPrice[i] != '.')
        {
            check = true;
            break;
        }
    }

    if (check == true)
    {
        QMessageBox::about(this, "Invalid Input", "There was an invalid input. Please use only Numerals(0-9) and the . ");
        return;
    }

    data.prepare("INSERT INTO Souvenirs (Team, Souvenir, Price) VALUES ('"+teamName+"', '"+souvName+"', '"+souvPrice+"')");

    if (!data.exec())
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

    for (int i = 0; i < souvPrice.length(); i++)
    {
        if (souvPrice[i] != '0' && souvPrice[i] != '1' && souvPrice[i] != '2' && souvPrice[i] != '3' && souvPrice[i] != '4' && souvPrice[i] != '5' && souvPrice[i] != '6' && souvPrice[i] != '7' && souvPrice[i] != '8' && souvPrice[i] != '9' && souvPrice[i] != '.')
        {
            check = true;
            break;
        }
    }

    if (check == true)
    {
        QMessageBox::about(this, "Invalid Input", "There was an invalid input. Please use only Numerals(0-9) and the . ");
        return;
    }

    QSqlQuery qry;
    qry.prepare("UPDATE Souvenirs SET Team = '"+souvTeam+"', Souvenir = '"+souvName+"' , Price = '"+souvPrice+"' WHERE Souvenir = '"+souvName+"' AND Team = '"+souvTeam+"' ");
    qry.exec();

    if (qry.numRowsAffected() == 0)
    {
        QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }
    else
    {
        QMessageBox::about(this, tr("Edit"), tr("Updated"));
    }

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

    if (data.next())
    {
        souvCount = data.value(0).toInt();
    }

    qry.prepare("DELETE FROM Souvenirs WHERE Team = '" + nameTeam + "' AND Souvenir = '" + nameSouv + "'");
    qry.exec();
    dataOne.exec();

    afterSouvCount = dataTwo.prepare("SELECT COUNT(Team) FROM Souvenirs");
    dataTwo.exec();

    if (dataTwo.next())
    {
        afterSouvCount = dataTwo.value(0).toInt();
    }

    if (souvCount == afterSouvCount)
    {
        QMessageBox::about(this, "Error", "Value not found double check path to database!");
    }
    else
    {
        QMessageBox::about(this, "", "The item was deleted. Double check if an error occured");
    }
}

void ModifySouvenirs::on_backButton_clicked()
{
    maintenance maintenancePage;
    maintenancePage.setModal(true);
    hide();
    maintenancePage.exec();
}

void ModifySouvenirs::on_addSouvenirFileButton_clicked()
{
//    bool success = dbManagers->readSouvenirFile();
//    if(success)
//    {
//        QMessageBox::information(this, "Loading...", "Souvenir Info File Has Been Read In"  , QMessageBox::Ok, QMessageBox::NoButton);
//    }
//    else
//    {
//        QMessageBox::information(this, "Loading...", "Souvenir Info File Has Not Been Read In"  , QMessageBox::Ok, QMessageBox::NoButton);
//    }
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open Text File", "", "Text Files (*.txt)");

    if (!filePath.isEmpty())
    {
        // Open the selected file
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            // Read the file contents into a QTextStream
            QTextStream in(&file);
            while (!in.atEnd())
            {
                QString addTeamName = in.readLine();
                QString addSouvenirName = in.readLine();
                double addPrice = in.readLine().toDouble();

                // Display the file contents
                qDebug() << "File Contents:\n"
                         << addTeamName << Qt::endl
                         << addTeamName << Qt::endl
                         << addSouvenirName
                         << Qt::endl
                         << addPrice;
                //                try
                //                {
                //                    QSqlQuery* checkTeamQuery = new QSqlQuery(dbManager::managerInstance->m_database);
                //                    checkTeamQuery->prepare("SELECT \"Team\" FROM \"Souvenirs\" WHERE \"Team\" = :checkTeamName");
                //                    checkTeamQuery->bindValue(":checkTeamName", addTeamName);
                //                    checkTeamQuery->exec();
                //                    checkTeamQuery->next();

                //                    QString teamSearched = checkTeamQuery->value(0).toString();
                //                    checkTeamQuery->finish();
                //                    if(teamSearched == addTeamName) // checks for duplicate team name
                //                    {
                //                        throw 0;
                //                    }

                //                    QSqlQuery* checkStadiumQuery = new QSqlQuery(dbManager::managerInstance->m_database);
                //                    checkStadiumQuery->prepare("SELECT \"Stadium Name\" FROM \"MLB Teams\" WHERE \"Stadium Name\" = :checkStadiumName");
                //                    checkStadiumQuery->bindValue(":checkStadiumName", addStadiumName);
                //                    checkStadiumQuery->exec();
                //                    checkStadiumQuery->next();

                //                    QString stadiumSearched = checkStadiumQuery->value(0).toString();

                //                    checkStadiumQuery->finish();

                //                    if(stadiumSearched == addStadiumName) // checks for duplicate stadium name
                //                    {
                //                        throw 1;
                //                    }
//                    QString teamSearched = checkTeamQuery->value(0).toString();
//                    checkTeamQuery->finish();
//                    if(teamSearched == addTeamName) // checks for duplicate team name
//                    {
//                        throw 0;
//                    }

                QSqlQuery *addQuery = new QSqlQuery(dbManager::managerInstance->m_database);
                addQuery->prepare("INSERT INTO \"Souvenirs\" ("
                                  "\"Team\", "
                                  "\"Souvenir\", "
                                  "\"Price\""
                                  ") "
                                  "VALUES ("
                                  ":teamName, "
                                  ":souvenirName, "
                                  ":souvenirPrice"
                                  ")");

                addQuery->bindValue(":teamName", addTeamName);
                addQuery->bindValue(":souvenirName", addSouvenirName);
                addQuery->bindValue(":souvenirPrice", addPrice);

                addQuery->exec();
                addQuery->clear();
                // updateDataView();
                //                }
                //                catch(int addUpdateError)
                //                {
                //                    ui->errorLabel->setVisible(true);

                //                    if(addUpdateError == 0)
                //                    {
                //                        ui->errorLabel->setText("You cannot enter a duplicate souvenir name.");
                //                        qDebug() << "DUPLICATE SOUVENIR NAME";
                //                            //<< Qt::endl; // insert error message
                //                    }
                //                    if(addUpdateError == 1)
                //                    {
                //                        ui->errorLabel->setText("You cannot enter a duplicate souvenir price.");
                //                        qDebug() << "DUPLICATE SOUVENIR PRICE";
                //                            //<< Qt::endl; // insert error message
                //                    }
                //                }
            }

            // Close the file
            file.close();
        }
        else
        {
            qDebug() << "Failed to open the file:" << file.errorString();
        }
    }
}
