/****************************************************************************
** Meta object code from reading C++ file 'ImageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ImageWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageWidget_t {
    QByteArrayData data[15];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageWidget_t qt_meta_stringdata_ImageWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageWidget"
QT_MOC_LITERAL(1, 12, 4), // "Open"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "Save"
QT_MOC_LITERAL(4, 23, 6), // "SaveAs"
QT_MOC_LITERAL(5, 30, 6), // "Invert"
QT_MOC_LITERAL(6, 37, 6), // "Mirror"
QT_MOC_LITERAL(7, 44, 10), // "horizontal"
QT_MOC_LITERAL(8, 55, 8), // "vertical"
QT_MOC_LITERAL(9, 64, 8), // "TurnGray"
QT_MOC_LITERAL(10, 73, 7), // "Restore"
QT_MOC_LITERAL(11, 81, 13), // "Choose_Random"
QT_MOC_LITERAL(12, 95, 13), // "Choose_Entire"
QT_MOC_LITERAL(13, 109, 15), // "Choose_Subpatch"
QT_MOC_LITERAL(14, 125, 12) // "Is_DrawSeams"

    },
    "ImageWidget\0Open\0\0Save\0SaveAs\0Invert\0"
    "Mirror\0horizontal\0vertical\0TurnGray\0"
    "Restore\0Choose_Random\0Choose_Entire\0"
    "Choose_Subpatch\0Is_DrawSeams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    2,   83,    2, 0x0a /* Public */,
       6,    1,   88,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   91,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,
      14,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageWidget *_t = static_cast<ImageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Open(); break;
        case 1: _t->Save(); break;
        case 2: _t->SaveAs(); break;
        case 3: _t->Invert(); break;
        case 4: _t->Mirror((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->Mirror((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->Mirror(); break;
        case 7: _t->TurnGray(); break;
        case 8: _t->Restore(); break;
        case 9: _t->Choose_Random(); break;
        case 10: _t->Choose_Entire(); break;
        case 11: _t->Choose_Subpatch(); break;
        case 12: _t->Is_DrawSeams(); break;
        default: ;
        }
    }
}

const QMetaObject ImageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageWidget.data,
      qt_meta_data_ImageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageWidget.stringdata0))
        return static_cast<void*>(const_cast< ImageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
