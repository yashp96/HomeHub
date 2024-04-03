/********************************************************************************
** Form generated from reading UI file 'myui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYUI_H
#define UI_MYUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyUI
{
public:
    QWidget *centralwidget;
    QStackedWidget *MyUiMainStack;
    QWidget *PgHome;
    QLabel *label;
    QWidget *pgExplore;
    QLabel *label_2;
    QWidget *PgDevices;
    QLabel *label_3;
    QWidget *PgSettings;
    QLabel *label_4;
    QPushButton *pbFunction_1;
    QPushButton *pbFunction_2;
    QPushButton *pbFunction_3;
    QPushButton *pbFunction_4;
    QPushButton *pbFunction_5;
    QPushButton *pbFunction_6;
    QPushButton *pbFunction_7;
    QPushButton *pbFunction_8;
    QPushButton *pbFunction_9;
    QPushButton *pbFunction_10;
    QPushButton *pbFunction_11;
    QPushButton *pbFunction_12;
    QLabel *bottomKeyInd_1;
    QLabel *bottomKeyInd_2;
    QLabel *bottomKeyInd_3;
    QLabel *bottomKeyInd_4;

    void setupUi(QMainWindow *MyUI)
    {
        if (MyUI->objectName().isEmpty())
            MyUI->setObjectName("MyUI");
        MyUI->resize(800, 600);
        MyUI->setMinimumSize(QSize(800, 600));
        MyUI->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MyUI);
        centralwidget->setObjectName("centralwidget");
        MyUiMainStack = new QStackedWidget(centralwidget);
        MyUiMainStack->setObjectName("MyUiMainStack");
        MyUiMainStack->setGeometry(QRect(100, 50, 600, 500));
        MyUiMainStack->setStyleSheet(QString::fromUtf8("QStackedWidget\n"
"{\n"
"	background-color: rgb(113, 113, 113);\n"
"}"));
        PgHome = new QWidget();
        PgHome->setObjectName("PgHome");
        label = new QLabel(PgHome);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 160, 58, 18));
        MyUiMainStack->addWidget(PgHome);
        pgExplore = new QWidget();
        pgExplore->setObjectName("pgExplore");
        label_2 = new QLabel(pgExplore);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 150, 58, 18));
        MyUiMainStack->addWidget(pgExplore);
        PgDevices = new QWidget();
        PgDevices->setObjectName("PgDevices");
        label_3 = new QLabel(PgDevices);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 170, 58, 18));
        MyUiMainStack->addWidget(PgDevices);
        PgSettings = new QWidget();
        PgSettings->setObjectName("PgSettings");
        label_4 = new QLabel(PgSettings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 220, 58, 18));
        MyUiMainStack->addWidget(PgSettings);
        pbFunction_1 = new QPushButton(centralwidget);
        pbFunction_1->setObjectName("pbFunction_1");
        pbFunction_1->setGeometry(QRect(10, 110, 80, 26));
        pbFunction_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_2 = new QPushButton(centralwidget);
        pbFunction_2->setObjectName("pbFunction_2");
        pbFunction_2->setGeometry(QRect(10, 240, 80, 26));
        pbFunction_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_3 = new QPushButton(centralwidget);
        pbFunction_3->setObjectName("pbFunction_3");
        pbFunction_3->setGeometry(QRect(10, 360, 80, 26));
        pbFunction_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_4 = new QPushButton(centralwidget);
        pbFunction_4->setObjectName("pbFunction_4");
        pbFunction_4->setGeometry(QRect(10, 470, 80, 26));
        pbFunction_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_5 = new QPushButton(centralwidget);
        pbFunction_5->setObjectName("pbFunction_5");
        pbFunction_5->setGeometry(QRect(710, 110, 80, 26));
        pbFunction_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_6 = new QPushButton(centralwidget);
        pbFunction_6->setObjectName("pbFunction_6");
        pbFunction_6->setGeometry(QRect(710, 240, 80, 26));
        pbFunction_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_7 = new QPushButton(centralwidget);
        pbFunction_7->setObjectName("pbFunction_7");
        pbFunction_7->setGeometry(QRect(710, 360, 80, 26));
        pbFunction_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_8 = new QPushButton(centralwidget);
        pbFunction_8->setObjectName("pbFunction_8");
        pbFunction_8->setGeometry(QRect(710, 470, 80, 26));
        pbFunction_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_9 = new QPushButton(centralwidget);
        pbFunction_9->setObjectName("pbFunction_9");
        pbFunction_9->setGeometry(QRect(135, 565, 80, 26));
        pbFunction_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_10 = new QPushButton(centralwidget);
        pbFunction_10->setObjectName("pbFunction_10");
        pbFunction_10->setGeometry(QRect(285, 565, 80, 26));
        pbFunction_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_11 = new QPushButton(centralwidget);
        pbFunction_11->setObjectName("pbFunction_11");
        pbFunction_11->setGeometry(QRect(435, 565, 80, 26));
        pbFunction_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        pbFunction_12 = new QPushButton(centralwidget);
        pbFunction_12->setObjectName("pbFunction_12");
        pbFunction_12->setGeometry(QRect(584, 565, 80, 26));
        pbFunction_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Ubuntu\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"Ubuntu\";\n"
"	text-decoration:underline;\n"
"}"));
        bottomKeyInd_1 = new QLabel(centralwidget);
        bottomKeyInd_1->setObjectName("bottomKeyInd_1");
        bottomKeyInd_1->setGeometry(QRect(100, 550, 150, 3));
        bottomKeyInd_1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        bottomKeyInd_2 = new QLabel(centralwidget);
        bottomKeyInd_2->setObjectName("bottomKeyInd_2");
        bottomKeyInd_2->setGeometry(QRect(250, 550, 150, 3));
        bottomKeyInd_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        bottomKeyInd_3 = new QLabel(centralwidget);
        bottomKeyInd_3->setObjectName("bottomKeyInd_3");
        bottomKeyInd_3->setGeometry(QRect(400, 550, 150, 3));
        bottomKeyInd_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        bottomKeyInd_4 = new QLabel(centralwidget);
        bottomKeyInd_4->setObjectName("bottomKeyInd_4");
        bottomKeyInd_4->setGeometry(QRect(550, 550, 150, 3));
        bottomKeyInd_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        MyUI->setCentralWidget(centralwidget);

        retranslateUi(MyUI);

        QMetaObject::connectSlotsByName(MyUI);
    } // setupUi

    void retranslateUi(QMainWindow *MyUI)
    {
        MyUI->setWindowTitle(QCoreApplication::translate("MyUI", "MyUI", nullptr));
        label->setText(QCoreApplication::translate("MyUI", "home", nullptr));
        label_2->setText(QCoreApplication::translate("MyUI", "explore", nullptr));
        label_3->setText(QCoreApplication::translate("MyUI", "devices", nullptr));
        label_4->setText(QCoreApplication::translate("MyUI", "settings", nullptr));
        pbFunction_1->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_2->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_3->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_4->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_5->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_6->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_7->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_8->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_9->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_10->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_11->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        pbFunction_12->setText(QCoreApplication::translate("MyUI", "PushButton", nullptr));
        bottomKeyInd_1->setText(QString());
        bottomKeyInd_2->setText(QString());
        bottomKeyInd_3->setText(QString());
        bottomKeyInd_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyUI: public Ui_MyUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYUI_H
