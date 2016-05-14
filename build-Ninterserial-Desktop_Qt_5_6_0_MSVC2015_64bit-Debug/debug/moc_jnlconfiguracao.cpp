/****************************************************************************
** Meta object code from reading C++ file 'jnlconfiguracao.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../jnlconfiguracao.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jnlconfiguracao.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_jnlConfiguracao_t {
    QByteArrayData data[21];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jnlConfiguracao_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jnlConfiguracao_t qt_meta_stringdata_jnlConfiguracao = {
    {
QT_MOC_LITERAL(0, 0, 15), // "jnlConfiguracao"
QT_MOC_LITERAL(1, 16, 11), // "enviaConfig"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "DWORD"
QT_MOC_LITERAL(4, 35, 7), // "taxaCom"
QT_MOC_LITERAL(5, 43, 4), // "BYTE"
QT_MOC_LITERAL(6, 48, 7), // "tamByte"
QT_MOC_LITERAL(7, 56, 8), // "paridade"
QT_MOC_LITERAL(8, 65, 9), // "bitParada"
QT_MOC_LITERAL(9, 75, 6), // "idioma"
QT_MOC_LITERAL(10, 82, 5), // "salva"
QT_MOC_LITERAL(11, 88, 25), // "on_btSalvarConfig_clicked"
QT_MOC_LITERAL(12, 114, 22), // "on_btRestaurar_clicked"
QT_MOC_LITERAL(13, 137, 15), // "troca_de_idioma"
QT_MOC_LITERAL(14, 153, 12), // "recebeConfig"
QT_MOC_LITERAL(15, 166, 11), // "taxaComConf"
QT_MOC_LITERAL(16, 178, 11), // "tamByteConf"
QT_MOC_LITERAL(17, 190, 12), // "paridadeConf"
QT_MOC_LITERAL(18, 203, 11), // "stopBitConf"
QT_MOC_LITERAL(19, 215, 9), // "config_in"
QT_MOC_LITERAL(20, 225, 7) // "idiomaC"

    },
    "jnlConfiguracao\0enviaConfig\0\0DWORD\0"
    "taxaCom\0BYTE\0tamByte\0paridade\0bitParada\0"
    "idioma\0salva\0on_btSalvarConfig_clicked\0"
    "on_btRestaurar_clicked\0troca_de_idioma\0"
    "recebeConfig\0taxaComConf\0tamByteConf\0"
    "paridadeConf\0stopBitConf\0config_in\0"
    "idiomaC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jnlConfiguracao[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   57,    2, 0x08 /* Private */,
      12,    0,   58,    2, 0x08 /* Private */,
      13,    0,   59,    2, 0x09 /* Protected */,
      14,    4,   60,    2, 0x09 /* Protected */,
      19,    5,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, QMetaType::QString, QMetaType::Bool,    4,    6,    7,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,   15,   16,   17,   18,   20,

       0        // eod
};

void jnlConfiguracao::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        jnlConfiguracao *_t = static_cast<jnlConfiguracao *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enviaConfig((*reinterpret_cast< DWORD(*)>(_a[1])),(*reinterpret_cast< BYTE(*)>(_a[2])),(*reinterpret_cast< BYTE(*)>(_a[3])),(*reinterpret_cast< BYTE(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: _t->on_btSalvarConfig_clicked(); break;
        case 2: _t->on_btRestaurar_clicked(); break;
        case 3: _t->troca_de_idioma(); break;
        case 4: _t->recebeConfig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->config_in((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (jnlConfiguracao::*_t)(DWORD , BYTE , BYTE , BYTE , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&jnlConfiguracao::enviaConfig)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject jnlConfiguracao::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_jnlConfiguracao.data,
      qt_meta_data_jnlConfiguracao,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *jnlConfiguracao::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jnlConfiguracao::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_jnlConfiguracao.stringdata0))
        return static_cast<void*>(const_cast< jnlConfiguracao*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int jnlConfiguracao::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void jnlConfiguracao::enviaConfig(DWORD _t1, BYTE _t2, BYTE _t3, BYTE _t4, QString _t5, bool _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
