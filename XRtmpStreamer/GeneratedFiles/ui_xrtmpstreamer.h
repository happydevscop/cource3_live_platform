/********************************************************************************
** Form generated from reading UI file 'xrtmpstreamer.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRTMPSTREAMER_H
#define UI_XRTMPSTREAMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XRtmpStreamerClass
{
public:
    QLineEdit *outUrl;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *inUrl;
    QPushButton *pushButton;
    QLabel *label_3;
    QComboBox *face;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *ImageView;
    QLabel *label_4;

    void setupUi(QWidget *XRtmpStreamerClass)
    {
        if (XRtmpStreamerClass->objectName().isEmpty())
            XRtmpStreamerClass->setObjectName(QString::fromUtf8("XRtmpStreamerClass"));
        XRtmpStreamerClass->resize(695, 580);
        XRtmpStreamerClass->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255,255,255);\n"
"font:75 12pt \"\351\273\221\344\275\223\";\n"
"}\n"
"QWidget\n"
"{\n"
"background-color:#383838;\n"
"}\n"
"QPushButton:hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(120, 120, 120, 255), stop:0.495 rgba(39, 39, 39, 255), stop:0.505 rgba(39,39, 39, 255), stop:1 rgba(120, 120,120, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"QPushButton:!hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(39, 39, 39, 255), stop:0.495 rgba(120, 120, 120, 255), stop:0.505 rgba(120,120, 120, 255), stop:1 rgba(39, 39,39, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"\n"
"QLineEdit\n"
"{\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
""
                        "\n"
"}\n"
"QComboBox\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"}"));
        outUrl = new QLineEdit(XRtmpStreamerClass);
        outUrl->setObjectName(QString::fromUtf8("outUrl"));
        outUrl->setGeometry(QRect(170, 220, 311, 41));
        label = new QLabel(XRtmpStreamerClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 230, 81, 16));
        label_2 = new QLabel(XRtmpStreamerClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(800, 430, 171, 41));
        inUrl = new QLineEdit(XRtmpStreamerClass);
        inUrl->setObjectName(QString::fromUtf8("inUrl"));
        inUrl->setGeometry(QRect(810, 490, 431, 41));
        pushButton = new QPushButton(XRtmpStreamerClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 220, 101, 41));
        label_3 = new QLabel(XRtmpStreamerClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(990, 440, 81, 31));
        face = new QComboBox(XRtmpStreamerClass);
        face->addItem(QString());
        face->addItem(QString());
        face->addItem(QString());
        face->setObjectName(QString::fromUtf8("face"));
        face->setGeometry(QRect(1110, 430, 91, 31));
        pushButton_2 = new QPushButton(XRtmpStreamerClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 390, 111, 41));
        lineEdit = new QLineEdit(XRtmpStreamerClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 390, 311, 41));
        pushButton_3 = new QPushButton(XRtmpStreamerClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 390, 101, 41));
        horizontalLayoutWidget = new QWidget(XRtmpStreamerClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(800, 140, 271, 231));
        ImageView = new QHBoxLayout(horizontalLayoutWidget);
        ImageView->setSpacing(6);
        ImageView->setContentsMargins(11, 11, 11, 11);
        ImageView->setObjectName(QString::fromUtf8("ImageView"));
        ImageView->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(XRtmpStreamerClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 40, 411, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_4->setFont(font);

        retranslateUi(XRtmpStreamerClass);
        QObject::connect(pushButton, SIGNAL(clicked()), XRtmpStreamerClass, SLOT(Stream()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), XRtmpStreamerClass, SLOT(Stream_mp4()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), XRtmpStreamerClass, SLOT(push_mp4()));

        QMetaObject::connectSlotsByName(XRtmpStreamerClass);
    } // setupUi

    void retranslateUi(QWidget *XRtmpStreamerClass)
    {
        XRtmpStreamerClass->setWindowTitle(QCoreApplication::translate("XRtmpStreamerClass", "XRtmpStreamer", nullptr));
        outUrl->setText(QCoreApplication::translate("XRtmpStreamerClass", "rtmp://192.168.56.1:1935/live/myStream", nullptr));
        label->setText(QCoreApplication::translate("XRtmpStreamerClass", "\346\216\250\346\265\201\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("XRtmpStreamerClass", "\350\276\223\345\205\245RTSP URL\346\210\226\n"
"\346\221\204\345\203\217\345\244\264\347\274\226\345\217\2670\343\200\2011", nullptr));
        inUrl->setText(QCoreApplication::translate("XRtmpStreamerClass", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("XRtmpStreamerClass", "\345\274\200\345\247\213\347\233\264\346\222\255", nullptr));
        label_3->setText(QCoreApplication::translate("XRtmpStreamerClass", "\347\276\216\351\242\234\347\272\247\345\210\253", nullptr));
        face->setItemText(0, QCoreApplication::translate("XRtmpStreamerClass", "\344\270\200\347\272\247", nullptr));
        face->setItemText(1, QCoreApplication::translate("XRtmpStreamerClass", "\344\272\214\347\272\247", nullptr));
        face->setItemText(2, QCoreApplication::translate("XRtmpStreamerClass", "\344\270\211\347\272\247", nullptr));

        pushButton_2->setText(QCoreApplication::translate("XRtmpStreamerClass", "\351\200\211\346\213\251\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("XRtmpStreamerClass", "\346\216\250\351\200\201\350\247\206\351\242\221", nullptr));
        label_4->setText(QCoreApplication::translate("XRtmpStreamerClass", "<html><head/><body><p><span style=\" font-size:16pt;\">\347\273\274\345\220\210\350\257\276\347\250\213\350\256\276\350\256\2413-\346\226\260\345\252\222\344\275\223\346\225\260\346\215\256\345\217\221\345\270\203\347\233\264\346\222\255\345\271\263\345\217\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XRtmpStreamerClass: public Ui_XRtmpStreamerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRTMPSTREAMER_H
