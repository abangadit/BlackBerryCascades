/****************************************************************************
** Meta object code from reading C++ file 'app.hpp'
**
** Created: Fri Nov 16 16:13:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_App[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      13,  179, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,
      27,    4,    4,    4, 0x05,
      49,    4,    4,    4, 0x05,
      73,    4,    4,    4, 0x05,
      88,    4,    4,    4, 0x05,
     104,    4,    4,    4, 0x05,
     130,    4,    4,    4, 0x05,
     146,    4,    4,    4, 0x05,
     179,    4,    4,    4, 0x05,
     201,    4,    4,    4, 0x05,
     222,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
     251,  244,    4,    4, 0x0a,
     314,  301,    4,    4, 0x0a,
     372,  244,    4,    4, 0x0a,
     423,  244,    4,    4, 0x0a,
     476,  244,    4,    4, 0x0a,
     539,  533,    4,    4, 0x0a,
     598,  533,    4,    4, 0x0a,
     676,  659,    4,    4, 0x0a,
     715,  659,    4,    4, 0x0a,
     764,  756,    4,    4, 0x0a,
     801,    4,    4,    4, 0x0a,
     824,  816,    4,    4, 0x0a,
     877,    4,    4,    4, 0x0a,

 // methods: signature, parameters, type, tag, flags
     884,    4,    4,    4, 0x02,
     904,    4,    4,    4, 0x02,
     929,    4,  924,    4, 0x02,
     953,    4,    4,    4, 0x02,
     969,    4,    4,    4, 0x02,
     991,  986,    4,    4, 0x02,
    1015,    4,    4,    4, 0x02,
    1033,    4,    4,    4, 0x02,
    1065, 1055,    4,    4, 0x02,

 // properties: name, type, flags
    1120, 1090, 0x00095409,
    1126,  924, 0x01495001,
    1147, 1139, 0x0a495001,
    1165, 1139, 0x0a495001,
    1182, 1139, 0x0a495001,
    1202, 1139, 0x0a495001,
    1244, 1221, 0x00095409,
    1263, 1139, 0x0a495103,
    1269, 1139, 0x0a495103,
    1276, 1139, 0x0a495103,
    1293,  924, 0x01495103,
    1300,  924, 0x01495103,
    1324,  924, 0x01495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       1,
       2,
       2,
       0,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

static const char qt_meta_stringdata_App[] = {
    "App\0\0modelIsEmptyChanged()\0"
    "notificationChanged()\0activityDialogChanged()\0"
    "appIdChanged()\0ppgUrlChanged()\0"
    "pushInitiatorUrlChanged()\0useSdkChanged()\0"
    "launchApplicationOnPushChanged()\0"
    "usePublicPpgChanged()\0openActivityDialog()\0"
    "closeActivityDialog()\0status\0"
    "onCreateSessionCompleted(bb::network::PushStatus)\0"
    "status,token\0"
    "onCreateChannelCompleted(bb::network::PushStatus,QString)\0"
    "onDestroyChannelCompleted(bb::network::PushStatus)\0"
    "onRegisterToLaunchCompleted(bb::network::PushStatus)\0"
    "onUnregisterFromLaunchCompleted(bb::network::PushStatus)\0"
    "value\0onRegisterPromptFinished(bb::system::SystemUiResult::Type)\0"
    "onUnregisterPromptFinished(bb::system::SystemUiResult::Type)\0"
    "code,description\0"
    "onPIRegistrationCompleted(int,QString)\0"
    "onPIDeregistrationCompleted(int,QString)\0"
    "request\0onInvoked(bb::system::InvokeRequest)\0"
    "onSimChanged()\0command\0"
    "onPushTransportReady(bb::network::PushCommand::Type)\0"
    "quit()\0saveConfiguration()\0"
    "loadConfiguration()\0bool\0"
    "validateConfiguration()\0createChannel()\0"
    "destroyChannel()\0item\0deletePush(QVariantMap)\0"
    "deleteAllPushes()\0markAllPushesAsRead()\0"
    "indexPath\0selectPush(QVariantList)\0"
    "bb::cascades::GroupDataModel*\0model\0"
    "modelIsEmpty\0QString\0notificationTitle\0"
    "notificationBody\0activityDialogTitle\0"
    "activityDialogBody\0PushContentController*\0"
    "currentPushContent\0appId\0ppgUrl\0"
    "pushInitiatorUrl\0useSdk\0launchApplicationOnPush\0"
    "usePublicPpg\0"
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        App *_t = static_cast<App *>(_o);
        switch (_id) {
        case 0: _t->modelIsEmptyChanged(); break;
        case 1: _t->notificationChanged(); break;
        case 2: _t->activityDialogChanged(); break;
        case 3: _t->appIdChanged(); break;
        case 4: _t->ppgUrlChanged(); break;
        case 5: _t->pushInitiatorUrlChanged(); break;
        case 6: _t->useSdkChanged(); break;
        case 7: _t->launchApplicationOnPushChanged(); break;
        case 8: _t->usePublicPpgChanged(); break;
        case 9: _t->openActivityDialog(); break;
        case 10: _t->closeActivityDialog(); break;
        case 11: _t->onCreateSessionCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1]))); break;
        case 12: _t->onCreateChannelCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->onDestroyChannelCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1]))); break;
        case 14: _t->onRegisterToLaunchCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1]))); break;
        case 15: _t->onUnregisterFromLaunchCompleted((*reinterpret_cast< const bb::network::PushStatus(*)>(_a[1]))); break;
        case 16: _t->onRegisterPromptFinished((*reinterpret_cast< bb::system::SystemUiResult::Type(*)>(_a[1]))); break;
        case 17: _t->onUnregisterPromptFinished((*reinterpret_cast< bb::system::SystemUiResult::Type(*)>(_a[1]))); break;
        case 18: _t->onPIRegistrationCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->onPIDeregistrationCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->onInvoked((*reinterpret_cast< const bb::system::InvokeRequest(*)>(_a[1]))); break;
        case 21: _t->onSimChanged(); break;
        case 22: _t->onPushTransportReady((*reinterpret_cast< bb::network::PushCommand::Type(*)>(_a[1]))); break;
        case 23: _t->quit(); break;
        case 24: _t->saveConfiguration(); break;
        case 25: _t->loadConfiguration(); break;
        case 26: { bool _r = _t->validateConfiguration();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->createChannel(); break;
        case 28: _t->destroyChannel(); break;
        case 29: _t->deletePush((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 30: _t->deleteAllPushes(); break;
        case 31: _t->markAllPushesAsRead(); break;
        case 32: _t->selectPush((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData App::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject App::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_App,
      qt_meta_data_App, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &App::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_App))
        return static_cast<void*>(const_cast< App*>(this));
    return QObject::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bb::cascades::GroupDataModel**>(_v) = model(); break;
        case 1: *reinterpret_cast< bool*>(_v) = modelIsEmpty(); break;
        case 2: *reinterpret_cast< QString*>(_v) = notificationTitle(); break;
        case 3: *reinterpret_cast< QString*>(_v) = notificationBody(); break;
        case 4: *reinterpret_cast< QString*>(_v) = activityDialogTitle(); break;
        case 5: *reinterpret_cast< QString*>(_v) = activityDialogBody(); break;
        case 6: *reinterpret_cast< PushContentController**>(_v) = currentPushContent(); break;
        case 7: *reinterpret_cast< QString*>(_v) = appId(); break;
        case 8: *reinterpret_cast< QString*>(_v) = ppgUrl(); break;
        case 9: *reinterpret_cast< QString*>(_v) = pushInitiatorUrl(); break;
        case 10: *reinterpret_cast< bool*>(_v) = useSdk(); break;
        case 11: *reinterpret_cast< bool*>(_v) = launchApplicationOnPush(); break;
        case 12: *reinterpret_cast< bool*>(_v) = usePublicPpg(); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 7: setAppId(*reinterpret_cast< QString*>(_v)); break;
        case 8: setPpgUrl(*reinterpret_cast< QString*>(_v)); break;
        case 9: setPushInitiatorUrl(*reinterpret_cast< QString*>(_v)); break;
        case 10: setUseSdk(*reinterpret_cast< bool*>(_v)); break;
        case 11: setLaunchApplicationOnPush(*reinterpret_cast< bool*>(_v)); break;
        case 12: setUsePublicPpg(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void App::modelIsEmptyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void App::notificationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void App::activityDialogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void App::appIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void App::ppgUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void App::pushInitiatorUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void App::useSdkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void App::launchApplicationOnPushChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void App::usePublicPpgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void App::openActivityDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void App::closeActivityDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
QT_END_MOC_NAMESPACE
