#include "souvenir2.h"

SouvenirTableModel::SouvenirTableModel(QObject *parent) : QAbstractTableModel(parent)
{

}

SouvenirTableModel::SouvenirTableModel(const QList<Souvenir3> &souvenirList,
                               QObject* parent):
    QAbstractTableModel(parent)
{
    this->souvenirList = souvenirList;
}

int SouvenirTableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return Souvenir3::COLUMN_COUNT;
}

int SouvenirTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return souvenirList.size();
}

QVariant SouvenirTableModel::data (const QModelIndex & index,
                              int role) const {
    // used for distance to CF formatting
    const double METERS_PER_FOOT = 0.3048;

    if (!index.isValid())
        return QVariant();
    if (index.row() >= souvenirList.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::DisplayRole) {
        const Souvenir3& souvenir = souvenirList.at(index.row());
        //        QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
        //        QLocale aEnglish;

        //        QString formattedCapacity = aEnglish.toString(team.seatingCapacity);

        switch (index.column()) {
        case 0:
            return souvenir.teamName;
        case 1:
            return souvenir.souvenirName;
        case 2:
            return souvenir.souvenirPrice;

        default:
            return QVariant();
        }
    }

    else if (role == Qt::TextAlignmentRole){
        return Qt::AlignCenter;
    }
    return QVariant();
}

QVariant SouvenirTableModel::headerData(int section,
                                    Qt::Orientation orientation,
                                    int role) const {
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("Team");
        case 1:
            return tr("Souvenir");
        case 2:
            return tr("Price");
        default:
            return QVariant();
        }
    }
    return section + 1;
}
