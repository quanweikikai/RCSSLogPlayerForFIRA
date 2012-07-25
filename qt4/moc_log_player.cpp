/****************************************************************************
** Meta object code from reading C++ file 'log_player.h'
**
** Created: Wed Jul 25 11:28:58 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "log_player.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogPlayer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   10,   10,   10, 0x08,
      35,   10,   10,   10, 0x0a,
      46,   10,   10,   10, 0x0a,
      60,   10,   10,   10, 0x0a,
      73,   10,   10,   10, 0x0a,
      80,   10,   10,   10, 0x0a,
      91,   10,   10,   10, 0x0a,
     105,   10,   10,   10, 0x0a,
     122,   10,   10,   10, 0x0a,
     142,   10,   10,   10, 0x0a,
     158,   10,   10,   10, 0x0a,
     174,   10,   10,   10, 0x0a,
     186,   10,   10,   10, 0x0a,
     197,   10,   10,   10, 0x0a,
     210,   10,   10,   10, 0x0a,
     229,  223,   10,   10, 0x0a,
     250,  244,   10,   10, 0x0a,
     265,   10,   10,   10, 0x0a,
     276,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LogPlayer[] = {
    "LogPlayer\0\0updated()\0handleTimer()\0"
    "stepBack()\0stepForward()\0playOrStop()\0"
    "stop()\0playBack()\0playForward()\0"
    "accelerateBack()\0accelerateForward()\0"
    "goToPrevScore()\0goToNextScore()\0"
    "goToFirst()\0goToLast()\0decelerate()\0"
    "accelerate()\0index\0goToIndex(int)\0"
    "cycle\0goToCycle(int)\0showLive()\0"
    "setLiveMode()\0"
};

const QMetaObject LogPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LogPlayer,
      qt_meta_data_LogPlayer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogPlayer))
        return static_cast<void*>(const_cast< LogPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int LogPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updated(); break;
        case 1: handleTimer(); break;
        case 2: stepBack(); break;
        case 3: stepForward(); break;
        case 4: playOrStop(); break;
        case 5: stop(); break;
        case 6: playBack(); break;
        case 7: playForward(); break;
        case 8: accelerateBack(); break;
        case 9: accelerateForward(); break;
        case 10: goToPrevScore(); break;
        case 11: goToNextScore(); break;
        case 12: goToFirst(); break;
        case 13: goToLast(); break;
        case 14: decelerate(); break;
        case 15: accelerate(); break;
        case 16: goToIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: goToCycle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: showLive(); break;
        case 19: setLiveMode(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void LogPlayer::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
