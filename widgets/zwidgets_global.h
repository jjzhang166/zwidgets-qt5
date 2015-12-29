#ifndef ZWIDGETS_GLOBAL_H
#define ZWIDGETS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ZWIDGETS_LIBRARY)
#  define ZWIDGETSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ZWIDGETSSHARED_EXPORT Q_DECL_IMPORT
#endif

#define Z_DECL_DEPRECATED Q_DECL_DEPRECATED
#define ZWIDGETS_NAMESPACE ZWIDGETS

#if !defined(ZWIDGETS_NAMESPACE)
#   define Z_BEGIN_NAMESPACE
#   define Z_END_NAMESPACE
#   define Z_USE_NAMESPACE
#else
#   define Z_BEGIN_NAMESPACE namespace ZWIDGETS_NAMESPACE {
#   define Z_END_NAMESPACE }
#   define Z_USE_NAMESPACE using namespace ZWIDGETS_NAMESPACE;
#endif

#define Z_DECLARE_PRIVATE(Class) Q_DECLARE_PRIVATE_D(qGetPtrHelper(d_d_ptr),Class)
#define Z_DECLARE_PUBLIC(Class) Q_DECLARE_PUBLIC(Class)
#define Z_D(Class) Q_D(Class)
#define Z_Q(Class) Q_Q(Class)
#define Z_DC(Class) Q_D(const Class)
#define Z_QC(Class) Q_Q(const Class)

#define Z_GET_FUN(Class) static Class##Private *get(Class *obj){return obj->d_func();}\
    static const Class##Private *get(const Class *obj){return obj->d_func();}

#endif // ZWIDGETS_GLOBAL_H
