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
    ~ModifyStadiums();
    /**
     * @brief Populates the table widget with the team and stadium list from the database
     */
    void populateTableView();
    /**
     * @brief Updates the table widget and any combo boxes whenever changes are made to the
     * database to ensure they accurately reflect the current state of the database.
     */
    void updateDataView();

private slots:


    void on_delBtn_clicked();

    void on_backBtn_clicked();

    void on_confirmAddBtn_clicked();

    void on_teamNameAddLine_textEdited(const QString &arg1);

    void on_stadiumNameAddLine_textEdited(const QString &arg1);

    void on_teamNameUpdateBox_currentTextChanged(const QString &updatedTeamName);

private:
    Ui::ModifyStadiums *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    QList<Team> teamList;
    dbManager m_database;
};

#endif // MODIFYSTADIUMS_H
