#ifndef TEAMTABLEMODEL_H
#define TEAMTABLEMODEL_H

#include <QAbstractTableModel>
#include <QSortFilterProxyModel>
#include <QDebug>


struct Team {
    // used with the QSortFilterProxyModel
    const static int COLUMN_COUNT = 10;
    Team() {}
    explicit Team(QString teamName, QString stadiumName, int seatingCapacity,
                  QString location, QString playingSurface, QString league,
                  int dateOpened, int distanceToCF, QString ballparkTopology,
                  QString roofType) {

        this->teamName = teamName;
        this->stadiumName = stadiumName;
        this->seatingCapacity = seatingCapacity;
        this->location = location;
        this->playingSurface = playingSurface;
        this->league = league;
        this->dateOpened = dateOpened;
        this->distanceToCenterField = distanceToCF;
        this->ballparkTopology = ballparkTopology;
        this->roofType = roofType;
    }
    // data
    QString teamName;
    QString stadiumName;
    int seatingCapacity;
    QString location;
    QString playingSurface;
    QString league;
    int dateOpened;
    int distanceToCenterField;
    QString ballparkTopology;
    QString roofType;
};

class TeamTableModel : public QAbstractTableModel {
public:
    TeamTableModel(QObject* parent = 0);
    TeamTableModel(const QList<Team>& teamList,
                   QObject *parent = 0);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data (const QModelIndex & index,
                   int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const;
private:
    QList<Team> teamList;
};


#endif // TEAMTABLEMODEL_H

