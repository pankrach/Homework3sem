/********************************************************************************
** Form generated from reading UI file 'simpleOrThreadTrigger.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEORTHREADTRIGGER_H
#define UI_SIMPLEORTHREADTRIGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simpleOrThreadTriggerClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *simpleOrThreadTriggerClass)
    {
        if (simpleOrThreadTriggerClass->objectName().isEmpty())
            simpleOrThreadTriggerClass->setObjectName(QStringLiteral("simpleOrThreadTriggerClass"));
        simpleOrThreadTriggerClass->resize(600, 400);
        centralWidget = new QWidget(simpleOrThreadTriggerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(120, 10, 331, 76));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 100, 331, 34));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 140, 331, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(120, 180, 331, 161));
        simpleOrThreadTriggerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(simpleOrThreadTriggerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        simpleOrThreadTriggerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(simpleOrThreadTriggerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        simpleOrThreadTriggerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(simpleOrThreadTriggerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        simpleOrThreadTriggerClass->setStatusBar(statusBar);

        retranslateUi(simpleOrThreadTriggerClass);

        QMetaObject::connectSlotsByName(simpleOrThreadTriggerClass);
    } // setupUi

    void retranslateUi(QMainWindow *simpleOrThreadTriggerClass)
    {
        simpleOrThreadTriggerClass->setWindowTitle(QApplication::translate("simpleOrThreadTriggerClass", "simpleOrThreadTrigger", 0));
        label->setText(QApplication::translate("simpleOrThreadTriggerClass", "S=", 0));
        label_2->setText(QApplication::translate("simpleOrThreadTriggerClass", "R=", 0));
        pushButton->setText(QApplication::translate("simpleOrThreadTriggerClass", "\320\236\321\202\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \321\201\321\205\320\265\320\274\321\203", 0));
        radioButton->setText(QApplication::translate("simpleOrThreadTriggerClass", "\320\241 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\320\276\320\271 \320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", 0));
        radioButton_2->setText(QApplication::translate("simpleOrThreadTriggerClass", "\320\241 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\320\276\320\271 \320\277\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\216", 0));
        textBrowser->setHtml(QApplication::translate("simpleOrThreadTriggerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\262\320\265\320\272\321\202\320\276\321\200\320\276\320\262 S \320\270 R \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\320\276\320\271 \320\264\320\273\320\270\320\275\321\213  \320\275\320\265 \320\274\320\265\320\275\321\214\321\210\320\265 3</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270 \320\273\321\216\320\261\321\213\321\205 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\321\205 \320\262\320\262\320\276\320\264\320\260\321\205 \320\262\321\201\320\265\320\263\320\264\320\260 \320\277\320\265\321\200\320\262\321\213\320\274 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265\320\274 \320\261\321\203\320\264\320\265\320\274 \320\277\320\276\320\264\320\260\320\262\320\260\321\202\321\214\321\201\321\217 '1' '1', \321\207\321\202\320\276\320\261\321\213 \321\201\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\275\320\260 \320\262\321\213\321\205\320\276\320\264\320\260\321\205, \320\262 \320\277\321\200\320\276\321\202"
                        "\320\270\320\262\320\275\320\276\320\274 \321\201\320\273\321\203\321\207\320\260\320\265 \320\277\320\276\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213  \320\261\321\203\320\264\320\265\321\202 \320\275\320\265\320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\321\213\320\274<br /><br />\320\237\321\200\320\270\320\274\320\265\321\200 \320\262\320\262\320\276\320\264\320\260:<br />1100<br />0110</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class simpleOrThreadTriggerClass: public Ui_simpleOrThreadTriggerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEORTHREADTRIGGER_H
