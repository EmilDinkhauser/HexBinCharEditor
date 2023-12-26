/****************************************************************************
** Meta object code from reading C++ file 'dragdropwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../HEX_BIN_CHAR_Dateieditor/dragdropwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dragdropwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDragDropWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDragDropWidgetENDCLASS = QtMocHelpers::stringData(
    "DragDropWidget",
    "onbuttonBINClicked",
    "",
    "onbuttonHEXClicked",
    "onbuttonCHARClicked",
    "onbuttonSAVEClicked",
    "onbuttonCLEARClicked",
    "isValidTextForCurrentMode"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDragDropWidgetENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[15];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[21];
    char stringdata7[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDragDropWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDragDropWidgetENDCLASS_t qt_meta_stringdata_CLASSDragDropWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "DragDropWidget"
        QT_MOC_LITERAL(15, 18),  // "onbuttonBINClicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 18),  // "onbuttonHEXClicked"
        QT_MOC_LITERAL(54, 19),  // "onbuttonCHARClicked"
        QT_MOC_LITERAL(74, 19),  // "onbuttonSAVEClicked"
        QT_MOC_LITERAL(94, 20),  // "onbuttonCLEARClicked"
        QT_MOC_LITERAL(115, 25)   // "isValidTextForCurrentMode"
    },
    "DragDropWidget",
    "onbuttonBINClicked",
    "",
    "onbuttonHEXClicked",
    "onbuttonCHARClicked",
    "onbuttonSAVEClicked",
    "onbuttonCLEARClicked",
    "isValidTextForCurrentMode"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDragDropWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject DragDropWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDragDropWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDragDropWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDragDropWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DragDropWidget, std::true_type>,
        // method 'onbuttonBINClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onbuttonHEXClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onbuttonCHARClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onbuttonSAVEClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onbuttonCLEARClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isValidTextForCurrentMode'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void DragDropWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DragDropWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onbuttonBINClicked(); break;
        case 1: _t->onbuttonHEXClicked(); break;
        case 2: _t->onbuttonCHARClicked(); break;
        case 3: _t->onbuttonSAVEClicked(); break;
        case 4: _t->onbuttonCLEARClicked(); break;
        case 5: { bool _r = _t->isValidTextForCurrentMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *DragDropWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DragDropWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDragDropWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DragDropWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
