/****************************************************************************
** Meta object code from reading C++ file 'Ludo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Ludo/Ludo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ludo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ludo_t {
    QByteArrayData data[16];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Ludo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Ludo_t qt_meta_stringdata_Ludo = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 10),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 5),
QT_MOC_LITERAL(4, 23, 11),
QT_MOC_LITERAL(5, 35, 13),
QT_MOC_LITERAL(6, 49, 4),
QT_MOC_LITERAL(7, 54, 10),
QT_MOC_LITERAL(8, 65, 1),
QT_MOC_LITERAL(9, 67, 10),
QT_MOC_LITERAL(10, 78, 9),
QT_MOC_LITERAL(11, 88, 10),
QT_MOC_LITERAL(12, 99, 6),
QT_MOC_LITERAL(13, 106, 5),
QT_MOC_LITERAL(14, 112, 10),
QT_MOC_LITERAL(15, 123, 20)
    },
    "Ludo\0enableDice\0\0enDis\0disableDice\0"
    "rollDiceAgain\0play\0handleDice\0n\0"
    "handleHome\0homeColor\0handlePlay\0pawnID\0"
    "reset\0handleTurn\0setAvailableMovement\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ludo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    1,   62,    2, 0x06,
       5,    1,   65,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    1,   68,    2, 0x08,
       9,    2,   71,    2, 0x08,
      11,    1,   76,    2, 0x08,
      13,    0,   79,    2, 0x08,
      14,    1,   80,    2, 0x08,
      15,    0,   83,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void Ludo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ludo *_t = static_cast<Ludo *>(_o);
        switch (_id) {
        case 0: _t->enableDice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->disableDice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->rollDiceAgain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->handleDice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleHome((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handlePlay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->reset(); break;
        case 7: _t->handleTurn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setAvailableMovement(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Ludo::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ludo::enableDice)) {
                *result = 0;
            }
        }
        {
            typedef void (Ludo::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ludo::disableDice)) {
                *result = 1;
            }
        }
        {
            typedef void (Ludo::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ludo::rollDiceAgain)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Ludo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Ludo.data,
      qt_meta_data_Ludo,  qt_static_metacall, 0, 0}
};


const QMetaObject *Ludo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ludo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ludo.stringdata))
        return static_cast<void*>(const_cast< Ludo*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Ludo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Ludo::enableDice(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Ludo::disableDice(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Ludo::rollDiceAgain(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
