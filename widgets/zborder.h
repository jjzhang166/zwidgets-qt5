#ifndef ZBORDER_H
#define ZBORDER_H

#include <QObject>
#include <QMarginsF>

#include "zwidgets_global.h"
#include "zobject.h"

Z_BEGIN_NAMESPACE

class ZBorderPrivate;
class ZWIDGETSSHARED_EXPORT ZBorder : public QObject, public ZObject
{
    Q_OBJECT

    Q_PROPERTY(qreal top READ top WRITE setTop NOTIFY topChanged)
    Q_PROPERTY(qreal bottom READ bottom WRITE setBottom NOTIFY bottomChanged)
    Q_PROPERTY(qreal left READ left WRITE setLeft NOTIFY leftChanged)
    Q_PROPERTY(qreal right READ right WRITE setRight NOTIFY rightChanged)
    Q_PROPERTY(bool null READ isNull)

public:
    explicit ZBorder(QObject *parent = 0);
    explicit ZBorder(QMargins margins, QObject *parent = 0);

    qreal left() const;
    qreal top() const;
    qreal right() const;
    qreal bottom() const;

    bool isNull() const;

    Q_DECL_RELAXED_CONSTEXPR void setLeft(qreal left);
    Q_DECL_RELAXED_CONSTEXPR void setTop(qreal top);
    Q_DECL_RELAXED_CONSTEXPR void setRight(qreal right);
    Q_DECL_RELAXED_CONSTEXPR void setBottom(qreal bottom);

    Q_DECL_RELAXED_CONSTEXPR ZBorder &operator+=(const ZBorder &margins);
    Q_DECL_RELAXED_CONSTEXPR ZBorder &operator-=(const ZBorder &margins);
    Q_DECL_RELAXED_CONSTEXPR ZBorder &operator+=(qreal addend);
    Q_DECL_RELAXED_CONSTEXPR ZBorder &operator-=(qreal subtrahend);
    Q_DECL_RELAXED_CONSTEXPR ZBorder &operator*=(qreal factor);
    Q_DECL_RELAXED_CONSTEXPR ZBorder &operator/=(qreal divisor);

    operator QMarginsF() const;

Q_SIGNALS:
    void topChanged(qreal top);
    void bottomChanged(qreal bottom);
    void leftChanged(qreal left);
    void rightChanged(qreal right);

private:
    Z_DECLARE_PRIVATE(ZBorder)
};

inline bool operator==(const ZBorder &lhs, const ZBorder &rhs) Q_DECL_NOTHROW
{
    return QMarginsF(lhs) == QMarginsF(rhs);
}

inline bool operator!=(const ZBorder &lhs, const ZBorder &rhs) Q_DECL_NOTHROW
{
    return !operator==(lhs, rhs);
}

Z_END_NAMESPACE

#endif // ZBORDER_H
