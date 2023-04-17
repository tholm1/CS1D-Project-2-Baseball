#ifndef MODIFYINFO_H
#define MODIFYINFO_H

#include <QWidget>

namespace Ui {
class modifyInfo;
}

class modifyInfo : public QWidget
{
    Q_OBJECT

public:
    explicit modifyInfo(QWidget *parent = nullptr);
    ~modifyInfo();

private:
    Ui::modifyInfo *ui;
};

#endif // MODIFYINFO_H
