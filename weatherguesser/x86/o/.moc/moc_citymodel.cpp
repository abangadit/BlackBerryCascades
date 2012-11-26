/****************************************************************************
** Meta object code from reading C++ file 'citymodel.h'
**
** Created: Fri Nov 16 16:16:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/citymodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'citymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CityModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   30,   10,   10, 0x0a,
      83,   62,   10,   10, 0x0a,
     128,  122,   10,   10, 0x08,

 // properties: name, type, flags
     185,  177, 0x0a495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_CityModel[] = {
    "CityModel\0\0continentChanged()\0city\0"
    "onSetFavoriteCity(QString)\0"
    "city,removeIndexPath\0"
    "onRemoveFavoriteCity(QString,QVariant)\0"
    "reply\0onLoadAsyncResultData(bb::data::DataAccessReply)\0"
    "QString\0continent\0"
};

void CityModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CityModel *_t = static_cast<CityModel *>(_o);
        switch (_id) {
        case 0: _t->continentChanged(); break;
        case 1: _t->onSetFavoriteCity((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onRemoveFavoriteCity((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->onLoadAsyncResultData((*reinterpret_cast< const bb::data::DataAccessReply(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CityModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CityModel::staticMetaObject = {
    { &bb::cascades::GroupDataModel::staticMetaObject, qt_meta_stringdata_CityModel,
      qt_meta_data_CityModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CityModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CityModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CityModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CityModel))
        return static_cast<void*>(const_cast< CityModel*>(this));
    typedef bb::cascades::GroupDataModel QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CityModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::GroupDataModel QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = continent(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setContinent(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CityModel::continentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
