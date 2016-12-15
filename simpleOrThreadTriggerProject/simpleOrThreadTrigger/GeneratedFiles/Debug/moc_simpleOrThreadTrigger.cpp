/****************************************************************************
** Meta object code from reading C++ file 'simpleOrThreadTrigger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../simpleOrThreadTrigger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simpleOrThreadTrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_simpleOrThreadTrigger_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_simpleOrThreadTrigger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_simpleOrThreadTrigger_t qt_meta_stringdata_simpleOrThreadTrigger = {
    {
QT_MOC_LITERAL(0, 0, 21), // "simpleOrThreadTrigger"
QT_MOC_LITERAL(1, 22, 8), // "valuesSR"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21) // "on_pushButton_clicked"

    },
    "simpleOrThreadTrigger\0valuesSR\0\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_simpleOrThreadTrigger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void simpleOrThreadTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        simpleOrThreadTrigger *_t = static_cast<simpleOrThreadTrigger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valuesSR((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (simpleOrThreadTrigger::*_t)(const QString & , const QString & , const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&simpleOrThreadTrigger::valuesSR)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject simpleOrThreadTrigger::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_simpleOrThreadTrigger.data,
      qt_meta_data_simpleOrThreadTrigger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *simpleOrThreadTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *simpleOrThreadTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_simpleOrThreadTrigger.stringdata0))
        return static_cast<void*>(const_cast< simpleOrThreadTrigger*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int simpleOrThreadTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void simpleOrThreadTrigger::valuesSR(const QString & _t1, const QString & _t2, const bool & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
