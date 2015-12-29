#ifndef ZOBJECT_H
#define ZOBJECT_H

#include <QScopedPointer>

#include "zwidgets_global.h"

Z_BEGIN_NAMESPACE

class ZObjectPrivate;
class ZWIDGETSSHARED_EXPORT ZObject
{
protected:
    ZObject(ZObjectPrivate &dd);
    virtual ~ZObject();

    QScopedPointer<ZObjectPrivate> d_d_ptr;

    Q_DISABLE_COPY(ZObject)
    Z_DECLARE_PRIVATE(ZObject)
};

Z_END_NAMESPACE

#endif // ZOBJECT_H
