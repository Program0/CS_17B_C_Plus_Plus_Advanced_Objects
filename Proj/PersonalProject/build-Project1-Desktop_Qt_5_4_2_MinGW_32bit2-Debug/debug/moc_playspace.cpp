/****************************************************************************
** Meta object code from reading C++ file 'playspace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project1/playspace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaySpace_t {
    QByteArrayData data[10];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaySpace_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaySpace_t qt_meta_stringdata_PlaySpace = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PlaySpace"
QT_MOC_LITERAL(1, 10, 11), // "codeChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "code"
QT_MOC_LITERAL(4, 28, 12), // "gameFinished"
QT_MOC_LITERAL(5, 41, 7), // "setRole"
QT_MOC_LITERAL(6, 49, 4), // "role"
QT_MOC_LITERAL(7, 54, 13), // "setValidation"
QT_MOC_LITERAL(8, 68, 4), // "test"
QT_MOC_LITERAL(9, 73, 7) // "newGame"

    },
    "PlaySpace\0codeChanged\0\0code\0gameFinished\0"
    "setRole\0role\0setValidation\0test\0newGame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaySpace[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void PlaySpace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaySpace *_t = static_cast<PlaySpace *>(_o);
        switch (_id) {
        case 0: _t->codeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->gameFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setRole((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setValidation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->newGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlaySpace::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaySpace::codeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PlaySpace::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaySpace::gameFinished)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PlaySpace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlaySpace.data,
      qt_meta_data_PlaySpace,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlaySpace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaySpace::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlaySpace.stringdata))
        return static_cast<void*>(const_cast< PlaySpace*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaySpace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void PlaySpace::codeChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaySpace::gameFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
