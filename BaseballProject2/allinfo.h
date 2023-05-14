#ifndef ALLINFO_H
#define ALLINFO_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class Allinfo;
}

class Allinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Allinfo(QWidget *parent = nullptr);
    void showTeamDBCombo(QSqlQueryModel *model);
    ~Allinfo();

private slots:
    void on_search_button_clicked();

    void on_mainpage_clicked();

    void on_teams_combo_currentTextChanged(const QString &arg1);

private:
    Ui::Allinfo *ui;
    dbManager m_database;   /**< database manager variable*/
};

#endif // ALLINFO_H
