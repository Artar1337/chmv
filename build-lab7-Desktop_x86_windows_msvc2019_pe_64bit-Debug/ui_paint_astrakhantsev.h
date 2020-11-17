/********************************************************************************
** Form generated from reading UI file 'paint_astrakhantsev.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_ASTRAKHANTSEV_H
#define UI_PAINT_ASTRAKHANTSEV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint_Astrakhantsev
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Paint_Astrakhantsev)
    {
        if (Paint_Astrakhantsev->objectName().isEmpty())
            Paint_Astrakhantsev->setObjectName(QString::fromUtf8("Paint_Astrakhantsev"));
        Paint_Astrakhantsev->resize(1222, 673);
        graphicsView = new QGraphicsView(Paint_Astrakhantsev);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 1, 643));
        pushButton = new QPushButton(Paint_Astrakhantsev);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1, 650, 237, 21));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton_2 = new QPushButton(Paint_Astrakhantsev);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(245, 650, 237, 21));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_3 = new QPushButton(Paint_Astrakhantsev);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(489, 650, 236, 21));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_4 = new QPushButton(Paint_Astrakhantsev);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(732, 650, 244, 21));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_5 = new QPushButton(Paint_Astrakhantsev);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(983, 650, 237, 21));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        retranslateUi(Paint_Astrakhantsev);

        QMetaObject::connectSlotsByName(Paint_Astrakhantsev);
    } // setupUi

    void retranslateUi(QWidget *Paint_Astrakhantsev)
    {
        Paint_Astrakhantsev->setWindowTitle(QCoreApplication::translate("Paint_Astrakhantsev", "Paint_Astrakhantsev", nullptr));
        pushButton->setText(QCoreApplication::translate("Paint_Astrakhantsev", "\320\241\320\261\321\200\320\276\321\201 \321\201\321\206\320\265\320\275\321\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Paint_Astrakhantsev", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\321\202\320\270\321\206\321\213", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Paint_Astrakhantsev", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\321\200\320\260\321\201\320\270\320\262\320\276\320\265 \320\264\320\265\321\200\320\265\320\262\320\276", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Paint_Astrakhantsev", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\265\321\200\320\265\320\262\320\276, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \321\217 \320\275\320\260\321\200\320\270\321\201\320\276\320\262\320\260\320\273", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Paint_Astrakhantsev", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paint_Astrakhantsev: public Ui_Paint_Astrakhantsev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_ASTRAKHANTSEV_H
