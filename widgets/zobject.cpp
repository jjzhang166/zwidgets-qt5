#include "zobject.h"
#include "private/zobject_p.h"

Z_BEGIN_NAMESPACE

ZObjectPrivate::ZObjectPrivate(ZObject *qq)
    : q_ptr(qq)
{

}

ZObjectPrivate::~ZObjectPrivate()
{

}

ZObject::ZObject(ZObjectPrivate &dd):
    d_d_ptr(&dd)
{

}

ZObject::~ZObject()
{

}

Z_END_NAMESPACE
