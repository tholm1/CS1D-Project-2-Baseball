#ifndef DISPLAYINFO_H
#define DISPLAYINFO_H

#include <QDialog>

namespace Ui {
class displayInfo;
}

class displayInfo : public QDialog
{
    Q_OBJECT

public:
    explicit displayInfo(QWidget *parent = nullptr);
    ~displayInfo();

private:
    Ui::displayInfo *ui;
};

#endif // DISPLAYINFO_H
