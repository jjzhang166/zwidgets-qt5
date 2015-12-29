#ifndef ZBORDER_P_H
#define ZBORDER_P_H

#include <QMarginsF>

#include "zwidgets_global.h"
#include "zobject_p.h"

Z_BEGIN_NAMESPACE

class ZBorder;
class ZBorderPrivate : public ZObjectPrivate
{
protected:
    ZBorderPrivate(ZBorder *qq);

    QMarginsF marginsF;

    Z_DECLARE_PUBLIC(ZBorder)
    Z_GET_FUN(ZBorder)
};

Z_END_NAMESPACE

#endif // ZBORDER_P_H

