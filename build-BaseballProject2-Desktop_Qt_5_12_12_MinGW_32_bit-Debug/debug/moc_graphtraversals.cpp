/****************************************************************************
** Meta object code from reading C++ file 'graphtraversals.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaseballProject2/graphtraversals.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtraversals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphTraversals_t {
    QByteArrayData data[6];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphTraversals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphTraversals_t qt_meta_stringdata_GraphTraversals = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GraphTraversals"
QT_MOC_LITERAL(1, 16, 35), // "on_PushButton_ViewMSTButton_c..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "on_back_pushButton_clicked"
QT_MOC_LITERAL(4, 80, 29), // "on_PushButton_CalcDFS_clicked"
QT_MOC_LITERAL(5, 110, 29) // "on_PushButton_CalcBFS_clicked"

    },
    "GraphTraversals\0on_PushButton_ViewMSTButton_clicked\0"
    "\0on_back_pushButton_clicked\0"
    "on_PushButton_CalcDFS_clicked\0"
    "on_PushButton_CalcBFS_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphTraversals[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphTraversals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphTraversals *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PushButton_ViewMSTButton_clicked(); break;
        case 1: _t->on_back_pushButton_clicked(); break;
        case 2: _t->on_PushButton_CalcDFS_clicked(); break;
        case 3: _t->on_PushButton_CalcBFS_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphTraversals::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_GraphTraversals.data,
    qt_meta_data_GraphTraversals,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphTraversals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphTraversals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphTraversals.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GraphTraversals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
