#ifndef MODIFYSOUVENIRS_H
#define MODIFYSOUVENIRS_H

#include <QDialog>

namespace Ui {
class ModifySouvenirs;
}

class ModifySouvenirs : public QDialog
{
    Q_OBJECT

public:
    explicit ModifySouvenirs(QWidget *parent = nullptr);
    ~ModifySouvenirs();

private:
    Ui::ModifySouvenirs *ui;
};

#endif // MODIFYSOUVENIRS_H
