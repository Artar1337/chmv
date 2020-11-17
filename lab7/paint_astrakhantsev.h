#ifndef PAINT_ASTRAKHANTSEV_H
#define PAINT_ASTRAKHANTSEV_H
#define Pi 3.14159265
#include <QWidget>
#include <QGraphicsItem>
#include "bird_astrakhantcev.h"
#include "speedpicker_astrakhantcev.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Paint_Astrakhantsev; }
QT_END_NAMESPACE

class Paint_Astrakhantsev : public QWidget
{
    Q_OBJECT

public:
    Paint_Astrakhantsev(QWidget *parent = nullptr);
    ~Paint_Astrakhantsev();

private:
    Ui::Paint_Astrakhantsev *ui;
    QGraphicsScene *scene;
    QImage bird;
    QImage tree;
    QPixmap ornament;
    QPixmap ornament2;
    SpeedPicker_Astrakhantcev *chooseform;
    bird_Astrakhantcev *currentbird;
    void keyPressEvent( QKeyEvent * event);
private slots:
    void recieveData(int);
    void slotChoose();
    void create_tree_clicked();
    void create_badtree_clicked();
    void slotClear();

};


#endif // PAINT_ASTRAKHANTSEV_H
