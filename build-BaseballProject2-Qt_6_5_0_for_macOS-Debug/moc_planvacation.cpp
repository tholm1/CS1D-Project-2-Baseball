/****************************************************************************
** Meta object code from reading C++ file 'planvacation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseballProject2/planvacation.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planvacation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSplanVacationENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSplanVacationENDCLASS = QtMocHelpers::stringData(
    "planVacation",
    "on_back_pushButton_clicked",
    "",
    "on_backButton_clicked",
    "on_addSouv_button_clicked",
    "on_pushButton_clicked",
    "on_selectTeamName_currentIndexChanged",
    "index",
    "on_checkout_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSplanVacationENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[26];
    char stringdata5[22];
    char stringdata6[38];
    char stringdata7[6];
    char stringdata8[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSplanVacationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSplanVacationENDCLASS_t qt_meta_stringdata_CLASSplanVacationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "planVacation"
        QT_MOC_LITERAL(13, 26),  // "on_back_pushButton_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(63, 25),  // "on_addSouv_button_clicked"
        QT_MOC_LITERAL(89, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(111, 37),  // "on_selectTeamName_currentInde..."
        QT_MOC_LITERAL(149, 5),  // "index"
        QT_MOC_LITERAL(155, 26)   // "on_checkout_button_clicked"
    },
    "planVacation",
    "on_back_pushButton_clicked",
    "",
    "on_backButton_clicked",
    "on_addSouv_button_clicked",
    "on_pushButton_clicked",
    "on_selectTeamName_currentIndexChanged",
    "index",
    "on_checkout_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSplanVacationENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       8,    0,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject planVacation::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSplanVacationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSplanVacationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSplanVacationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<planVacation, std::true_type>,
        // method 'on_back_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addSouv_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_selectTeamName_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkout_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void planVacation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<planVacation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_back_pushButton_clicked(); break;
        case 1: _t->on_backButton_clicked(); break;
        case 2: _t->on_addSouv_button_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_selectTeamName_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_checkout_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *planVacation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *planVacation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSplanVacationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int planVacation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
