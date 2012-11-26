/****************************************************************************
** Meta object code from reading C++ file 'quotesapp.h'
**
** Created: Fri Nov 16 16:14:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/quotesapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quotesapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuotesApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      36,   11,   10,   10, 0x02,
      74,   11,   10,   10, 0x02,
     120,   10,   10,   10, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_QuotesApp[] = {
    "QuotesApp\0\0firstName,lastName,quote\0"
    "addNewRecord(QString,QString,QString)\0"
    "updateSelectedRecord(QString,QString,QString)\0"
    "deleteRecord()\0"
};

void QuotesApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuotesApp *_t = static_cast<QuotesApp *>(_o);
        switch (_id) {
        case 0: _t->addNewRecord((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->updateSelectedRecord((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->deleteRecord(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuotesApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuotesApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuotesApp,
      qt_meta_data_QuotesApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuotesApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuotesApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuotesApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuotesApp))
        return static_cast<void*>(const_cast< QuotesApp*>(this));
    return QObject::qt_metacast(_clname);
}

int QuotesApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
