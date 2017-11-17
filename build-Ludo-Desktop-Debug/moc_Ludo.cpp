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
    QByteArrayData data[7];
    char stringdata[48];
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
QT_MOC_LITERAL(3, 17, 1),
QT_MOC_LITERAL(4, 19, 10),
QT_MOC_LITERAL(5, 30, 10),
QT_MOC_LITERAL(6, 41, 5)
    },
    "Ludo\0handleDice\0\0n\0handleHome\0handlePlay\0"
    "reset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ludo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08,
       4,    1,   37,    2, 0x08,
       5,    0,   40,    2, 0x08,
       6,    0,   41,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ludo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ludo *_t = static_cast<Ludo *>(_o);
        switch (_id) {
        case 0: _t->handleDice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleHome((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->handlePlay(); break;
        case 3: _t->reset(); break;
        default: ;
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
QT_END_MOC_NAMESPACE
