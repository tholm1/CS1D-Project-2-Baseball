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
    explicit ModifySouvenirs(QWidget *parent = nullptr);
    ~ModifySouvenirs();

private slots:
    void on_addSouvButton_clicked();

    void on_modifySouvenirButton_clicked();

    void on_deleteSouvenir_pushButton_clicked();

    void on_backButton_clicked();

private:
    Ui::ModifySouvenirs *ui;
    dbManager database;
};

#endif // MODIFYSOUVENIRS_H
