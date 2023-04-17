#ifndef DISPLAYTEAMS_H
#define DISPLAYTEAMS_H

#include <QWidget>

namespace Ui {
class displayTeams;
}

class displayTeams : public QWidget
{
    Q_OBJECT

public:
    explicit displayTeams(QWidget *parent = nullptr);
    ~displayTeams();

private:
    Ui::displayTeams *ui;
};

#endif // DISPLAYTEAMS_H
