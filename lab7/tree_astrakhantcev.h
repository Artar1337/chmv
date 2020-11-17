#ifndef TREE_ASTRAKHANTCEV_H
#define TREE_ASTRAKHANTCEV_H

#include <QObject>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QCursor>
#include <QGraphicsSceneMouseEvent>

class tree_astrakhantcev : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit tree_astrakhantcev(bool isPic,QObject *parent = nullptr);

signals:

private:
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
        void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        bool isPic;
        QImage img;
};

#endif // TREE_ASTRAKHANTCEV_H
