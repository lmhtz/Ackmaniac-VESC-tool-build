/****************************************************************************
** Meta object code from reading C++ file 'pagemotorinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pages/pagemotorinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagemotorinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageMotorInfo_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageMotorInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageMotorInfo_t qt_meta_stringdata_PageMotorInfo = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PageMotorInfo"
QT_MOC_LITERAL(1, 14, 9), // "savingXml"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "paramChangedQString"
QT_MOC_LITERAL(4, 45, 3), // "src"
QT_MOC_LITERAL(5, 49, 4), // "name"
QT_MOC_LITERAL(6, 54, 8), // "newParam"
QT_MOC_LITERAL(7, 63, 15), // "paramChangedInt"
QT_MOC_LITERAL(8, 79, 32) // "on_descriptionHelpButton_clicked"

    },
    "PageMotorInfo\0savingXml\0\0paramChangedQString\0"
    "src\0name\0newParam\0paramChangedInt\0"
    "on_descriptionHelpButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageMotorInfo[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    3,   35,    2, 0x08 /* Private */,
       7,    3,   42,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void PageMotorInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageMotorInfo *_t = static_cast<PageMotorInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savingXml(); break;
        case 1: _t->paramChangedQString((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->paramChangedInt((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->on_descriptionHelpButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageMotorInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageMotorInfo.data,
      qt_meta_data_PageMotorInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageMotorInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageMotorInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageMotorInfo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageMotorInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
