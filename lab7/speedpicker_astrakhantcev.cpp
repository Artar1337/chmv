#include "speedpicker_astrakhantcev.h"
#include "ui_speedpicker_astrakhantcev.h"

SpeedPicker_Astrakhantcev::SpeedPicker_Astrakhantcev(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpeedPicker_Astrakhantcev)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(acceptButtonClicked()));
    connect(this, SIGNAL(sendData(int)), parent, SLOT(recieveData(int)));
}

SpeedPicker_Astrakhantcev::~SpeedPicker_Astrakhantcev()
{
    delete ui;
}

void SpeedPicker_Astrakhantcev::acceptButtonClicked(){
    int i=0;
    if(ui->radioButton_2->isChecked())
        i=1;
    else if(ui->radioButton_3->isChecked())
        i=2;
        emit(sendData(i));
        this->hide();
}
