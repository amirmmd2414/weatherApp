#ifndef WETHERAPP_H
#define WETHERAPP_H

#include <QMainWindow>

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
};
#endif // WETHERAPP_H
