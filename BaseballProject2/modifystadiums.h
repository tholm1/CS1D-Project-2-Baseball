#ifndef MODIFYSTADIUMS_H
#define MODIFYSTADIUMS_H

#include <QDialog>
#include "dbmanager.h"


namespace Ui {
class ModifyStadiums;
}

class ModifyStadiums : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Constructor for the ModifyStadiums widget
     * @param parent [in] parent widget
     */
    explicit ModifyStadiums(QWidget *parent = nullptr);
    /**
     * @brief Destructor for ModifyStadiums
     */
    ~ModifyStadiums();
    /**
     * @brief Populates the table widget with the team and stadium list from the database.
     */
    void populateTableView();
    /**
     * @brief Updates the table widget and any combo boxes whenever changes are made to the
     * database to ensure they accurately reflect the current state of the database.
     */
    void updateDataView();

private slots:

    /**
     * @brief This button deletes the selected MLB team and its corresponding information from the MLB Team table.
     */
    void on_delBtn_clicked();

    /**
     * @brief This button returns the program back to the maintenance window.
     */
    void on_backBtn_clicked();

    /**
     * @brief This button allows the user to add MLB team information from a text file.
     *
     * This function will disallow duplicate team names and stadium names from being added to the database.
     */
    void on_confirmAddBtn_clicked();

    /**
     * @brief This signal removes the error message whenever the team name add line is edited.
     *
     * @param arg1 Default parameter not used within the function definition.
     */
    void on_teamNameAddLine_textEdited(const QString &arg1);

    /**
     * @brief This signal removes the error message whenever the stadium name add line is edited.
     *
     * @param arg1 Default parameter not used within the function definition.
     */
    void on_stadiumNameAddLine_textEdited(const QString &arg1);

    /**
     * @brief This function will update all of the text boxes from the modify stadium page to display the current team information stored for each team.
     * @param updatedTeamName The team name being udpated by the user selected using the combo box.
     */
    void on_teamNameUpdateBox_currentTextChanged(const QString &updatedTeamName);

    /**
     * @brief This button implements the updated changes to the team information and updates the database as well.
     */
    void on_confirmUpdateBtn_clicked();

private:
    Ui::ModifyStadiums *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Team> teamList;
    dbManager m_database;
    QString distanceFilePath;
};

#endif // MODIFYSTADIUMS_H
