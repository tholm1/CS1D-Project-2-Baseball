#ifndef DISPLAYTEAM_H
#define DISPLAYTEAM_H

#include <QDialog>

namespace Ui {
class displayTeam;
}

class displayTeam : public QDialog
{
    Q_OBJECT

public:
    explicit displayTeam(QWidget *parent = nullptr);
    ~displayTeam();

private slots:

    void on_back_pushButton_clicked();
    void on_displayAllInfo_clicked();

private:
    Ui::displayTeam *ui;
};

#endif // DISPLAYTEAM_H