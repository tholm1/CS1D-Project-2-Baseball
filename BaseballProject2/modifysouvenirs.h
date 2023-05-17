#ifndef MODIFYSOUVENIRS_H
#define MODIFYSOUVENIRS_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class ModifySouvenirs;
}

class ModifySouvenirs : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Constructor for the ModifySouvenirs widget
     * @param parent [in] parent widget
     */
    explicit ModifySouvenirs(QWidget *parent = nullptr);

    /**
     * @brief Destructor for ModifyStadiums
     */
    ~ModifySouvenirs();

private slots:
    /**
     * @brief This button allows the user to add a souvenir to a specific
     *        team by reading the line edits and adds it to the database
     */
    void on_addSouvButton_clicked();

    /**
     * @brief This button allows the user to modify the price
     */
    void on_modifySouvenirButton_clicked();

    /**
     * @brief Deletes a souvenir from a team from the database
     */
    void on_deleteSouvenir_pushButton_clicked();

    /**
     * @brief Back button to let the user go back to the previous screen
     */
    void on_backButton_clicked();

    /**
     * @brief This button lets the user use a file that holds data
     *        for souvenirs and add it through that means
     */
    void on_addSouvenirFileButton_clicked();

    /**
     * @brief This function takes the teams from the database and
     *        displays them to the combo box so that the user can
     *        add a souvenir to their team
     * @param model
     */
    void showTeamComboBoxAddPage(QSqlQueryModel *model);

    /**
     * @brief This function takes the teams from the database and
     *        displays them to the combo box so that the user can
     *        modify a souvenir to their team
     * @param model
     */
    void showTeamComboBoxModifyPage(QSqlQueryModel *model);

    /**
     * @brief This function takes the teams from the database and
     *        displays them to the combo box so that the user can
     *        delete a souvenir to their team
     * @param model
     */
    void showTeamComboBoxDeletePage(QSqlQueryModel * model);

private:
    Ui::ModifySouvenirs *ui;
    dbManager database;
    dbManager *dbManagers;
};

#endif // MODIFYSOUVENIRS_H
