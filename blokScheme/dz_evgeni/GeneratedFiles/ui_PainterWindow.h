/********************************************************************************
** Form generated from reading UI file 'PainterWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTERWINDOW_H
#define UI_PAINTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PainterWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PainterWindow)
    {
        if (PainterWindow->objectName().isEmpty())
            PainterWindow->setObjectName(QStringLiteral("PainterWindow"));
        PainterWindow->resize(1086, 574);
        verticalLayoutWidget = new QWidget(PainterWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(860, 10, 201, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PainterWindow);

        QMetaObject::connectSlotsByName(PainterWindow);
    } // setupUi

    void retranslateUi(QWidget *PainterWindow)
    {
        PainterWindow->setWindowTitle(QApplication::translate("PainterWindow", "PainterWindow", 0));
        label->setText(QApplication::translate("PainterWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205", 0));
        textBrowser->setHtml(QApplication::translate("PainterWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\237\321\200\320\270\320\274\320\265\321\200 \320\262\320\262\320\276\320\264\320\260 \320\264\320\273\321\217 \320\277\320\265\321\200\320\274\320\265\320\275\320\275\321\213\321\205 \320\220 \320\222 \320\241<br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">A=1 B=0 C=1</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("PainterWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", 0));
        pushButton_4->setText(QApplication::translate("PainterWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", 0));
        pushButton_3->setText(QApplication::translate("PainterWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("PainterWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class PainterWindow: public Ui_PainterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTERWINDOW_H
