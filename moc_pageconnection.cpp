/****************************************************************************
** Meta object code from reading C++ file 'pageconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pages/pageconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageConnection_t {
    QByteArrayData data[14];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageConnection_t qt_meta_stringdata_PageConnection = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PageConnection"
QT_MOC_LITERAL(1, 15, 9), // "timerSlot"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 30), // "on_serialRefreshButton_clicked"
QT_MOC_LITERAL(4, 57, 33), // "on_serialDisconnectButton_cli..."
QT_MOC_LITERAL(5, 91, 30), // "on_serialConnectButton_clicked"
QT_MOC_LITERAL(6, 122, 30), // "on_tcpDisconnectButton_clicked"
QT_MOC_LITERAL(7, 153, 27), // "on_tcpConnectButton_clicked"
QT_MOC_LITERAL(8, 181, 25), // "on_canFwdBox_valueChanged"
QT_MOC_LITERAL(9, 207, 4), // "arg1"
QT_MOC_LITERAL(10, 212, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(11, 234, 23), // "on_canFwdButton_toggled"
QT_MOC_LITERAL(12, 258, 7), // "checked"
QT_MOC_LITERAL(13, 266, 28) // "on_autoConnectButton_clicked"

    },
    "PageConnection\0timerSlot\0\0"
    "on_serialRefreshButton_clicked\0"
    "on_serialDisconnectButton_clicked\0"
    "on_serialConnectButton_clicked\0"
    "on_tcpDisconnectButton_clicked\0"
    "on_tcpConnectButton_clicked\0"
    "on_canFwdBox_valueChanged\0arg1\0"
    "on_helpButton_clicked\0on_canFwdButton_toggled\0"
    "checked\0on_autoConnectButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void PageConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageConnection *_t = static_cast<PageConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerSlot(); break;
        case 1: _t->on_serialRefreshButton_clicked(); break;
        case 2: _t->on_serialDisconnectButton_clicked(); break;
        case 3: _t->on_serialConnectButton_clicked(); break;
        case 4: _t->on_tcpDisconnectButton_clicked(); break;
        case 5: _t->on_tcpConnectButton_clicked(); break;
        case 6: _t->on_canFwdBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_helpButton_clicked(); break;
        case 8: _t->on_canFwdButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_autoConnectButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageConnection::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageConnection.data,
      qt_meta_data_PageConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageConnection.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
