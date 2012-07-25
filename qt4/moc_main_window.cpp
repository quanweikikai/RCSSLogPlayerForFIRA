/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created: Wed Jul 25 11:29:00 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      53,   11,   11,   11, 0x08,
      73,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     106,  100,   11,   11, 0x08,
     170,  148,   11,   11, 0x08,
     213,   11,   11,   11, 0x08,
     223,   11,   11,   11, 0x08,
     237,   11,   11,   11, 0x08,
     254,   11,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     293,   11,   11,   11, 0x08,
     309,   11,   11,   11, 0x08,
     325,   11,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,
     363,   11,   11,   11, 0x08,
     382,   11,   11,   11, 0x08,
     405,   11,   11,   11, 0x08,
     432,  424,   11,   11, 0x08,
     450,   11,   11,   11, 0x08,
     469,   11,   11,   11, 0x08,
     477,   11,   11,   11, 0x08,
     502,  497,   11,   11, 0x08,
     522,  424,   11,   11, 0x0a,
     541,   11,   11,   11, 0x0a,
     570,  564,   11,   11, 0x0a,
     602,  598,   11,   11, 0x0a,
     619,  598,   11,   11, 0x0a,
     640,  598,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0viewUpdated()\0openRCG()\0"
    "openOutputFile()\0outputCurrentData()\0"
    "saveImage()\0startMonitor()\0error\0"
    "printMonitorError(QProcess::ProcessError)\0"
    "exit_code,exit_status\0"
    "printMonitorExit(int,QProcess::ExitStatus)\0"
    "kickOff()\0setLiveMode()\0connectMonitor()\0"
    "connectMonitorTo()\0disconnectMonitor()\0"
    "toggleMenuBar()\0toggleToolBar()\0"
    "toggleStatusBar()\0toggleFieldCanvas()\0"
    "toggleFullScreen()\0showPlayerTypeDialog()\0"
    "showDetailDialog()\0checked\0changeStyle(bool)\0"
    "showConfigDialog()\0about()\0"
    "printShortcutKeys()\0size\0resizeCanvas(QSize)\0"
    "toggleRecord(bool)\0receiveMonitorPacket()\0"
    "point\0updatePositionLabel(QPoint)\0pos\0"
    "dropBall(QPoint)\0freeKickLeft(QPoint)\0"
    "freeKickRight(QPoint)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: viewUpdated(); break;
        case 1: openRCG(); break;
        case 2: openOutputFile(); break;
        case 3: outputCurrentData(); break;
        case 4: saveImage(); break;
        case 5: startMonitor(); break;
        case 6: printMonitorError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 7: printMonitorExit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 8: kickOff(); break;
        case 9: setLiveMode(); break;
        case 10: connectMonitor(); break;
        case 11: connectMonitorTo(); break;
        case 12: disconnectMonitor(); break;
        case 13: toggleMenuBar(); break;
        case 14: toggleToolBar(); break;
        case 15: toggleStatusBar(); break;
        case 16: toggleFieldCanvas(); break;
        case 17: toggleFullScreen(); break;
        case 18: showPlayerTypeDialog(); break;
        case 19: showDetailDialog(); break;
        case 20: changeStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: showConfigDialog(); break;
        case 22: about(); break;
        case 23: printShortcutKeys(); break;
        case 24: resizeCanvas((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 25: toggleRecord((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: receiveMonitorPacket(); break;
        case 27: updatePositionLabel((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 28: dropBall((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: freeKickLeft((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 30: freeKickRight((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::viewUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
