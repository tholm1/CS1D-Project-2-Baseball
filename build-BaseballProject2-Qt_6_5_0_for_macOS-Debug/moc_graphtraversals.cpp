/****************************************************************************
** Meta object code from reading C++ file 'graphtraversals.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseballProject2/graphtraversals.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtraversals.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGraphTraversalsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGraphTraversalsENDCLASS = QtMocHelpers::stringData(
    "GraphTraversals",
    "on_PushButton_ViewMSTButton_clicked",
    "",
    "on_back_pushButton_clicked",
    "on_PushButton_CalcDFS_clicked",
    "on_PushButton_CalcBFS_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGraphTraversalsENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[16];
    char stringdata1[36];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[30];
    char stringdata5[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGraphTraversalsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGraphTraversalsENDCLASS_t qt_meta_stringdata_CLASSGraphTraversalsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "GraphTraversals"
        QT_MOC_LITERAL(16, 35),  // "on_PushButton_ViewMSTButton_c..."
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 26),  // "on_back_pushButton_clicked"
        QT_MOC_LITERAL(80, 29),  // "on_PushButton_CalcDFS_clicked"
        QT_MOC_LITERAL(110, 29)   // "on_PushButton_CalcBFS_clicked"
    },
    "GraphTraversals",
    "on_PushButton_ViewMSTButton_clicked",
    "",
    "on_back_pushButton_clicked",
    "on_PushButton_CalcDFS_clicked",
    "on_PushButton_CalcBFS_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGraphTraversalsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GraphTraversals::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSGraphTraversalsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGraphTraversalsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGraphTraversalsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GraphTraversals, std::true_type>,
        // method 'on_PushButton_ViewMSTButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PushButton_CalcDFS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PushButton_CalcBFS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GraphTraversals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphTraversals *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_PushButton_ViewMSTButton_clicked(); break;
        case 1: _t->on_back_pushButton_clicked(); break;
        case 2: _t->on_PushButton_CalcDFS_clicked(); break;
        case 3: _t->on_PushButton_CalcBFS_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *GraphTraversals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphTraversals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGraphTraversalsENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
