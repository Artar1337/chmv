#include "paint_astrakhantsev.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());

    Paint_Astrakhantsev w;
    w.show();
    return a.exec();
}
