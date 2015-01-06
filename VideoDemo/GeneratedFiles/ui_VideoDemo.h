/********************************************************************************
** Form generated from reading UI file 'VideoDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEODEMO_H
#define UI_VIDEODEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoDemoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VideoDemoClass)
    {
        if (VideoDemoClass->objectName().isEmpty())
            VideoDemoClass->setObjectName(QStringLiteral("VideoDemoClass"));
        VideoDemoClass->resize(215, 235);
        centralWidget = new QWidget(VideoDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        VideoDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VideoDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 215, 21));
        VideoDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VideoDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VideoDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VideoDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VideoDemoClass->setStatusBar(statusBar);

        retranslateUi(VideoDemoClass);
        QObject::connect(pushButton, SIGNAL(clicked()), VideoDemoClass, SLOT(clickShow()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), VideoDemoClass, SLOT(clickHide()));

        QMetaObject::connectSlotsByName(VideoDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *VideoDemoClass)
    {
        VideoDemoClass->setWindowTitle(QApplication::translate("VideoDemoClass", "VideoDemo", 0));
        pushButton->setText(QApplication::translate("VideoDemoClass", "show", 0));
        pushButton_2->setText(QApplication::translate("VideoDemoClass", "hide", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoDemoClass: public Ui_VideoDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEODEMO_H
