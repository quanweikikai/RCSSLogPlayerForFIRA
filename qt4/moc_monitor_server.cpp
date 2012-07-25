/****************************************************************************
** Meta object code from reading C++ file 'monitor_server.h'
**
** Created: Wed Jul 25 11:29:02 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "monitor_server.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MonitorServer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      31,   14,   14,   14, 0x08,
      47,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MonitorServer[] = {
    "MonitorServer\0\0sendToClients()\0"
    "handleReceive()\0removeDisconnectedClient()\0"
};

const QMetaObject MonitorServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MonitorServer,
      qt_meta_data_MonitorServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MonitorServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MonitorServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MonitorServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MonitorServer))
        return static_cast<void*>(const_cast< MonitorServer*>(this));
    return QObject::qt_metacast(_clname);
}

int MonitorServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendToClients(); break;
        case 1: handleReceive(); break;
        case 2: removeDisconnectedClient(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
