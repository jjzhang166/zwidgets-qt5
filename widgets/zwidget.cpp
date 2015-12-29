#include "zwidget.h"
#include "private/zwidget_p.h"

#include "zborder.h"

Z_BEGIN_NAMESPACE

ZWidgetPrivate::ZWidgetPrivate(ZWidget *qq) :
    ZObjectPrivate(qq)
{

}

void ZWidgetPrivate::init()
{
    Z_Q(ZWidget);

    border = new ZBorder(q);
}

ZWidget::ZWidget(QWidget *parent) :
    QWidget(parent),
    ZObject(*new ZWidgetPrivate(this))
{

}

ZWidget::ZWidget(ZWidget *parent) :
    QWidget(parent),
    ZObject(*new ZWidgetPrivate(this))
{

}

ZBorder *ZWidget::border() const
{
    Z_DC(ZWidget);

    return d->border;
}

Z_END_NAMESPACE
