#ifndef SPEEDPICKER_ASTRAKHANTCEV_H
#define SPEEDPICKER_ASTRAKHANTCEV_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class SpeedPicker_Astrakhantcev;
}

class SpeedPicker_Astrakhantcev : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpeedPicker_Astrakhantcev(QWidget *parent =nullptr);
    ~SpeedPicker_Astrakhantcev();
signals:
    void sendData(int i);
public slots:
    void acceptButtonClicked();

private:
    Ui::SpeedPicker_Astrakhantcev *ui;
};

#endif // SPEEDPICKER_ASTRAKHANTCEV_H
