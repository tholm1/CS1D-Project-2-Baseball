/****************************************************************************
** Meta object code from reading C++ file 'filteredteams.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaseballProject2/filteredteams.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filteredteams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_filteredTeams_t {
    QByteArrayData data[12];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_filteredTeams_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_filteredTeams_t qt_meta_stringdata_filteredTeams = {
    {
QT_MOC_LITERAL(0, 0, 13), // "filteredTeams"
QT_MOC_LITERAL(1, 14, 31), // "on_noFilter_radioButton_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 45), // "on_filterByAmericanLeague_rad..."
QT_MOC_LITERAL(4, 93, 45), // "on_filterByNationalLeague_rad..."
QT_MOC_LITERAL(5, 139, 26), // "on_back_pushButton_clicked"
QT_MOC_LITERAL(6, 166, 39), // "on_filterByTypology_radioButt..."
QT_MOC_LITERAL(7, 206, 39), // "on_filterByOpenRoof_radioButt..."
QT_MOC_LITERAL(8, 246, 39), // "on_filterByDateOpen_radioButt..."
QT_MOC_LITERAL(9, 286, 46), // "on_filterBySeatingCapacity_ra..."
QT_MOC_LITERAL(10, 333, 43), // "on_filterByDistancetoCF_radio..."
QT_MOC_LITERAL(11, 377, 23) // "on_filterMaxMin_clicked"

    },
    "filteredTeams\0on_noFilter_radioButton_clicked\0"
    "\0on_filterByAmericanLeague_radioButton_clicked\0"
    "on_filterByNationalLeague_radioButton_clicked\0"
    "on_back_pushButton_clicked\0"
    "on_filterByTypology_radioButton_clicked\0"
    "on_filterByOpenRoof_radioButton_clicked\0"
    "on_filterByDateOpen_radioButton_clicked\0"
    "on_filterBySeatingCapacity_radioButton_clicked\0"
    "on_filterByDistancetoCF_radioButton_clicked\0"
    "on_filterMaxMin_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_filteredTeams[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void filteredTeams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<filteredTeams *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_noFilter_radioButton_clicked(); break;
        case 1: _t->on_filterByAmericanLeague_radioButton_clicked(); break;
        case 2: _t->on_filterByNationalLeague_radioButton_clicked(); break;
        case 3: _t->on_back_pushButton_clicked(); break;
        case 4: _t->on_filterByTypology_radioButton_clicked(); break;
        case 5: _t->on_filterByOpenRoof_radioButton_clicked(); break;
        case 6: _t->on_filterByDateOpen_radioButton_clicked(); break;
        case 7: _t->on_filterBySeatingCapacity_radioButton_clicked(); break;
        case 8: _t->on_filterByDistancetoCF_radioButton_clicked(); break;
        case 9: _t->on_filterMaxMin_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject filteredTeams::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_filteredTeams.data,
    qt_meta_data_filteredTeams,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *filteredTeams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *filteredTeams::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_filteredTeams.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int filteredTeams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
