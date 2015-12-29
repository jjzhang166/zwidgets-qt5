#include "zborder.h"
#include "private/zborder_p.h"

Z_BEGIN_NAMESPACE

ZBorderPrivate::ZBorderPrivate(ZBorder *qq) :
    ZObjectPrivate(qq)
{

}

ZBorder::ZBorder(QObject *parent) :
    QObject(parent),
    ZObject(*new ZBorderPrivate(this))
{

}

ZBorder::ZBorder(QMargins margins, QObject *parent) :
    QObject(parent),
    ZObject(*new ZBorderPrivate(this))
{
    d_func()->marginsF = margins;
}

qreal ZBorder::left() const
{
    Z_DC(ZBorder);

    return d->marginsF.left();
}

qreal ZBorder::top() const
{
    Z_DC(ZBorder);

    return d->marginsF.top();
}

qreal ZBorder::right() const
{
    Z_DC(ZBorder);

    return d->marginsF.right();
}

qreal ZBorder::bottom() const
{
    Z_DC(ZBorder);

    return d->marginsF.bottom();
}

bool ZBorder::isNull() const
{
    Z_DC(ZBorder);

    return d->marginsF.isNull();
}

void ZBorder::setLeft(qreal left)
{
    Z_D(ZBorder);

    if(d->marginsF.left() == left)
        return;

    d->marginsF.setLeft(left);

    emit leftChanged(left);
}

void ZBorder::setTop(qreal top)
{
    Z_D(ZBorder);

    if(d->marginsF.top() == top)
        return;

    d->marginsF.setTop(top);

    emit topChanged(top);
}

void ZBorder::setRight(qreal right)
{
    Z_D(ZBorder);

    if(d->marginsF.right() == right)
        return;

    d->marginsF.setRight(right);

    emit rightChanged(right);
}

void ZBorder::setBottom(qreal bottom)
{
    Z_D(ZBorder);

    if(d->marginsF.bottom() == bottom)
        return;

    d->marginsF.setBottom(bottom);

    emit bottomChanged(bottom);
}

ZBorder &ZBorder::operator+=(const ZBorder &margins)
{
    Z_D(ZBorder);

    d->marginsF += d->get(&margins)->marginsF;

    return *this;
}

ZBorder &ZBorder::operator-=(const ZBorder &margins)
{
    Z_D(ZBorder);

    d->marginsF -= d->get(&margins)->marginsF;

    return *this;
}

ZBorder &ZBorder::operator+=(qreal addend)
{
    Z_D(ZBorder);

    d->marginsF += addend;

    return *this;
}

ZBorder &ZBorder::operator-=(qreal subtrahend)
{
    Z_D(ZBorder);

    d->marginsF -= subtrahend;

    return *this;
}

ZBorder &ZBorder::operator*=(qreal factor)
{
    Z_D(ZBorder);

    d->marginsF *= factor;

    return *this;
}

ZBorder &ZBorder::operator/=(qreal divisor)
{
    Z_D(ZBorder);

    d->marginsF /= divisor;

    return *this;
}

ZBorder::operator QMarginsF() const
{
    Z_DC(ZBorder);

    return d->marginsF;
}

Z_END_NAMESPACE
