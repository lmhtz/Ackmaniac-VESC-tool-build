/****************************************************************************
** Meta object code from reading C++ file 'pageappnunchuk.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pages/pageappnunchuk.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageappnunchuk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageAppNunchuk_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageAppNunchuk_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageAppNunchuk_t qt_meta_stringdata_PageAppNunchuk = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PageAppNunchuk"
QT_MOC_LITERAL(1, 15, 19), // "decodedChukReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 18), // "paramChangedDouble"
QT_MOC_LITERAL(5, 61, 3), // "src"
QT_MOC_LITERAL(6, 65, 4), // "name"
QT_MOC_LITERAL(7, 70, 8), // "newParam"
QT_MOC_LITERAL(8, 79, 16) // "paramChangedEnum"

    },
    "PageAppNunchuk\0decodedChukReceived\0\0"
    "value\0paramChangedDouble\0src\0name\0"
    "newParam\0paramChangedEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageAppNunchuk[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    3,   32,    2, 0x08 /* Private */,
       8,    3,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Double,    5,    6,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Int,    5,    6,    7,

       0        // eod
};

void PageAppNunchuk::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageAppNunchuk *_t = static_cast<PageAppNunchuk *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->decodedChukReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->paramChangedDouble((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->paramChangedEnum((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageAppNunchuk::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageAppNunchuk.data,
      qt_meta_data_PageAppNunchuk,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageAppNunchuk::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageAppNunchuk::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageAppNunchuk.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageAppNunchuk::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
