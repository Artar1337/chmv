#ifndef BIRD_ASTRAKHANTCEV_H
#define BIRD_ASTRAKHANTCEV_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QKeyEvent>

class bird_Astrakhantcev : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit bird_Astrakhantcev(QObject *parent = nullptr);
    void setX(float x);
    void setY(float y);
    void setspeed(float s);
    void setimg(QImage i);
    float getX();
    float getY();
    void setWH(float w,float h);
    float getW();
    float getH();
    float getspeed();
    QImage getimg();

signals:

private:
    float X;
    float Y;
    float W;
    float H;
    float speed;
    QImage img;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // BIRD_ASTRAKHANTCEV_H
