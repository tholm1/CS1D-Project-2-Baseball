#ifndef MODIFYINFOMATION_H
#define MODIFYINFOMATION_H

#include <QDialog>

namespace Ui {
class modifyInfomation;
}

class modifyInfomation : public QDialog
{
    Q_OBJECT

public:
    explicit modifyInfomation(QWidget *parent = nullptr);
    ~modifyInfomation();

private:
    Ui::modifyInfomation *ui;
};

#endif // MODIFYINFOMATION_H
