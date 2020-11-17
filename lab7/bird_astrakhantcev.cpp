#include "bird_astrakhantcev.h"

bird_Astrakhantcev::bird_Astrakhantcev(QObject *parent) : QObject(parent),QGraphicsItem()
{
    X=41;
    Y=643-171;
    W=100;
    H=70;
    speed=5.0f;
    img=QImage(":/goose.png");
}

void bird_Astrakhantcev::setX(float X){
    this->X=X;
}

void bird_Astrakhantcev::setY(float Y){
    this->Y=Y;
}
void bird_Astrakhantcev::setspeed(float s){
    speed=s;
}
void bird_Astrakhantcev::setimg(QImage i){
    img=i;
}

void bird_Astrakhantcev::setWH(float w,float h){
    W=w;
    H=h;
}

float bird_Astrakhantcev::getX(){
    return X;
}
float bird_Astrakhantcev::getY(){
    return Y;
}
float bird_Astrakhantcev::getW(){
    return W;
}
float bird_Astrakhantcev::getH(){
    return H;
}
float bird_Astrakhantcev::getspeed(){
    return speed;
}

QImage bird_Astrakhantcev::getimg(){
    return img;
}

QRectF bird_Astrakhantcev::boundingRect() const
{
    return QRectF (0,0,W,H);
}

void bird_Astrakhantcev::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawImage(QRectF(0,0,W,H),img);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}
