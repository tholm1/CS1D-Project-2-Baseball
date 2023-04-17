#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <QDialog>

namespace Ui {
class maintenance;
}

class maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit maintenance(QWidget *parent = nullptr);
    ~maintenance();

private slots:
    void on_modifyInfo_pushButton_clicked();

    void on_Add_Delete_Info_pushButton_clicked();

    void on_back_pushButton_clicked();

private:
    Ui::maintenance *ui;
};

#endif // MAINTENANCE_H
