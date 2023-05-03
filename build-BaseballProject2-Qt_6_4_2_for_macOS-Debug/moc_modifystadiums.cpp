/****************************************************************************
** Meta object code from reading C++ file 'modifystadiums.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../BaseballProject2/modifystadiums.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifystadiums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_ModifyStadiums_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[25];
    char stringdata5[30];
    char stringdata6[5];
    char stringdata7[33];
    char stringdata8[40];
    char stringdata9[16];
    char stringdata10[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ModifyStadiums_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ModifyStadiums_t qt_meta_stringdata_ModifyStadiums = {
    {
        QT_MOC_LITERAL(0, 14),  // "ModifyStadiums"
        QT_MOC_LITERAL(15, 17),  // "on_delBtn_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 18),  // "on_backBtn_clicked"
        QT_MOC_LITERAL(53, 24),  // "on_confirmAddBtn_clicked"
        QT_MOC_LITERAL(78, 29),  // "on_teamNameAddLine_textEdited"
        QT_MOC_LITERAL(108, 4),  // "arg1"
        QT_MOC_LITERAL(113, 32),  // "on_stadiumNameAddLine_textEdited"
        QT_MOC_LITERAL(146, 39),  // "on_teamNameUpdateBox_currentT..."
        QT_MOC_LITERAL(186, 15),  // "updatedTeamName"
        QT_MOC_LITERAL(202, 27)   // "on_confirmUpdateBtn_clicked"
    },
    "ModifyStadiums",
    "on_delBtn_clicked",
    "",
    "on_backBtn_clicked",
    "on_confirmAddBtn_clicked",
    "on_teamNameAddLine_textEdited",
    "arg1",
    "on_stadiumNameAddLine_textEdited",
    "on_teamNameUpdateBox_currentTextChanged",
    "updatedTeamName",
    "on_confirmUpdateBtn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ModifyStadiums[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    1,   59,    2, 0x08,    4 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
       8,    1,   65,    2, 0x08,    8 /* Private */,
      10,    0,   68,    2, 0x08,   10 /* Private */,

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

Q_CONSTINIT const QMetaObject ModifyStadiums::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ModifyStadiums.offsetsAndSizes,
    qt_meta_data_ModifyStadiums,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ModifyStadiums_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModifyStadiums, std::true_type>,
        // method 'on_delBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmAddBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_teamNameAddLine_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_stadiumNameAddLine_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_teamNameUpdateBox_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_confirmUpdateBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModifyStadiums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModifyStadiums *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_delBtn_clicked(); break;
        case 1: _t->on_backBtn_clicked(); break;
        case 2: _t->on_confirmAddBtn_clicked(); break;
        case 3: _t->on_teamNameAddLine_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_stadiumNameAddLine_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_teamNameUpdateBox_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_confirmUpdateBtn_clicked(); break;
        default: ;
        }
    }
}

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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
