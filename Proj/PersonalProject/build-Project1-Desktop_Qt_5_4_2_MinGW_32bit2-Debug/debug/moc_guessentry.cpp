/****************************************************************************
** Meta object code from reading C++ file 'guessentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project1/guessentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guessentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GuessEntry_t {
    QByteArrayData data[16];
    char stringdata[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuessEntry_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuessEntry_t qt_meta_stringdata_GuessEntry = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GuessEntry"
QT_MOC_LITERAL(1, 11, 8), // "finished"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "solved"
QT_MOC_LITERAL(4, 28, 7), // "current"
QT_MOC_LITERAL(5, 36, 9), // "guessWord"
QT_MOC_LITERAL(6, 46, 15), // "codeWordChanged"
QT_MOC_LITERAL(7, 62, 10), // "setCurrent"
QT_MOC_LITERAL(8, 73, 6), // "status"
QT_MOC_LITERAL(9, 80, 11), // "setCodeWord"
QT_MOC_LITERAL(10, 92, 4), // "code"
QT_MOC_LITERAL(11, 97, 5), // "reset"
QT_MOC_LITERAL(12, 103, 13), // "guessFinished"
QT_MOC_LITERAL(13, 117, 11), // "enableCheck"
QT_MOC_LITERAL(14, 129, 13), // "setValidation"
QT_MOC_LITERAL(15, 143, 4) // "test"

    },
    "GuessEntry\0finished\0\0solved\0current\0"
    "guessWord\0codeWordChanged\0setCurrent\0"
    "status\0setCodeWord\0code\0reset\0"
    "guessFinished\0enableCheck\0setValidation\0"
    "test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuessEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    3,   78,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void GuessEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GuessEntry *_t = static_cast<GuessEntry *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->solved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->current((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->guessWord((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->codeWordChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setCurrent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setCodeWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->reset(); break;
        case 8: _t->guessFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enableCheck((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setValidation((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GuessEntry::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GuessEntry::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (GuessEntry::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GuessEntry::solved)) {
                *result = 1;
            }
        }
        {
            typedef void (GuessEntry::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GuessEntry::current)) {
                *result = 2;
            }
        }
        {
            typedef void (GuessEntry::*_t)(QString , unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GuessEntry::guessWord)) {
                *result = 3;
            }
        }
        {
            typedef void (GuessEntry::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GuessEntry::codeWordChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject GuessEntry::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GuessEntry.data,
      qt_meta_data_GuessEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GuessEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuessEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GuessEntry.stringdata))
        return static_cast<void*>(const_cast< GuessEntry*>(this));
    return QWidget::qt_metacast(_clname);
}

int GuessEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GuessEntry::finished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuessEntry::solved(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuessEntry::current(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuessEntry::guessWord(QString _t1, unsigned int _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GuessEntry::codeWordChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
