/****************************************************************************
** Meta object code from reading C++ file 'displayteam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaseballProject2/displayteam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayteam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_displayTeam_t {
    QByteArrayData data[5];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_displayTeam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_displayTeam_t qt_meta_stringdata_displayTeam = {
    {
QT_MOC_LITERAL(0, 0, 11), // "displayTeam"
QT_MOC_LITERAL(1, 12, 26), // "on_back_pushButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 39), // "on_displaySingleTeam_pushButt..."
QT_MOC_LITERAL(4, 80, 39) // "on_displayWithFilter_pushButt..."

    },
    "displayTeam\0on_back_pushButton_clicked\0"
    "\0on_displaySingleTeam_pushButton_clicked\0"
    "on_displayWithFilter_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_displayTeam[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void displayTeam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<displayTeam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_back_pushButton_clicked(); break;
        case 1: _t->on_displaySingleTeam_pushButton_clicked(); break;
        case 2: _t->on_displayWithFilter_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject displayTeam::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_displayTeam.data,
    qt_meta_data_displayTeam,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *displayTeam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *displayTeam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_displayTeam.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int displayTeam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
