/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qf_com_assistant/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[479];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 42), // "on_pushButton_connectAndDisco..."
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(4, 85, 31), // "on_pushButton_sendInput_clicked"
QT_MOC_LITERAL(5, 117, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 139, 14), // "updateDateTime"
QT_MOC_LITERAL(7, 154, 28), // "on_checkBox_all_stateChanged"
QT_MOC_LITERAL(8, 183, 5), // "state"
QT_MOC_LITERAL(9, 189, 35), // "on_pushButton_clearCheckBox_c..."
QT_MOC_LITERAL(10, 225, 37), // "on_pushButton_clear_plainText..."
QT_MOC_LITERAL(11, 263, 32), // "on_pushButton_recordFlow_clicked"
QT_MOC_LITERAL(12, 296, 30), // "on_pushButton_execFlow_clicked"
QT_MOC_LITERAL(13, 327, 40), // "on_pushButton_recFlow_saveCon..."
QT_MOC_LITERAL(14, 368, 40), // "on_pushButton_recFlow_loadCon..."
QT_MOC_LITERAL(15, 409, 36), // "on_pushButton_recFlow_delete_..."
QT_MOC_LITERAL(16, 446, 32) // "slot_execRecordFlow_timerHandler"

    },
    "MainWindow\0on_pushButton_connectAndDisconnect_clicked\0"
    "\0on_pushButton_refresh_clicked\0"
    "on_pushButton_sendInput_clicked\0"
    "on_pushButton_clicked\0updateDateTime\0"
    "on_checkBox_all_stateChanged\0state\0"
    "on_pushButton_clearCheckBox_clicked\0"
    "on_pushButton_clear_plainText_clicked\0"
    "on_pushButton_recordFlow_clicked\0"
    "on_pushButton_execFlow_clicked\0"
    "on_pushButton_recFlow_saveConfig_clicked\0"
    "on_pushButton_recFlow_loadConfig_clicked\0"
    "on_pushButton_recFlow_delete_clicked\0"
    "slot_execRecordFlow_timerHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_connectAndDisconnect_clicked(); break;
        case 1: _t->on_pushButton_refresh_clicked(); break;
        case 2: _t->on_pushButton_sendInput_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->updateDateTime(); break;
        case 5: _t->on_checkBox_all_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clearCheckBox_clicked(); break;
        case 7: _t->on_pushButton_clear_plainText_clicked(); break;
        case 8: _t->on_pushButton_recordFlow_clicked(); break;
        case 9: _t->on_pushButton_execFlow_clicked(); break;
        case 10: _t->on_pushButton_recFlow_saveConfig_clicked(); break;
        case 11: _t->on_pushButton_recFlow_loadConfig_clicked(); break;
        case 12: _t->on_pushButton_recFlow_delete_clicked(); break;
        case 13: _t->slot_execRecordFlow_timerHandler(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
