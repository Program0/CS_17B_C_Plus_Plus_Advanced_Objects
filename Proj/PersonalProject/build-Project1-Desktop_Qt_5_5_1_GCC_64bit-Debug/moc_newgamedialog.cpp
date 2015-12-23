/****************************************************************************
** Meta object code from reading C++ file 'newgamedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CSC17C/Proj/Project2/Project2Code/newgamedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newgamedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewGameDialog_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewGameDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewGameDialog_t qt_meta_stringdata_NewGameDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NewGameDialog"
QT_MOC_LITERAL(1, 14, 9), // "startGame"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "playerOneRole"
QT_MOC_LITERAL(4, 39, 17), // "duplicatesAllowed"
QT_MOC_LITERAL(5, 57, 11), // "codeChanged"
QT_MOC_LITERAL(6, 69, 10), // "codeLength"
QT_MOC_LITERAL(7, 80, 7), // "newGame"
QT_MOC_LITERAL(8, 88, 5), // "start"
QT_MOC_LITERAL(9, 94, 7), // "setCode"
QT_MOC_LITERAL(10, 102, 5) // "entry"

    },
    "NewGameDialog\0startGame\0\0playerOneRole\0"
    "duplicatesAllowed\0codeChanged\0codeLength\0"
    "newGame\0start\0setCode\0entry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewGameDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void NewGameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewGameDialog *_t = static_cast<NewGameDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->playerOneRole((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->duplicatesAllowed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->codeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->codeLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->newGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NewGameDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewGameDialog::startGame)) {
                *result = 0;
            }
        }
        {
            typedef void (NewGameDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewGameDialog::playerOneRole)) {
                *result = 1;
            }
        }
        {
            typedef void (NewGameDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewGameDialog::duplicatesAllowed)) {
                *result = 2;
            }
        }
        {
            typedef void (NewGameDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewGameDialog::codeChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (NewGameDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewGameDialog::codeLength)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject NewGameDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewGameDialog.data,
      qt_meta_data_NewGameDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewGameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewGameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewGameDialog.stringdata0))
        return static_cast<void*>(const_cast< NewGameDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewGameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void NewGameDialog::startGame(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NewGameDialog::playerOneRole(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NewGameDialog::duplicatesAllowed(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NewGameDialog::codeChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NewGameDialog::codeLength(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
