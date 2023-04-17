#include "displayteams.h"
#include "ui_displayteams.h"

displayTeams::displayTeams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::displayTeams)
{
    ui->setupUi(this);
}

displayTeams::~displayTeams()
{
    delete ui;
}
