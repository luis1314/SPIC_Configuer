/****************************************************************************
** Meta object code from reading C++ file 'do_editer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../do_editer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'do_editer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DO_Editer_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DO_Editer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DO_Editer_t qt_meta_stringdata_DO_Editer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DO_Editer"
QT_MOC_LITERAL(1, 10, 12), // "Edit_Triggle"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "EditPageNum"
QT_MOC_LITERAL(4, 36, 7), // "pageNum"
QT_MOC_LITERAL(5, 44, 31), // "On_DO_Table_DoubleClick_trigger"
QT_MOC_LITERAL(6, 76, 5), // "items"
QT_MOC_LITERAL(7, 82, 13), // "EditAttribute"
QT_MOC_LITERAL(8, 96, 9), // "attribute"
QT_MOC_LITERAL(9, 106, 12), // "databasePath"
QT_MOC_LITERAL(10, 119, 21) // "on_ConfirmBtn_clicked"

    },
    "DO_Editer\0Edit_Triggle\0\0EditPageNum\0"
    "pageNum\0On_DO_Table_DoubleClick_trigger\0"
    "items\0EditAttribute\0attribute\0"
    "databasePath\0on_ConfirmBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DO_Editer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   32,    2, 0x08 /* Private */,
      10,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 7, QMetaType::QString,    6,    8,    9,
    QMetaType::Void,

       0        // eod
};

void DO_Editer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DO_Editer *_t = static_cast<DO_Editer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Edit_Triggle((*reinterpret_cast< EditPageNum(*)>(_a[1]))); break;
        case 1: _t->On_DO_Table_DoubleClick_trigger((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< EditAttribute(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->on_ConfirmBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DO_Editer::*_t)(EditPageNum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DO_Editer::Edit_Triggle)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DO_Editer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DO_Editer.data,
      qt_meta_data_DO_Editer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DO_Editer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DO_Editer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DO_Editer.stringdata0))
        return static_cast<void*>(const_cast< DO_Editer*>(this));
    return QDialog::qt_metacast(_clname);
}

int DO_Editer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DO_Editer::Edit_Triggle(EditPageNum _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
