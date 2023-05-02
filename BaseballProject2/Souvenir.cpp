#include "Souvenir.h"

Souvenir::Souvenir(QObject *parent) : QObject(parent)
{

}

QString Souvenir::item() const
{
    return m_item;
}

void Souvenir::setItem(const QString &item)
{
    m_item = item;
}

QString Souvenir::price() const
{
    return m_price;
}

void Souvenir::setPrice(QString price)
{
    m_price = price;
}

void Souvenir::setTeam(QString team)
{
    TeamName = team;
}
QString Souvenir :: team() const
{
    return TeamName;
}
