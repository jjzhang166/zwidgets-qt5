#ifndef ZWIDGET_P_H
#define ZWIDGET_P_H

#include "zwidgets_global.h"
#include "zobject_p.h"

Z_BEGIN_NAMESPACE

class ZWidget;
class ZBorder;
class ZWidgetPrivate : public ZObjectPrivate
{
protected:
    ZWidgetPrivate(ZWidget *qq);

    ZBorder *border;

    void init();

    Z_DECLARE_PUBLIC(ZWidget)
    Z_GET_FUN(ZWidget)
};

Z_END_NAMESPACE

#endif // ZWIDGET_P_H

