/****************************************************************************
** Meta object code from reading C++ file 'modifystadiums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaseballProject2/modifystadiums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifystadiums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModifyStadiums_t {
    QByteArrayData data[11];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModifyStadiums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModifyStadiums_t qt_meta_stringdata_ModifyStadiums = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ModifyStadiums"
QT_MOC_LITERAL(1, 15, 17), // "on_delBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(4, 53, 24), // "on_confirmAddBtn_clicked"
QT_MOC_LITERAL(5, 78, 29), // "on_teamNameAddLine_textEdited"
QT_MOC_LITERAL(6, 108, 4), // "arg1"
QT_MOC_LITERAL(7, 113, 32), // "on_stadiumNameAddLine_textEdited"
QT_MOC_LITERAL(8, 146, 39), // "on_teamNameUpdateBox_currentT..."
QT_MOC_LITERAL(9, 186, 15), // "updatedTeamName"
QT_MOC_LITERAL(10, 202, 27) // "on_confirmUpdateBtn_clicked"

    },
    "ModifyStadiums\0on_delBtn_clicked\0\0"
    "on_backBtn_clicked\0on_confirmAddBtn_clicked\0"
    "on_teamNameAddLine_textEdited\0arg1\0"
    "on_stadiumNameAddLine_textEdited\0"
    "on_teamNameUpdateBox_currentTextChanged\0"
    "updatedTeamName\0on_confirmUpdateBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyStadiums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void ModifyStadiums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModifyStadiums *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_delBtn_clicked(); break;
        case 1: _t->on_backBtn_clicked(); break;
        case 2: _t->on_confirmAddBtn_clicked(); break;
        case 3: _t->on_teamNameAddLine_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_stadiumNameAddLine_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_teamNameUpdateBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_confirmUpdateBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModifyStadiums::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ModifyStadiums.data,
    qt_meta_data_ModifyStadiums,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModifyStadiums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyStadiums::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyStadiums.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ModifyStadiums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
