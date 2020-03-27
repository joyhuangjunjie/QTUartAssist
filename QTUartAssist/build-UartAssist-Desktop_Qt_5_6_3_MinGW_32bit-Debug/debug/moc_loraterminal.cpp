/****************************************************************************
** Meta object code from reading C++ file 'loraterminal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UartAssist/loraterminal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loraterminal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoRaTerminal_t {
    QByteArrayData data[11];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoRaTerminal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoRaTerminal_t qt_meta_stringdata_LoRaTerminal = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LoRaTerminal"
QT_MOC_LITERAL(1, 13, 30), // "on_pushButton_clearlog_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 31), // "on_pushButton_ReadjzqNo_clicked"
QT_MOC_LITERAL(4, 77, 32), // "on_pushButton_WritejzqNo_clicked"
QT_MOC_LITERAL(5, 110, 19), // "CommandTimeOut_deal"
QT_MOC_LITERAL(6, 130, 23), // "progressbarTimeout_deal"
QT_MOC_LITERAL(7, 154, 31), // "on_spinBox_CMDtime_valueChanged"
QT_MOC_LITERAL(8, 186, 4), // "arg1"
QT_MOC_LITERAL(9, 191, 33), // "on_pushButton_BToBDataSys_cli..."
QT_MOC_LITERAL(10, 225, 30) // "on_BtoBreadMeterButton_clicked"

    },
    "LoRaTerminal\0on_pushButton_clearlog_clicked\0"
    "\0on_pushButton_ReadjzqNo_clicked\0"
    "on_pushButton_WritejzqNo_clicked\0"
    "CommandTimeOut_deal\0progressbarTimeout_deal\0"
    "on_spinBox_CMDtime_valueChanged\0arg1\0"
    "on_pushButton_BToBDataSys_clicked\0"
    "on_BtoBreadMeterButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoRaTerminal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoRaTerminal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoRaTerminal *_t = static_cast<LoRaTerminal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clearlog_clicked(); break;
        case 1: _t->on_pushButton_ReadjzqNo_clicked(); break;
        case 2: _t->on_pushButton_WritejzqNo_clicked(); break;
        case 3: _t->CommandTimeOut_deal(); break;
        case 4: _t->progressbarTimeout_deal(); break;
        case 5: _t->on_spinBox_CMDtime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_BToBDataSys_clicked(); break;
        case 7: _t->on_BtoBreadMeterButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LoRaTerminal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LoRaTerminal.data,
      qt_meta_data_LoRaTerminal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoRaTerminal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoRaTerminal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoRaTerminal.stringdata0))
        return static_cast<void*>(const_cast< LoRaTerminal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LoRaTerminal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
