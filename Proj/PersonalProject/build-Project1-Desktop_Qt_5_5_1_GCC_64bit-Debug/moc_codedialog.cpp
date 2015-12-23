/****************************************************************************
** Meta object code from reading C++ file 'codedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CSC17C/Proj/Project2/Project2Code/codedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CodeDialog_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CodeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CodeDialog_t qt_meta_stringdata_CodeDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CodeDialog"
QT_MOC_LITERAL(1, 11, 9), // "startGame"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "word"
QT_MOC_LITERAL(4, 27, 11), // "sizeChanged"
QT_MOC_LITERAL(5, 39, 12), // "defaultTries"
QT_MOC_LITERAL(6, 52, 17), // "duplicatesChanged"
QT_MOC_LITERAL(7, 70, 10), // "updateSize"
QT_MOC_LITERAL(8, 81, 18), // "setAllowDuplicates"
QT_MOC_LITERAL(9, 100, 4), // "dups"
QT_MOC_LITERAL(10, 105, 7), // "setGame"
QT_MOC_LITERAL(11, 113, 4) // "test"

    },
    "CodeDialog\0startGame\0\0word\0sizeChanged\0"
    "defaultTries\0duplicatesChanged\0"
    "updateSize\0setAllowDuplicates\0dups\0"
    "setGame\0test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CodeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void CodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CodeDialog *_t = static_cast<CodeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->duplicatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateSize((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->setAllowDuplicates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CodeDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDialog::startGame)) {
                *result = 0;
            }
        }
        {
            typedef void (CodeDialog::*_t)(int ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDialog::sizeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (CodeDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDialog::duplicatesChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CodeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CodeDialog.data,
      qt_meta_data_CodeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CodeDialog.stringdata0))
        return static_cast<void*>(const_cast< CodeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CodeDialog::startGame(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CodeDialog::sizeChanged(int _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< CodeDialog *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CodeDialog::duplicatesChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
