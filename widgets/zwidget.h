#ifndef ZWIDGET_H
#define ZWIDGET_H

#include <QWidget>
#include <QMarginsF>

#include "zwidgets_global.h"
#include "zobject.h"

Z_BEGIN_NAMESPACE

class ZWidgetPrivate;
class ZBorder;
class ZWIDGETSSHARED_EXPORT ZWidget : public QWidget, public ZObject
{
    Q_OBJECT

    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(int y READ y WRITE setY NOTIFY yChanged)
    Q_PROPERTY(int width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(int height READ height WRITE setHeight NOTIFY heightChanged)
    Q_PROPERTY(ZBorder* border READ border)

public:
    explicit ZWidget(QWidget *parent = 0);
    explicit ZWidget(ZWidget *parent = 0);

    inline int x() const
    {return QWidget::x();}
    inline int y() const
    {return QWidget::y();}
    inline int width() const
    {return QWidget::width();}
    inline int height() const
    {return QWidget::height();}

    ZBorder* border() const;

public slots:
    inline void setX(int x)
    {move(x, y());}
    inline void setY(int y)
    {move(x(), y);}
    inline void setWidth(int width)
    {resize(width, height());}
    inline void setHeight(int height)
    {resize(width(), height);}

Q_SIGNALS:
    void enabledChanged(bool enabled);
    void visibleChanged(bool visible);
    void xChanged(int x);
    void yChanged(int y);
    void widthChanged(int width);
    void heightChanged(int height);

private:
    Z_DECLARE_PRIVATE(ZWidget)
};

Z_END_NAMESPACE

#endif // ZWIDGET_H
