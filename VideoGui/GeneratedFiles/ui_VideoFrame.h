/********************************************************************************
** Form generated from reading UI file 'VideoFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOFRAME_H
#define UI_VIDEOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *minimizePushButton;
    QPushButton *maximizePushButton;
    QPushButton *closePushButton;

    void setupUi(QWidget *VideoFrame)
    {
        if (VideoFrame->objectName().isEmpty())
            VideoFrame->setObjectName(QStringLiteral("VideoFrame"));
        VideoFrame->resize(742, 38);
        VideoFrame->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(VideoFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        minimizePushButton = new QPushButton(VideoFrame);
        minimizePushButton->setObjectName(QStringLiteral("minimizePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minimizePushButton->sizePolicy().hasHeightForWidth());
        minimizePushButton->setSizePolicy(sizePolicy);
        minimizePushButton->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\251.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\2511.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\2511.png);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Frame/Frame/\347\274\251\345\260\217.png"), QSize(), QIcon::Normal, QIcon::Off);
        minimizePushButton->setIcon(icon);

        horizontalLayout->addWidget(minimizePushButton);

        maximizePushButton = new QPushButton(VideoFrame);
        maximizePushButton->setObjectName(QStringLiteral("maximizePushButton"));
        sizePolicy.setHeightForWidth(maximizePushButton->sizePolicy().hasHeightForWidth());
        maximizePushButton->setSizePolicy(sizePolicy);
        maximizePushButton->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\251.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\2511.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\2511.png);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Frame/Frame/\346\224\276\345\244\247.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/Frame/Frame/\346\224\276\345\244\2471.png"), QSize(), QIcon::Normal, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/Frame/Frame/\346\224\276\345\244\2471.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/Frame/Frame/\346\224\276\345\244\2471.png"), QSize(), QIcon::Active, QIcon::On);
        icon1.addFile(QString::fromUtf8(":/Frame/Frame/\346\224\276\345\244\2471.png"), QSize(), QIcon::Selected, QIcon::On);
        maximizePushButton->setIcon(icon1);
        maximizePushButton->setCheckable(true);

        horizontalLayout->addWidget(maximizePushButton);

        closePushButton = new QPushButton(VideoFrame);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));
        sizePolicy.setHeightForWidth(closePushButton->sizePolicy().hasHeightForWidth());
        closePushButton->setSizePolicy(sizePolicy);
        closePushButton->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\251.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\2511.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	border-image: url(:/Frame/Frame/\351\200\211\346\213\2511.png);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Frame/Frame/\345\205\263\351\227\255.png"), QSize(), QIcon::Normal, QIcon::Off);
        closePushButton->setIcon(icon2);

        horizontalLayout->addWidget(closePushButton);

        horizontalLayout->setStretch(0, 1);

        retranslateUi(VideoFrame);
        QObject::connect(minimizePushButton, SIGNAL(clicked()), VideoFrame, SLOT(minimize()));
        QObject::connect(maximizePushButton, SIGNAL(clicked()), VideoFrame, SLOT(maximize()));
        QObject::connect(closePushButton, SIGNAL(clicked()), VideoFrame, SLOT(quit()));

        QMetaObject::connectSlotsByName(VideoFrame);
    } // setupUi

    void retranslateUi(QWidget *VideoFrame)
    {
        VideoFrame->setWindowTitle(QApplication::translate("VideoFrame", "Form", 0));
        minimizePushButton->setText(QString());
        maximizePushButton->setText(QString());
        closePushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoFrame: public Ui_VideoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOFRAME_H
