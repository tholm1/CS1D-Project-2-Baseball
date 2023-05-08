#ifndef SOUVENIR2_H
#define SOUVENIR2_H

#include <QAbstractTableModel>
#include <QSortFilterProxyModel>
#include <QDebug>

struct Souvenir3 {
    // used with the QSortFilterProxyModel
    const static int COLUMN_COUNT = 3;
    Souvenir3() {}
    explicit Souvenir3(QString teamName, QString souvenirName, int souvenirPrice)
    {

        this->teamName = teamName;
        this->souvenirName = souvenirName;
        this->souvenirPrice = souvenirPrice;
    }
    // data
    QString teamName; /** Name of the team **/
    QString souvenirName; /** Name of the souvenir **/
    int souvenirPrice; /** The price of the souvenir **/
};

class SouvenirTableModel : public QAbstractTableModel
{
public:
    SouvenirTableModel();
    SouvenirTableModel(QObject* parent = 0);
    SouvenirTableModel(const QList<Souvenir3>& teamList,
                   QObject *parent = 0);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data (const QModelIndex & index,
                  int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const;
private:
    QList<Souvenir3> souvenirList;
};

#endif // SOUVENIR2_H
