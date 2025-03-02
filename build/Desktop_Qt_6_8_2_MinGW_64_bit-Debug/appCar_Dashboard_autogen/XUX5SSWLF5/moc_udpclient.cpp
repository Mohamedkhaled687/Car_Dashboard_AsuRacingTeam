/****************************************************************************
** Meta object code from reading C++ file 'udpclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Controllers/udpclient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9UdpClientE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9UdpClientE = QtMocHelpers::stringData(
    "UdpClient",
    "speedChanged",
    "",
    "newSpeed",
    "rpmChanged",
    "newRpm",
    "accPedalChanged",
    "newAccPedal",
    "brakePedalChanged",
    "newBrakePedal",
    "encoderAngleChanged",
    "newAngle",
    "temperatureChanged",
    "newTemperature",
    "batteryLevelChanged",
    "newBatteryLevel",
    "gpsLongitudeChanged",
    "newLongitude",
    "gpsLatitudeChanged",
    "newLatitude",
    "errorOccurred",
    "error",
    "speedFLChanged",
    "newSpeedFL",
    "speedFRChanged",
    "newSpeedFR",
    "speedBLChanged",
    "newSpeedBL",
    "speedBRChanged",
    "newSpeedBR",
    "processPendingDatagrams",
    "start",
    "port",
    "speed",
    "rpm",
    "accPedal",
    "brakePedal",
    "encoderAngle",
    "temperature",
    "batteryLevel",
    "gpsLongitude",
    "gpsLatitude",
    "speedFL",
    "speedFR",
    "speedBL",
    "speedBR"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9UdpClientE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      13,  156, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,   14 /* Public */,
       4,    1,  113,    2, 0x06,   16 /* Public */,
       6,    1,  116,    2, 0x06,   18 /* Public */,
       8,    1,  119,    2, 0x06,   20 /* Public */,
      10,    1,  122,    2, 0x06,   22 /* Public */,
      12,    1,  125,    2, 0x06,   24 /* Public */,
      14,    1,  128,    2, 0x06,   26 /* Public */,
      16,    1,  131,    2, 0x06,   28 /* Public */,
      18,    1,  134,    2, 0x06,   30 /* Public */,
      20,    1,  137,    2, 0x06,   32 /* Public */,
      22,    1,  140,    2, 0x06,   34 /* Public */,
      24,    1,  143,    2, 0x06,   36 /* Public */,
      26,    1,  146,    2, 0x06,   38 /* Public */,
      28,    1,  149,    2, 0x06,   40 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      30,    0,  152,    2, 0x08,   42 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      31,    1,  153,    2, 0x02,   43 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   29,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::UShort,   32,

 // properties: name, type, flags, notifyId, revision
      33, QMetaType::Float, 0x00015103, uint(0), 0,
      34, QMetaType::Int, 0x00015103, uint(1), 0,
      35, QMetaType::Int, 0x00015103, uint(2), 0,
      36, QMetaType::Int, 0x00015103, uint(3), 0,
      37, QMetaType::Double, 0x00015103, uint(4), 0,
      38, QMetaType::Float, 0x00015103, uint(5), 0,
      39, QMetaType::Int, 0x00015103, uint(6), 0,
      40, QMetaType::Double, 0x00015103, uint(7), 0,
      41, QMetaType::Double, 0x00015103, uint(8), 0,
      42, QMetaType::Int, 0x00015103, uint(10), 0,
      43, QMetaType::Int, 0x00015103, uint(11), 0,
      44, QMetaType::Int, 0x00015103, uint(12), 0,
      45, QMetaType::Int, 0x00015103, uint(13), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject UdpClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN9UdpClientE.offsetsAndSizes,
    qt_meta_data_ZN9UdpClientE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9UdpClientE_t,
        // property 'speed'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'rpm'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'accPedal'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'brakePedal'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'encoderAngle'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'temperature'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'batteryLevel'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'gpsLongitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'gpsLatitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'speedFL'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'speedFR'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'speedBL'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'speedBR'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UdpClient, std::true_type>,
        // method 'speedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rpmChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'accPedalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'brakePedalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'encoderAngleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'temperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'batteryLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'gpsLongitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'gpsLatitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'speedFLChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'speedFRChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'speedBLChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'speedBRChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'processPendingDatagrams'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>
    >,
    nullptr
} };

void UdpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UdpClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->speedChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->rpmChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->accPedalChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->brakePedalChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->encoderAngleChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->temperatureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 6: _t->batteryLevelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->gpsLongitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->gpsLatitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->speedFLChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->speedFRChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->speedBLChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->speedBRChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->processPendingDatagrams(); break;
        case 15: { bool _r = _t->start((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (UdpClient::*)(float );
            if (_q_method_type _q_method = &UdpClient::speedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::rpmChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::accPedalChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::brakePedalChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(double );
            if (_q_method_type _q_method = &UdpClient::encoderAngleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(float );
            if (_q_method_type _q_method = &UdpClient::temperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::batteryLevelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(double );
            if (_q_method_type _q_method = &UdpClient::gpsLongitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(double );
            if (_q_method_type _q_method = &UdpClient::gpsLatitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(const QString & );
            if (_q_method_type _q_method = &UdpClient::errorOccurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::speedFLChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::speedFRChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::speedBLChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (UdpClient::*)(int );
            if (_q_method_type _q_method = &UdpClient::speedBRChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rpm(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->accPedal(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->brakePedal(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->encoderAngle(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->temperature(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->batteryLevel(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->gpsLongitude(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->gpsLatitude(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->speedFL(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->speedFR(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->speedBL(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->speedBR(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setRpm(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAccPedal(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBrakePedal(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setEncoderAngle(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setBatteryLevel(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setGpsLongitude(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setGpsLatitude(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setSpeedFL(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setSpeedFR(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setSpeedBL(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setSpeedBR(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *UdpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9UdpClientE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UdpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UdpClient::speedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UdpClient::rpmChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UdpClient::accPedalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UdpClient::brakePedalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UdpClient::encoderAngleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UdpClient::temperatureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UdpClient::batteryLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UdpClient::gpsLongitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UdpClient::gpsLatitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UdpClient::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UdpClient::speedFLChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UdpClient::speedFRChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UdpClient::speedBLChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UdpClient::speedBRChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
