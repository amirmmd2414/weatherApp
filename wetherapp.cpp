#include "wetherapp.h"
#include "ui_wetherapp.h"

wetherApp::wetherApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::wetherApp)
{
    ui->setupUi(this);
    //for ui main window
    setWindowFlags(Qt::WindowCloseButtonHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowModality(Qt::NonModal);
    //for ui main window

}

wetherApp::~wetherApp()
{
    delete ui;
}

void wetherApp::on_pushButton_clicked()
{
    close();
}

