#include "tree_astrakhantcev.h"


tree_astrakhantcev::tree_astrakhantcev(bool isPic,QObject *parent) : QObject(parent),QGraphicsItem()
{
    this->isPic=isPic;
    img=QImage(":/appletree.png");
}
QRectF tree_astrakhantcev::boundingRect() const
{
    return QRectF (-30,-30,120,220);
}

void tree_astrakhantcev::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(isPic)
    {
        painter->drawImage(boundingRect(),img);
        return;
    }
    painter->setPen(Qt::black);
    painter->setBrush(QBrush(Qt::GlobalColor(Qt::darkRed)));
    painter->drawRect(0,0,60,60);
    painter->drawRect(0,60,60,60);
    painter->drawRect(0,120,60,60);
    painter->setBrush(QBrush(Qt::GlobalColor(Qt::darkGreen)));
    painter->drawChord(QRect(-30,-30,120,120), 0,  5760);
    painter->setBrush(QBrush(Qt::GlobalColor(Qt::red)));
    painter->drawChord(QRect(-20,5,20,20), 0,  5760);
    painter->drawChord(QRect(-20,30,20,20), 0,  5760);
    painter->drawChord(QRect(5,-20,20,20), 0,  5760);
    painter->drawChord(QRect(31,5,20,20), 0,  5760);
    painter->drawChord(QRect(63,30,20,20), 0,  5760);
    painter->drawChord(QRect(63,5,20,20), 0,  5760);
    painter->drawChord(QRect(31,50,20,20), 0,  5760);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void tree_astrakhantcev::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
}

void tree_astrakhantcev::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void tree_astrakhantcev::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));

    Q_UNUSED(event);
}
