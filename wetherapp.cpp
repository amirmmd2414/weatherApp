#include "wetherapp.h"
#include "ui_wetherapp.h"

wetherApp::wetherApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::wetherApp)
{
    ui->setupUi(this);
}

wetherApp::~wetherApp()
{
    delete ui;
}
