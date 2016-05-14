/****************************************************************************
** Meta object code from reading C++ file 'jnlregistro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../jnlregistro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jnlregistro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_jnlRegistro_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jnlRegistro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jnlRegistro_t qt_meta_stringdata_jnlRegistro = {
    {
QT_MOC_LITERAL(0, 0, 11), // "jnlRegistro"
QT_MOC_LITERAL(1, 12, 12), // "registraErro"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "erro"
QT_MOC_LITERAL(4, 31, 15) // "troca_de_idioma"

    },
    "jnlRegistro\0registraErro\0\0erro\0"
    "troca_de_idioma"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jnlRegistro[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       1,    1,   32,    2, 0x0a /* Public */,
       4,    0,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void jnlRegistro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        jnlRegistro *_t = static_cast<jnlRegistro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registraErro((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->registraErro((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->troca_de_idioma(); break;
        default: ;
        }
    }
}

const QMetaObject jnlRegistro::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_jnlRegistro.data,
      qt_meta_data_jnlRegistro,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *jnlRegistro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jnlRegistro::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_jnlRegistro.stringdata0))
        return static_cast<void*>(const_cast< jnlRegistro*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int jnlRegistro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
