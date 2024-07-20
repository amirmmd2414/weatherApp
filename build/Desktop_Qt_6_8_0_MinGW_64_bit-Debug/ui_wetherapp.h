/********************************************************************************
** Form generated from reading UI file 'wetherapp.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WETHERAPP_H
#define UI_WETHERAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wetherApp
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *city_picture;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QMainWindow *wetherApp)
    {
        if (wetherApp->objectName().isEmpty())
            wetherApp->setObjectName("wetherApp");
        wetherApp->resize(511, 600);
        centralwidget = new QWidget(wetherApp);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-30, 0, 541, 601));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Pictures/download.jpg);\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 50, 411, 501));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(255, 255, 255);\n"
""));
        city_picture = new QLabel(centralwidget);
        city_picture->setObjectName("city_picture");
        city_picture->setGeometry(QRect(110, 80, 301, 151));
        city_picture->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(280, 460, 151, 31));
        comboBox->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\" ;\n"
"color:rgb(0, 0, 0);\n"
"border: 1px solid gray;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 460, 161, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 900 9pt \"Segoe UI Black\" ;\n"
"color:rgb(0, 0, 0);\n"
"border: 1px solid gray;"));
        wetherApp->setCentralWidget(centralwidget);

        retranslateUi(wetherApp);

        QMetaObject::connectSlotsByName(wetherApp);
    } // setupUi

    void retranslateUi(QMainWindow *wetherApp)
    {
        wetherApp->setWindowTitle(QCoreApplication::translate("wetherApp", "wetherApp", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        city_picture->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("wetherApp", "Tehran", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("wetherApp", "Tokyo", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("wetherApp", "washington d.c.", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("wetherApp", "moscow", nullptr));

        pushButton->setText(QCoreApplication::translate("wetherApp", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wetherApp: public Ui_wetherApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WETHERAPP_H
