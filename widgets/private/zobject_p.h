#ifndef DOBJECT_P_H
#define DOBJECT_P_H

#include "zwidgets_global.h"
#include "zobject.h"

Z_BEGIN_NAMESPACE

class ZObjectPrivate
{
public:
    virtual ~ZObjectPrivate();

protected:
    ZObjectPrivate(ZObject *qq);

    ZObject *q_ptr;

    Z_DECLARE_PUBLIC(ZObject)
    Z_GET_FUN(ZObject)
};

Z_END_NAMESPACE

#endif // DOBJECT_P_H

