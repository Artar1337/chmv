#include "paint_astrakhantsev.h"
#include "speedpicker_astrakhantcev.h"
#include "tree_astrakhantcev.h"
#include "ui_paint_astrakhantsev.h"
#include "ui_speedpicker_astrakhantcev.h"
#include <QPainter>
#include <QPen>
#include <QIcon>
#include <QRectF>
#include <QTimer>
#include <QGraphicsScene>
#include <QRandomGenerator>


Paint_Astrakhantsev::Paint_Astrakhantsev(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Paint_Astrakhantsev)
{
    ui->setupUi(this);
    setFixedSize(1222,673);
    setWindowIcon(QIcon(":/icon.png"));
    tree=QImage(":/appletree.png");
    ornament=QPixmap(":/ornament.png");
    setWindowTitle("LAB number SEVEN");

    scene=new QGraphicsScene(this);
    currentbird = new bird_Astrakhantcev();

    slotClear();

    QPalette palette;
    palette.setBrush(QPalette::Background,QPixmap(":/back.jpg"));

    chooseform=new SpeedPicker_Astrakhantcev(this);
    chooseform->setPalette(palette);
    chooseform->hide();
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(create_tree_clicked()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(create_badtree_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(slotChoose()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slotClear()));

    timer->start(1);
}

Paint_Astrakhantsev::~Paint_Astrakhantsev()
{
    delete ui;
}

void Paint_Astrakhantsev::recieveData(int i)
{
    if(i==0)
    {
        currentbird->setWH(100,70);
        currentbird->setspeed(5);
        currentbird->setimg(QImage(":/goose.png"));
    }
    else if(i==1)
    {
        currentbird->setWH(100,90);
        currentbird->setspeed(8);
        currentbird->setimg(QImage(":/condor.png"));
    }
    else if(i==2)
    {
        currentbird->setWH(100,70);
        currentbird->setspeed(5);
        currentbird->setimg(QImage(":/voron.png"));
    }
}

void Paint_Astrakhantsev::slotChoose()
{
    chooseform->show();
}

void Paint_Astrakhantsev::create_tree_clicked()
{
    tree_astrakhantcev *item = new tree_astrakhantcev(1);
        item->setPos(QRandomGenerator::global()->bounded(40,1200),QRandomGenerator::global()->bounded(40,600));
    scene->addItem(item);   // Добавляем элемент на графическую сцену
}

void Paint_Astrakhantsev::slotClear()
{
    delete scene;
    scene=new QGraphicsScene(this);

    ui->graphicsView->resize(1222,643);
    ui->graphicsView->setScene(scene);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(0,0,1220,640);
    scene->setBackgroundBrush(QBrush(Qt::lightGray, Qt::SolidPattern));
    scene->addPixmap(ornament);
    currentbird = new bird_Astrakhantcev();
    currentbird->setPos(currentbird->getX(),currentbird->getY());
    scene->addItem(currentbird);
}

void Paint_Astrakhantsev::create_badtree_clicked()
{
    tree_astrakhantcev *item = new tree_astrakhantcev(0);
        item->setPos(QRandomGenerator::global()->bounded(40,1200),QRandomGenerator::global()->bounded(40,600));
    scene->addItem(item);
}

void Paint_Astrakhantsev::keyPressEvent( QKeyEvent * event )
{

    if( event->key() == Qt::Key_A )
    {
            currentbird->setX(currentbird->getX() - currentbird->getspeed());
            currentbird->setPos(currentbird->getX(),currentbird->getY());
            if(!currentbird->collidingItems().isEmpty())
                currentbird->setX(currentbird->getX() + currentbird->getspeed());
    }
    else if(event->key() == Qt::Key_D){

            currentbird->setX(currentbird->getX() + currentbird->getspeed());
            currentbird->setPos(currentbird->getX(),currentbird->getY());
            if(!currentbird->collidingItems().isEmpty())
                currentbird->setX(currentbird->getX() - currentbird->getspeed());

    }
    else if(event->key() == Qt::Key_W){

            currentbird->setY(currentbird->getY() - currentbird->getspeed());
            currentbird->setPos(currentbird->getX(),currentbird->getY());
            if(!currentbird->collidingItems().isEmpty())
                currentbird->setY(currentbird->getY() + currentbird->getspeed());
    }
    else if(event->key() == Qt::Key_S){

            currentbird->setY(currentbird->getY() + currentbird->getspeed());
            currentbird->setPos(currentbird->getX(),currentbird->getY());
            if(!currentbird->collidingItems().isEmpty())
                currentbird->setY(currentbird->getY() - currentbird->getspeed());
    }

    //west
    if(currentbird->getX() - 40 < 0){
        currentbird->setX(41);
    }
    //east
    if(currentbird->getX() > 1222-40-currentbird->getW()){
        currentbird->setX(1222-41-currentbird->getW());
    }
    //north
    if(currentbird->getY() - 40 < 0){
        currentbird->setY(41);
    }
    //south
    if(currentbird->getY() > 643-40-currentbird->getH()){
        currentbird->setY(643 -41-currentbird->getH());
    }
    currentbird->setPos(currentbird->getX(),currentbird->getY());
}
