/****************************************************************************
** Meta object code from reading C++ file 'playspace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CSC17C/Proj/Project2/Project2Code/playspace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaySpace_t {
    QByteArrayData data[19];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaySpace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaySpace_t qt_meta_stringdata_PlaySpace = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PlaySpace"
QT_MOC_LITERAL(1, 10, 11), // "codeChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "code"
QT_MOC_LITERAL(4, 28, 12), // "gameFinished"
QT_MOC_LITERAL(5, 41, 12), // "guessChanged"
QT_MOC_LITERAL(6, 54, 8), // "loadGame"
QT_MOC_LITERAL(7, 63, 4), // "Game"
QT_MOC_LITERAL(8, 68, 4), // "game"
QT_MOC_LITERAL(9, 73, 15), // "updatePlayspace"
QT_MOC_LITERAL(10, 89, 8), // "showCode"
QT_MOC_LITERAL(11, 98, 8), // "complete"
QT_MOC_LITERAL(12, 107, 15), // "setGameFinished"
QT_MOC_LITERAL(13, 123, 11), // "guessUpdate"
QT_MOC_LITERAL(14, 135, 5), // "guess"
QT_MOC_LITERAL(15, 141, 4), // "bull"
QT_MOC_LITERAL(16, 146, 3), // "cow"
QT_MOC_LITERAL(17, 150, 12), // "congratulate"
QT_MOC_LITERAL(18, 163, 3) // "win"

    },
    "PlaySpace\0codeChanged\0\0code\0gameFinished\0"
    "guessChanged\0loadGame\0Game\0game\0"
    "updatePlayspace\0showCode\0complete\0"
    "setGameFinished\0guessUpdate\0guess\0"
    "bull\0cow\0congratulate\0win"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaySpace[] = {

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
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    3,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    3,   84,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::UInt,   14,   15,   16,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void PlaySpace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaySpace *_t = static_cast<PlaySpace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->codeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->gameFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->guessChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 3: _t->loadGame((*reinterpret_cast< const Game(*)>(_a[1]))); break;
        case 4: _t->updatePlayspace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->showCode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setGameFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->guessUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 8: _t->congratulate((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        {
            typedef void (PlaySpace::*_t)(QString , unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaySpace::guessChanged)) {
                *result = 2;
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
    if (!strcmp(_clname, qt_meta_stringdata_PlaySpace.stringdata0))
        return static_cast<void*>(const_cast< PlaySpace*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaySpace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 2
void PlaySpace::guessChanged(QString _t1, unsigned int _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
