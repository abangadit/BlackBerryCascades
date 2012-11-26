/****************************************************************************
** Meta object code from reading C++ file 'Repeater.hpp'
**
** Created: Fri Nov 16 16:15:16 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Repeater.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Repeater.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Repeater[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
      18,    9,

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,
      50,   34,   34,   34, 0x05,

 // properties: name, type, flags
      77,   68, 0xff495103,
       9,   83, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_Repeater[] = {
    "Repeater\0delegate\0DefaultProperty\0\0"
    "modelChanged()\0delegateChanged()\0"
    "QVariant\0model\0QDeclarativeComponent*\0"
};

void Repeater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Repeater *_t = static_cast<Repeater *>(_o);
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->delegateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Repeater::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Repeater::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_Repeater,
      qt_meta_data_Repeater, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Repeater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Repeater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Repeater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Repeater))
        return static_cast<void*>(const_cast< Repeater*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Repeater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = model(); break;
        case 1: *reinterpret_cast< QDeclarativeComponent**>(_v) = delegate(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: setDelegate(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Repeater::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Repeater::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
