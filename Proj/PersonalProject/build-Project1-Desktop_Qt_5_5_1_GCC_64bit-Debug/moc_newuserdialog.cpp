/****************************************************************************
** Meta object code from reading C++ file 'newuserdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CSC17C/Proj/Project2/Project2Code/newuserdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newuserdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewUserDialog_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewUserDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewUserDialog_t qt_meta_stringdata_NewUserDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NewUserDialog"
QT_MOC_LITERAL(1, 14, 9), // "newPlayer"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "Player"
QT_MOC_LITERAL(4, 32, 12), // "createPlayer"
QT_MOC_LITERAL(5, 45, 12), // "showOkButton"
QT_MOC_LITERAL(6, 58, 6) // "enable"

    },
    "NewUserDialog\0newPlayer\0\0Player\0"
    "createPlayer\0showOkButton\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewUserDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void NewUserDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewUserDialog *_t = static_cast<NewUserDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPlayer((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 1: _t->createPlayer(); break;
        case 2: _t->showOkButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NewUserDialog::*_t)(Player );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewUserDialog::newPlayer)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject NewUserDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewUserDialog.data,
      qt_meta_data_NewUserDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewUserDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewUserDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewUserDialog.stringdata0))
        return static_cast<void*>(const_cast< NewUserDialog*>(this));
    if (!strcmp(_clname, "Ui::NewUserDialog"))
        return static_cast< Ui::NewUserDialog*>(const_cast< NewUserDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewUserDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void NewUserDialog::newPlayer(Player _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
