/****************************************************************************
** Meta object code from reading C++ file 'modifysouvenirs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseballProject2/modifysouvenirs.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifysouvenirs.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModifySouvenirsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModifySouvenirsENDCLASS = QtMocHelpers::stringData(
    "ModifySouvenirs",
    "on_addSouvButton_clicked",
    "",
    "on_modifySouvenirButton_clicked",
    "on_deleteSouvenir_pushButton_clicked",
    "on_backButton_clicked",
    "on_addSouvenirFileButton_clicked",
    "showTeamComboBoxAddPage",
    "QSqlQueryModel*",
    "model",
    "showTeamComboBoxModifyPage",
    "showTeamComboBoxDeletePage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModifySouvenirsENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[16];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[37];
    char stringdata5[22];
    char stringdata6[33];
    char stringdata7[24];
    char stringdata8[16];
    char stringdata9[6];
    char stringdata10[27];
    char stringdata11[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModifySouvenirsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModifySouvenirsENDCLASS_t qt_meta_stringdata_CLASSModifySouvenirsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ModifySouvenirs"
        QT_MOC_LITERAL(16, 24),  // "on_addSouvButton_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 31),  // "on_modifySouvenirButton_clicked"
        QT_MOC_LITERAL(74, 36),  // "on_deleteSouvenir_pushButton_..."
        QT_MOC_LITERAL(111, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(133, 32),  // "on_addSouvenirFileButton_clicked"
        QT_MOC_LITERAL(166, 23),  // "showTeamComboBoxAddPage"
        QT_MOC_LITERAL(190, 15),  // "QSqlQueryModel*"
        QT_MOC_LITERAL(206, 5),  // "model"
        QT_MOC_LITERAL(212, 26),  // "showTeamComboBoxModifyPage"
        QT_MOC_LITERAL(239, 26)   // "showTeamComboBoxDeletePage"
    },
    "ModifySouvenirs",
    "on_addSouvButton_clicked",
    "",
    "on_modifySouvenirButton_clicked",
    "on_deleteSouvenir_pushButton_clicked",
    "on_backButton_clicked",
    "on_addSouvenirFileButton_clicked",
    "showTeamComboBoxAddPage",
    "QSqlQueryModel*",
    "model",
    "showTeamComboBoxModifyPage",
    "showTeamComboBoxDeletePage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModifySouvenirsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    6 /* Private */,
      10,    1,   70,    2, 0x08,    8 /* Private */,
      11,    1,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModifySouvenirs::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSModifySouvenirsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModifySouvenirsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModifySouvenirsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModifySouvenirs, std::true_type>,
        // method 'on_addSouvButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifySouvenirButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteSouvenir_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addSouvenirFileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showTeamComboBoxAddPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQueryModel *, std::false_type>,
        // method 'showTeamComboBoxModifyPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQueryModel *, std::false_type>,
        // method 'showTeamComboBoxDeletePage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQueryModel *, std::false_type>
    >,
    nullptr
} };

void ModifySouvenirs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModifySouvenirs *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addSouvButton_clicked(); break;
        case 1: _t->on_modifySouvenirButton_clicked(); break;
        case 2: _t->on_deleteSouvenir_pushButton_clicked(); break;
        case 3: _t->on_backButton_clicked(); break;
        case 4: _t->on_addSouvenirFileButton_clicked(); break;
        case 5: _t->showTeamComboBoxAddPage((*reinterpret_cast< std::add_pointer_t<QSqlQueryModel*>>(_a[1]))); break;
        case 6: _t->showTeamComboBoxModifyPage((*reinterpret_cast< std::add_pointer_t<QSqlQueryModel*>>(_a[1]))); break;
        case 7: _t->showTeamComboBoxDeletePage((*reinterpret_cast< std::add_pointer_t<QSqlQueryModel*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlQueryModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlQueryModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlQueryModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ModifySouvenirs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifySouvenirs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModifySouvenirsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ModifySouvenirs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
