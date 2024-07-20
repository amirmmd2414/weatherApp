#include "wetherapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    wetherApp w;
    w.show();
    return a.exec();
}
