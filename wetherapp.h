#ifndef WETHERAPP_H
#define WETHERAPP_H

#include <QMainWindow>
#include "cityapi.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class wetherApp;
}
QT_END_NAMESPACE

class wetherApp : public QMainWindow
{
    Q_OBJECT

public:
    wetherApp(QWidget *parent = nullptr);
    ~wetherApp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wetherApp *ui;
private:
    CityAPI _TOKYO_();
    CityAPI _TEHRAN_();
    CityAPI _MOSCOW_();
    CityAPI _WASHAIGTON_();

};
#endif // WETHERAPP_H
