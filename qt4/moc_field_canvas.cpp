/****************************************************************************
** Meta object code from reading C++ file 'field_canvas.h'
**
** Created: Wed Jul 25 11:28:57 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "field_canvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field_canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FieldCanvas[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x05,
      34,   13,   12,   12, 0x05,
      55,   13,   12,   12, 0x05,
      83,   77,   12,   12, 0x05,
     110,  103,   12,   12, 0x05,
     130,   77,   12,   12, 0x05,
     151,   77,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     170,   12,   12,   12, 0x0a,
     181,   12,   12,   12, 0x0a,
     196,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FieldCanvas[] = {
    "FieldCanvas\0\0pos\0dropBall(QPoint)\0"
    "freeKickLeft(QPoint)\0freeKickRight(QPoint)\0"
    "point\0playerMoved(QPoint)\0number\0"
    "playerSelected(int)\0focusChanged(QPoint)\0"
    "mouseMoved(QPoint)\0dropBall()\0"
    "freeKickLeft()\0freeKickRight()\0"
};

const QMetaObject FieldCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FieldCanvas,
      qt_meta_data_FieldCanvas, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FieldCanvas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FieldCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FieldCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FieldCanvas))
        return static_cast<void*>(const_cast< FieldCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int FieldCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dropBall((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: freeKickLeft((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: freeKickRight((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: playerMoved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: playerSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: focusChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: mouseMoved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: dropBall(); break;
        case 8: freeKickLeft(); break;
        case 9: freeKickRight(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FieldCanvas::dropBall(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FieldCanvas::freeKickLeft(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FieldCanvas::freeKickRight(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FieldCanvas::playerMoved(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FieldCanvas::playerSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FieldCanvas::focusChanged(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FieldCanvas::mouseMoved(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
