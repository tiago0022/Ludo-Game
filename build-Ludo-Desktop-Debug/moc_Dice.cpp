/****************************************************************************
** Meta object code from reading C++ file 'Dice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Ludo/Dice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Dice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dice_t {
    QByteArrayData data[10];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Dice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Dice_t qt_meta_stringdata_Dice = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 4),
QT_MOC_LITERAL(2, 10, 0),
QT_MOC_LITERAL(3, 11, 1),
QT_MOC_LITERAL(4, 13, 5),
QT_MOC_LITERAL(5, 19, 15),
QT_MOC_LITERAL(6, 35, 11),
QT_MOC_LITERAL(7, 47, 4),
QT_MOC_LITERAL(8, 52, 7),
QT_MOC_LITERAL(9, 60, 5)
    },
    "Dice\0roll\0\0n\0reset\0ableToRollAgain\0"
    "handleClick\0play\0setDice\0enDis\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a,
       5,    0,   43,    2, 0x08,
       6,    1,   44,    2, 0x08,
       8,    1,   47,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void Dice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dice *_t = static_cast<Dice *>(_o);
        switch (_id) {
        case 0: _t->roll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->reset(); break;
        case 2: _t->ableToRollAgain(); break;
        case 3: _t->handleClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setDice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dice::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dice::roll)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Dice::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Dice.data,
      qt_meta_data_Dice,  qt_static_metacall, 0, 0}
};


const QMetaObject *Dice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dice.stringdata))
        return static_cast<void*>(const_cast< Dice*>(this));
    return QPushButton::qt_metacast(_clname);
}

int Dice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Dice::roll(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
