/****************************************************************************
** Meta object code from reading C++ file 'tripplanner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaseballProject2/tripplanner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tripplanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TripPlanner_t {
    QByteArrayData data[11];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TripPlanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TripPlanner_t qt_meta_stringdata_TripPlanner = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TripPlanner"
QT_MOC_LITERAL(1, 12, 39), // "on_PushButton_MostEfficientTr..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 31), // "on_PushButton_BeginTrip_clicked"
QT_MOC_LITERAL(4, 85, 34), // "on_PushButton_BackToMain_6_cl..."
QT_MOC_LITERAL(5, 120, 45), // "on_PushButton_CustomMostEffic..."
QT_MOC_LITERAL(6, 166, 29), // "on_PushButton_AddTeam_clicked"
QT_MOC_LITERAL(7, 196, 37), // "on_PushButton_BeginCustomTrip..."
QT_MOC_LITERAL(8, 234, 32), // "on_PushButton_BackToMain_clicked"
QT_MOC_LITERAL(9, 267, 43), // "on_PushButton_BeginCustomTrip..."
QT_MOC_LITERAL(10, 311, 32) // "on_PushButton_CustomTrip_clicked"

    },
    "TripPlanner\0on_PushButton_MostEfficientTrip_clicked\0"
    "\0on_PushButton_BeginTrip_clicked\0"
    "on_PushButton_BackToMain_6_clicked\0"
    "on_PushButton_CustomMostEfficientTrip_clicked\0"
    "on_PushButton_AddTeam_clicked\0"
    "on_PushButton_BeginCustomTrip_clicked\0"
    "on_PushButton_BackToMain_clicked\0"
    "on_PushButton_BeginCustomTrip_Clear_clicked\0"
    "on_PushButton_CustomTrip_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TripPlanner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void TripPlanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TripPlanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PushButton_MostEfficientTrip_clicked(); break;
        case 1: _t->on_PushButton_BeginTrip_clicked(); break;
        case 2: _t->on_PushButton_BackToMain_6_clicked(); break;
        case 3: _t->on_PushButton_CustomMostEfficientTrip_clicked(); break;
        case 4: _t->on_PushButton_AddTeam_clicked(); break;
        case 5: _t->on_PushButton_BeginCustomTrip_clicked(); break;
        case 6: _t->on_PushButton_BackToMain_clicked(); break;
        case 7: _t->on_PushButton_BeginCustomTrip_Clear_clicked(); break;
        case 8: _t->on_PushButton_CustomTrip_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TripPlanner::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TripPlanner.data,
    qt_meta_data_TripPlanner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TripPlanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TripPlanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TripPlanner.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TripPlanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
