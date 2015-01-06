/********************************************************************************
** Form generated from reading UI file 'VideoDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEODISPLAY_H
#define UI_VIDEODISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Emerging.h"

QT_BEGIN_NAMESPACE

class Ui_VideoDisplay
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *showWidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *controlStackedWidget;
    QWidget *PTZControllerWidget;
    QGridLayout *gridLayout;
    Gui::EmergingButton *leftupPushButton;
    Gui::EmergingButton *upPushButton;
    Gui::EmergingButton *rightupPushButton;
    Gui::EmergingButton *leftPushButton;
    Gui::EmergingButton *circlePushButton;
    Gui::EmergingButton *rightPushButton;
    Gui::EmergingButton *leftdownpushButton;
    Gui::EmergingButton *downPushButton;
    Gui::EmergingButton *rightdownPushButton;
    QWidget *playControllerWidget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    Gui::EmergingWidget *palyWidget;
    QGridLayout *gridLayout_2;
    QPushButton *tomorrowPushButton;
    QPushButton *playOrPausePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopPushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *lastPushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *yesterdayPushButton;
    QPushButton *nextPushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QSlider *todayHorizontalSlider;
    QWidget *panelWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *videoGroupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *realtimeVideoPushButton;
    QPushButton *historicVideoPushButton;
    QGroupBox *panelGroupBox;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *panelStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QWidget *panWidget;
    QGridLayout *gridLayout_3;
    QPushButton *leftupPushButton_2;
    QPushButton *upPushButton_2;
    QPushButton *rightupPushButton_2;
    QPushButton *leftPushButton_2;
    QPushButton *circlePushButton_2;
    QPushButton *rightPushButton_2;
    QPushButton *leftdownPushButton;
    QPushButton *downPushButton_2;
    QPushButton *rightdownPushButton_2;
    QWidget *speedWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *decreasePushButton;
    QSlider *speedHorizontalSlider;
    QPushButton *increasePushButton;
    QWidget *cameraWidget;
    QGridLayout *gridLayout_5;
    QPushButton *zoomInPushButton;
    QPushButton *focusFarPushButton;
    QPushButton *zoomOutPushButton;
    QLabel *tiltLabel;
    QPushButton *focusNearPushButton;
    QLabel *zoomLabel;
    QPushButton *irisClosePushButton;
    QLabel *apertureLabel;
    QPushButton *irisOpenPushButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QWidget *colourWidget;
    QGridLayout *gridLayout_4;
    QLabel *brightnessLabel;
    QSlider *brightnessHorizontalSlider;
    QLabel *hueLabel;
    QSlider *hueHorizontalSlider;
    QSlider *contrastHorizontalSlider;
    QSlider *saturationHorizontalSlider;
    QPushButton *defaultValuePushButton;
    QLabel *contrastLabel;
    QLabel *saturationLabel;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QCalendarWidget *calendarWidget;
    QWidget *durationWidget;
    QGridLayout *gridLayout_6;
    QLabel *fromLabel;
    QTimeEdit *fromTimeEdit;
    QLabel *toLabel;
    QTimeEdit *toTimeEdit;
    QWidget *resultWidget;
    QVBoxLayout *verticalLayout_7;
    QPushButton *searchPushButton;
    QListWidget *resultListWidget;

    void setupUi(QWidget *VideoDisplay)
    {
        if (VideoDisplay->objectName().isEmpty())
            VideoDisplay->setObjectName(QStringLiteral("VideoDisplay"));
        VideoDisplay->resize(888, 566);
        VideoDisplay->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(VideoDisplay);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        showWidget = new QWidget(VideoDisplay);
        showWidget->setObjectName(QStringLiteral("showWidget"));
        showWidget->setAutoFillBackground(false);
        showWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\345\261\217\345\271\225\345\260\272\345\257\270.png);"));
        verticalLayout_3 = new QVBoxLayout(showWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        controlStackedWidget = new QStackedWidget(showWidget);
        controlStackedWidget->setObjectName(QStringLiteral("controlStackedWidget"));
        controlStackedWidget->setAutoFillBackground(false);
        controlStackedWidget->setStyleSheet(QLatin1String("QStatckedWidget#controlStackedWidget{\n"
"	background-color:transparent;\n"
"}\n"
"\n"
""));
        PTZControllerWidget = new QWidget();
        PTZControllerWidget->setObjectName(QStringLiteral("PTZControllerWidget"));
        PTZControllerWidget->setEnabled(true);
        PTZControllerWidget->setAutoFillBackground(false);
        PTZControllerWidget->setStyleSheet(QLatin1String("QWidget#PTZControllerWidget{\n"
"	background-color:transparent;\n"
"}"));
        gridLayout = new QGridLayout(PTZControllerWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        leftupPushButton = new Gui::EmergingButton(PTZControllerWidget);
        leftupPushButton->setObjectName(QStringLiteral("leftupPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftupPushButton->sizePolicy().hasHeightForWidth());
        leftupPushButton->setSizePolicy(sizePolicy);
        leftupPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\267\246\344\270\212 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        leftupPushButton->setIcon(icon);
        leftupPushButton->setIconSize(QSize(50, 50));
        leftupPushButton->setFlat(true);

        gridLayout->addWidget(leftupPushButton, 0, 0, 1, 1);

        upPushButton = new Gui::EmergingButton(PTZControllerWidget);
        upPushButton->setObjectName(QStringLiteral("upPushButton"));
        sizePolicy.setHeightForWidth(upPushButton->sizePolicy().hasHeightForWidth());
        upPushButton->setSizePolicy(sizePolicy);
        upPushButton->setAutoFillBackground(false);
        upPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/PTZ/PTZ/\344\270\212 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        upPushButton->setIcon(icon1);
        upPushButton->setIconSize(QSize(50, 50));
        upPushButton->setFlat(true);

        gridLayout->addWidget(upPushButton, 0, 1, 1, 1);

        rightupPushButton = new Gui::EmergingButton(PTZControllerWidget);
        rightupPushButton->setObjectName(QStringLiteral("rightupPushButton"));
        sizePolicy.setHeightForWidth(rightupPushButton->sizePolicy().hasHeightForWidth());
        rightupPushButton->setSizePolicy(sizePolicy);
        rightupPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\217\263\344\270\212 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        rightupPushButton->setIcon(icon2);
        rightupPushButton->setIconSize(QSize(50, 50));
        rightupPushButton->setFlat(true);

        gridLayout->addWidget(rightupPushButton, 0, 2, 1, 1);

        leftPushButton = new Gui::EmergingButton(PTZControllerWidget);
        leftPushButton->setObjectName(QStringLiteral("leftPushButton"));
        sizePolicy.setHeightForWidth(leftPushButton->sizePolicy().hasHeightForWidth());
        leftPushButton->setSizePolicy(sizePolicy);
        leftPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\267\246 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        leftPushButton->setIcon(icon3);
        leftPushButton->setIconSize(QSize(50, 50));
        leftPushButton->setFlat(true);

        gridLayout->addWidget(leftPushButton, 1, 0, 1, 1);

        circlePushButton = new Gui::EmergingButton(PTZControllerWidget);
        circlePushButton->setObjectName(QStringLiteral("circlePushButton"));
        circlePushButton->setEnabled(false);
        sizePolicy.setHeightForWidth(circlePushButton->sizePolicy().hasHeightForWidth());
        circlePushButton->setSizePolicy(sizePolicy);
        circlePushButton->setCursor(QCursor(Qt::ArrowCursor));
        circlePushButton->setMouseTracking(false);
        circlePushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-image: url(:/PTZ/PTZ/123.png);\n"
"	background-color:transparent;\n"
"}\n"
""));
        circlePushButton->setIconSize(QSize(177, 158));
        circlePushButton->setCheckable(false);
        circlePushButton->setAutoDefault(false);
        circlePushButton->setDefault(false);
        circlePushButton->setFlat(true);

        gridLayout->addWidget(circlePushButton, 1, 1, 1, 1);

        rightPushButton = new Gui::EmergingButton(PTZControllerWidget);
        rightPushButton->setObjectName(QStringLiteral("rightPushButton"));
        sizePolicy.setHeightForWidth(rightPushButton->sizePolicy().hasHeightForWidth());
        rightPushButton->setSizePolicy(sizePolicy);
        rightPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\217\263 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        rightPushButton->setIcon(icon4);
        rightPushButton->setIconSize(QSize(50, 50));
        rightPushButton->setCheckable(false);
        rightPushButton->setFlat(true);

        gridLayout->addWidget(rightPushButton, 1, 2, 1, 1);

        leftdownpushButton = new Gui::EmergingButton(PTZControllerWidget);
        leftdownpushButton->setObjectName(QStringLiteral("leftdownpushButton"));
        sizePolicy.setHeightForWidth(leftdownpushButton->sizePolicy().hasHeightForWidth());
        leftdownpushButton->setSizePolicy(sizePolicy);
        leftdownpushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\267\246\344\270\213 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        leftdownpushButton->setIcon(icon5);
        leftdownpushButton->setIconSize(QSize(50, 50));
        leftdownpushButton->setFlat(true);

        gridLayout->addWidget(leftdownpushButton, 2, 0, 1, 1);

        downPushButton = new Gui::EmergingButton(PTZControllerWidget);
        downPushButton->setObjectName(QStringLiteral("downPushButton"));
        sizePolicy.setHeightForWidth(downPushButton->sizePolicy().hasHeightForWidth());
        downPushButton->setSizePolicy(sizePolicy);
        downPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/PTZ/PTZ/\344\270\213 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        downPushButton->setIcon(icon6);
        downPushButton->setIconSize(QSize(50, 50));
        downPushButton->setAutoDefault(false);
        downPushButton->setFlat(true);

        gridLayout->addWidget(downPushButton, 2, 1, 1, 1);

        rightdownPushButton = new Gui::EmergingButton(PTZControllerWidget);
        rightdownPushButton->setObjectName(QStringLiteral("rightdownPushButton"));
        sizePolicy.setHeightForWidth(rightdownPushButton->sizePolicy().hasHeightForWidth());
        rightdownPushButton->setSizePolicy(sizePolicy);
        rightdownPushButton->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\217\263\344\270\213 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        rightdownPushButton->setIcon(icon7);
        rightdownPushButton->setIconSize(QSize(50, 50));
        rightdownPushButton->setFlat(true);

        gridLayout->addWidget(rightdownPushButton, 2, 2, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(2, 1);
        controlStackedWidget->addWidget(PTZControllerWidget);
        playControllerWidget = new QWidget();
        playControllerWidget->setObjectName(QStringLiteral("playControllerWidget"));
        verticalLayout_5 = new QVBoxLayout(playControllerWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 212, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        palyWidget = new Gui::EmergingWidget(playControllerWidget);
        palyWidget->setObjectName(QStringLiteral("palyWidget"));
        gridLayout_2 = new QGridLayout(palyWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tomorrowPushButton = new QPushButton(palyWidget);
        tomorrowPushButton->setObjectName(QStringLiteral("tomorrowPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tomorrowPushButton->sizePolicy().hasHeightForWidth());
        tomorrowPushButton->setSizePolicy(sizePolicy1);
        tomorrowPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 5px;\n"
"	border-image: url(:/PlayController/PlayController/\345\267\246\347\247\2731.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/PlayController/PlayController/\345\267\246\347\247\2732.png);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/PlayController/PlayController/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tomorrowPushButton->setIcon(icon8);

        gridLayout_2->addWidget(tomorrowPushButton, 1, 10, 1, 1);

        playOrPausePushButton = new QPushButton(palyWidget);
        playOrPausePushButton->setObjectName(QStringLiteral("playOrPausePushButton"));
        sizePolicy.setHeightForWidth(playOrPausePushButton->sizePolicy().hasHeightForWidth());
        playOrPausePushButton->setSizePolicy(sizePolicy);
        playOrPausePushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 10px;\n"
"	border-image: url(:/PlayController/PlayController/\345\201\234\346\255\2421.png);\n"
"}\n"
"\n"
"QPushButton: pressed{\n"
"	border-image: url(:/PlayController/PlayController/\345\201\234\346\255\2422.png);\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/PlayController/PlayController/\346\222\255\346\224\276.png"), QSize(), QIcon::Normal, QIcon::Off);
        playOrPausePushButton->setIcon(icon9);

        gridLayout_2->addWidget(playOrPausePushButton, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        stopPushButton = new QPushButton(palyWidget);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));
        sizePolicy.setHeightForWidth(stopPushButton->sizePolicy().hasHeightForWidth());
        stopPushButton->setSizePolicy(sizePolicy);
        stopPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 10px;\n"
"	border-image: url(:/PlayController/PlayController/\345\201\234\346\255\2421.png);\n"
"}\n"
"\n"
"QPushButton: pressed{\n"
"	border-image: url(:/PlayController/PlayController/\345\201\234\346\255\2422.png);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/PlayController/PlayController/\345\201\234\346\255\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPushButton->setIcon(icon10);

        gridLayout_2->addWidget(stopPushButton, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        lastPushButton = new QPushButton(palyWidget);
        lastPushButton->setObjectName(QStringLiteral("lastPushButton"));
        sizePolicy.setHeightForWidth(lastPushButton->sizePolicy().hasHeightForWidth());
        lastPushButton->setSizePolicy(sizePolicy);
        lastPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 10px;\n"
"	border-image: url(:/PlayController/PlayController/\345\277\253\350\277\2331.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/PlayController/PlayController/\345\277\253\350\277\2332.png);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/PlayController/PlayController/\345\277\253\350\277\233.png"), QSize(), QIcon::Normal, QIcon::Off);
        lastPushButton->setIcon(icon11);

        gridLayout_2->addWidget(lastPushButton, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 10, 1, 1);

        yesterdayPushButton = new QPushButton(palyWidget);
        yesterdayPushButton->setObjectName(QStringLiteral("yesterdayPushButton"));
        yesterdayPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 5px;\n"
"	border-image: url(:/PlayController/PlayController/\345\267\246\347\247\2731.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/PlayController/PlayController/\345\267\246\347\247\2732.png);\n"
"}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/PlayController/PlayController/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        yesterdayPushButton->setIcon(icon12);

        gridLayout_2->addWidget(yesterdayPushButton, 1, 0, 1, 1);

        nextPushButton = new QPushButton(palyWidget);
        nextPushButton->setObjectName(QStringLiteral("nextPushButton"));
        sizePolicy.setHeightForWidth(nextPushButton->sizePolicy().hasHeightForWidth());
        nextPushButton->setSizePolicy(sizePolicy);
        nextPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 10px;\n"
"	border-image: url(:/PlayController/PlayController/\345\277\253\350\277\2331.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/PlayController/PlayController/\345\277\253\350\277\2332.png);\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/PlayController/PlayController/\345\277\253\351\200\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextPushButton->setIcon(icon13);

        gridLayout_2->addWidget(nextPushButton, 0, 8, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 7, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 0, 9, 1, 1);

        todayHorizontalSlider = new QSlider(palyWidget);
        todayHorizontalSlider->setObjectName(QStringLiteral("todayHorizontalSlider"));
        todayHorizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"	border-image: url(:/PlayController/PlayController/\351\200\211\346\213\251.png);\n"
" }\n"
"\n"
" QSlider::handle:pressed {\n"
"	\n"
"	border-image: url(:/PlayController/PlayController/\351\200\211\346\213\251.png);\n"
" }"));
        todayHorizontalSlider->setMaximum(24);
        todayHorizontalSlider->setOrientation(Qt::Horizontal);
        todayHorizontalSlider->setTickPosition(QSlider::TicksAbove);
        todayHorizontalSlider->setTickInterval(0);

        gridLayout_2->addWidget(todayHorizontalSlider, 1, 1, 1, 9);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(3, 2);
        gridLayout_2->setColumnStretch(4, 1);
        gridLayout_2->setColumnStretch(5, 2);
        gridLayout_2->setColumnStretch(6, 1);
        gridLayout_2->setColumnStretch(7, 2);
        gridLayout_2->setColumnStretch(8, 1);
        gridLayout_2->setColumnStretch(9, 2);
        gridLayout_2->setColumnStretch(10, 1);

        verticalLayout_5->addWidget(palyWidget);

        verticalLayout_5->setStretch(0, 1);
        controlStackedWidget->addWidget(playControllerWidget);

        verticalLayout_3->addWidget(controlStackedWidget);


        horizontalLayout->addWidget(showWidget);

        panelWidget = new QWidget(VideoDisplay);
        panelWidget->setObjectName(QStringLiteral("panelWidget"));
        sizePolicy.setHeightForWidth(panelWidget->sizePolicy().hasHeightForWidth());
        panelWidget->setSizePolicy(sizePolicy);
        panelWidget->setStyleSheet(QStringLiteral("border-image: url(:/Backgroud/Backgroud/di2.png);"));
        verticalLayout_2 = new QVBoxLayout(panelWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        videoGroupBox = new QGroupBox(panelWidget);
        videoGroupBox->setObjectName(QStringLiteral("videoGroupBox"));
        videoGroupBox->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\345\272\225\346\235\277.png);"));
        verticalLayout = new QVBoxLayout(videoGroupBox);
        verticalLayout->setSpacing(9);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(16, 9, 16, 9);
        realtimeVideoPushButton = new QPushButton(videoGroupBox);
        realtimeVideoPushButton->setObjectName(QStringLiteral("realtimeVideoPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(realtimeVideoPushButton->sizePolicy().hasHeightForWidth());
        realtimeVideoPushButton->setSizePolicy(sizePolicy2);
        realtimeVideoPushButton->setAutoFillBackground(false);
        realtimeVideoPushButton->setStyleSheet(QLatin1String("QPushButton{	\n"
"	border-image: url(:/Button/Button/2.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/1.png);\n"
"}"));

        verticalLayout->addWidget(realtimeVideoPushButton);

        historicVideoPushButton = new QPushButton(videoGroupBox);
        historicVideoPushButton->setObjectName(QStringLiteral("historicVideoPushButton"));
        sizePolicy2.setHeightForWidth(historicVideoPushButton->sizePolicy().hasHeightForWidth());
        historicVideoPushButton->setSizePolicy(sizePolicy2);
        historicVideoPushButton->setStyleSheet(QLatin1String("QPushButton{	\n"
"	border-image: url(:/Button/Button/2.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/1.png);\n"
"}"));

        verticalLayout->addWidget(historicVideoPushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addWidget(videoGroupBox);

        panelGroupBox = new QGroupBox(panelWidget);
        panelGroupBox->setObjectName(QStringLiteral("panelGroupBox"));
        verticalLayout_4 = new QVBoxLayout(panelGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        panelStackedWidget = new QStackedWidget(panelGroupBox);
        panelStackedWidget->setObjectName(QStringLiteral("panelStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        panWidget = new QWidget(page);
        panWidget->setObjectName(QStringLiteral("panWidget"));
        panWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\346\216\247\344\273\266\345\272\225\346\235\277.png);"));
        gridLayout_3 = new QGridLayout(panWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 9, 0, 9);
        leftupPushButton_2 = new QPushButton(panWidget);
        leftupPushButton_2->setObjectName(QStringLiteral("leftupPushButton_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leftupPushButton_2->sizePolicy().hasHeightForWidth());
        leftupPushButton_2->setSizePolicy(sizePolicy3);
        leftupPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\267\246\344\270\212.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftupPushButton_2->setIcon(icon14);
        leftupPushButton_2->setFlat(false);

        gridLayout_3->addWidget(leftupPushButton_2, 0, 0, 1, 1);

        upPushButton_2 = new QPushButton(panWidget);
        upPushButton_2->setObjectName(QStringLiteral("upPushButton_2"));
        sizePolicy3.setHeightForWidth(upPushButton_2->sizePolicy().hasHeightForWidth());
        upPushButton_2->setSizePolicy(sizePolicy3);
        upPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/PTZ/PTZ/\344\270\212.png"), QSize(), QIcon::Normal, QIcon::Off);
        upPushButton_2->setIcon(icon15);

        gridLayout_3->addWidget(upPushButton_2, 0, 1, 1, 1);

        rightupPushButton_2 = new QPushButton(panWidget);
        rightupPushButton_2->setObjectName(QStringLiteral("rightupPushButton_2"));
        sizePolicy3.setHeightForWidth(rightupPushButton_2->sizePolicy().hasHeightForWidth());
        rightupPushButton_2->setSizePolicy(sizePolicy3);
        rightupPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\217\263\344\270\212.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightupPushButton_2->setIcon(icon16);

        gridLayout_3->addWidget(rightupPushButton_2, 0, 2, 1, 1);

        leftPushButton_2 = new QPushButton(panWidget);
        leftPushButton_2->setObjectName(QStringLiteral("leftPushButton_2"));
        sizePolicy3.setHeightForWidth(leftPushButton_2->sizePolicy().hasHeightForWidth());
        leftPushButton_2->setSizePolicy(sizePolicy3);
        leftPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\267\246.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftPushButton_2->setIcon(icon17);

        gridLayout_3->addWidget(leftPushButton_2, 1, 0, 1, 1);

        circlePushButton_2 = new QPushButton(panWidget);
        circlePushButton_2->setObjectName(QStringLiteral("circlePushButton_2"));
        sizePolicy3.setHeightForWidth(circlePushButton_2->sizePolicy().hasHeightForWidth());
        circlePushButton_2->setSizePolicy(sizePolicy3);
        circlePushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\210\267\346\226\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        circlePushButton_2->setIcon(icon18);

        gridLayout_3->addWidget(circlePushButton_2, 1, 1, 1, 1);

        rightPushButton_2 = new QPushButton(panWidget);
        rightPushButton_2->setObjectName(QStringLiteral("rightPushButton_2"));
        sizePolicy3.setHeightForWidth(rightPushButton_2->sizePolicy().hasHeightForWidth());
        rightPushButton_2->setSizePolicy(sizePolicy3);
        rightPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\217\263.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightPushButton_2->setIcon(icon19);

        gridLayout_3->addWidget(rightPushButton_2, 1, 2, 1, 1);

        leftdownPushButton = new QPushButton(panWidget);
        leftdownPushButton->setObjectName(QStringLiteral("leftdownPushButton"));
        sizePolicy3.setHeightForWidth(leftdownPushButton->sizePolicy().hasHeightForWidth());
        leftdownPushButton->setSizePolicy(sizePolicy3);
        leftdownPushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\267\246\344\270\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftdownPushButton->setIcon(icon20);

        gridLayout_3->addWidget(leftdownPushButton, 2, 0, 1, 1);

        downPushButton_2 = new QPushButton(panWidget);
        downPushButton_2->setObjectName(QStringLiteral("downPushButton_2"));
        sizePolicy3.setHeightForWidth(downPushButton_2->sizePolicy().hasHeightForWidth());
        downPushButton_2->setSizePolicy(sizePolicy3);
        downPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/PTZ/PTZ/\344\270\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        downPushButton_2->setIcon(icon21);

        gridLayout_3->addWidget(downPushButton_2, 2, 1, 1, 1);

        rightdownPushButton_2 = new QPushButton(panWidget);
        rightdownPushButton_2->setObjectName(QStringLiteral("rightdownPushButton_2"));
        sizePolicy3.setHeightForWidth(rightdownPushButton_2->sizePolicy().hasHeightForWidth());
        rightdownPushButton_2->setSizePolicy(sizePolicy3);
        rightdownPushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/PTZ/PTZ/\345\217\263\344\270\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightdownPushButton_2->setIcon(icon22);

        gridLayout_3->addWidget(rightdownPushButton_2, 2, 2, 1, 1);


        verticalLayout_6->addWidget(panWidget);

        speedWidget = new QWidget(page);
        speedWidget->setObjectName(QStringLiteral("speedWidget"));
        speedWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\345\272\225\357\274\201.png);"));
        horizontalLayout_2 = new QHBoxLayout(speedWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        decreasePushButton = new QPushButton(speedWidget);
        decreasePushButton->setObjectName(QStringLiteral("decreasePushButton"));
        sizePolicy2.setHeightForWidth(decreasePushButton->sizePolicy().hasHeightForWidth());
        decreasePushButton->setSizePolicy(sizePolicy2);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/PTZ/PTZ/-hao.png"), QSize(), QIcon::Normal, QIcon::Off);
        decreasePushButton->setIcon(icon23);

        horizontalLayout_2->addWidget(decreasePushButton);

        speedHorizontalSlider = new QSlider(speedWidget);
        speedHorizontalSlider->setObjectName(QStringLiteral("speedHorizontalSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(speedHorizontalSlider->sizePolicy().hasHeightForWidth());
        speedHorizontalSlider->setSizePolicy(sizePolicy4);
        speedHorizontalSlider->setStyleSheet(QString::fromUtf8("QSlider{\n"
"	border-image: url(:/Backgroud/Backgroud/\345\272\225\357\274\201.png);\n"
"}\n"
"QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"	 height: 3px; /* the groove expands to the size of the 		 slider by default. by giving it a height, it has a 		 fixed size */\n"
"     background: white;\n"
" }\n"
" \n"
" QSlider::handle:horizontal {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\250.png);\n"
"     width: 10px;\n"
"     margin: -5px 0;\n"
" }\n"
"\n"
" QSlider::handle:pressed {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\2502.png);\n"
" }\n"
"\n"
" QSlider::add-page:horizontal {\n"
"     background: rgb(223, 220, 245);\n"
" }\n"
" \n"
" QSlider::sub-page:horizontal {\n"
"     background: rgb(107, 147, 255);\n"
" }"));
        speedHorizontalSlider->setMaximum(10);
        speedHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(speedHorizontalSlider);

        increasePushButton = new QPushButton(speedWidget);
        increasePushButton->setObjectName(QStringLiteral("increasePushButton"));
        sizePolicy2.setHeightForWidth(increasePushButton->sizePolicy().hasHeightForWidth());
        increasePushButton->setSizePolicy(sizePolicy2);
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/PTZ/PTZ/+hao.png"), QSize(), QIcon::Normal, QIcon::Off);
        increasePushButton->setIcon(icon24);

        horizontalLayout_2->addWidget(increasePushButton);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_6->addWidget(speedWidget);

        cameraWidget = new QWidget(page);
        cameraWidget->setObjectName(QStringLiteral("cameraWidget"));
        cameraWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\346\216\247\344\273\266\345\272\225\346\235\277.png);"));
        gridLayout_5 = new QGridLayout(cameraWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 9, 0, 9);
        zoomInPushButton = new QPushButton(cameraWidget);
        zoomInPushButton->setObjectName(QStringLiteral("zoomInPushButton"));
        sizePolicy3.setHeightForWidth(zoomInPushButton->sizePolicy().hasHeightForWidth());
        zoomInPushButton->setSizePolicy(sizePolicy3);
        zoomInPushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/PTZ/PTZ/+.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomInPushButton->setIcon(icon25);

        gridLayout_5->addWidget(zoomInPushButton, 0, 5, 1, 1);

        focusFarPushButton = new QPushButton(cameraWidget);
        focusFarPushButton->setObjectName(QStringLiteral("focusFarPushButton"));
        focusFarPushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/PTZ/PTZ/-.png"), QSize(), QIcon::Normal, QIcon::Off);
        focusFarPushButton->setIcon(icon26);

        gridLayout_5->addWidget(focusFarPushButton, 1, 1, 1, 1);

        zoomOutPushButton = new QPushButton(cameraWidget);
        zoomOutPushButton->setObjectName(QStringLiteral("zoomOutPushButton"));
        sizePolicy3.setHeightForWidth(zoomOutPushButton->sizePolicy().hasHeightForWidth());
        zoomOutPushButton->setSizePolicy(sizePolicy3);
        zoomOutPushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        zoomOutPushButton->setIcon(icon26);

        gridLayout_5->addWidget(zoomOutPushButton, 0, 1, 1, 1);

        tiltLabel = new QLabel(cameraWidget);
        tiltLabel->setObjectName(QStringLiteral("tiltLabel"));
        tiltLabel->setPixmap(QPixmap(QString::fromUtf8(":/PTZ/PTZ/\346\224\276\345\244\247\351\225\234.png")));
        tiltLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(tiltLabel, 0, 3, 1, 1);

        focusNearPushButton = new QPushButton(cameraWidget);
        focusNearPushButton->setObjectName(QStringLiteral("focusNearPushButton"));
        focusNearPushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        focusNearPushButton->setIcon(icon25);

        gridLayout_5->addWidget(focusNearPushButton, 1, 5, 1, 1);

        zoomLabel = new QLabel(cameraWidget);
        zoomLabel->setObjectName(QStringLiteral("zoomLabel"));
        zoomLabel->setPixmap(QPixmap(QString::fromUtf8(":/PTZ/PTZ/\345\261\261.png")));
        zoomLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(zoomLabel, 1, 3, 1, 1);

        irisClosePushButton = new QPushButton(cameraWidget);
        irisClosePushButton->setObjectName(QStringLiteral("irisClosePushButton"));
        irisClosePushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        irisClosePushButton->setIcon(icon26);

        gridLayout_5->addWidget(irisClosePushButton, 2, 1, 1, 1);

        apertureLabel = new QLabel(cameraWidget);
        apertureLabel->setObjectName(QStringLiteral("apertureLabel"));
        apertureLabel->setPixmap(QPixmap(QString::fromUtf8(":/PTZ/PTZ/\350\212\261.png")));
        apertureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(apertureLabel, 2, 3, 1, 1);

        irisOpenPushButton = new QPushButton(cameraWidget);
        irisOpenPushButton->setObjectName(QStringLiteral("irisOpenPushButton"));
        irisOpenPushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"     border-image: url(:/Button/Button/2.png);\n"
"	 height: 30px;\n"
"	 width: 40px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}\n"
""));
        irisOpenPushButton->setIcon(icon25);

        gridLayout_5->addWidget(irisOpenPushButton, 2, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 6, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 0, 4, 1, 1);


        verticalLayout_6->addWidget(cameraWidget);

        colourWidget = new QWidget(page);
        colourWidget->setObjectName(QStringLiteral("colourWidget"));
        colourWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\345\272\225\357\274\201.png);"));
        gridLayout_4 = new QGridLayout(colourWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        brightnessLabel = new QLabel(colourWidget);
        brightnessLabel->setObjectName(QStringLiteral("brightnessLabel"));
        brightnessLabel->setAutoFillBackground(false);
        brightnessLabel->setPixmap(QPixmap(QString::fromUtf8(":/ColourSpace/ColorSpace/icon.png")));
        brightnessLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(brightnessLabel, 0, 0, 1, 1);

        brightnessHorizontalSlider = new QSlider(colourWidget);
        brightnessHorizontalSlider->setObjectName(QStringLiteral("brightnessHorizontalSlider"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(brightnessHorizontalSlider->sizePolicy().hasHeightForWidth());
        brightnessHorizontalSlider->setSizePolicy(sizePolicy5);
        brightnessHorizontalSlider->setStyleSheet(QString::fromUtf8("QSlider{\n"
"	border-image: url(:/Backgroud/Backgroud/\345\272\225\357\274\201.png);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"	 height: 3px; /* the groove expands to the size of the 		 slider by default. by giving it a height, it has a 		 fixed size */\n"
"     background: white;\n"
" }\n"
" \n"
" QSlider::handle:horizontal {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\250.png);\n"
"     width: 10px;\n"
"     margin: -5px 0;\n"
" }\n"
"\n"
" QSlider::handle:pressed {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\2502.png);\n"
" }\n"
"\n"
" QSlider::add-page:horizontal {\n"
"     background: rgb(223, 220, 245);\n"
" }\n"
" \n"
" QSlider::sub-page:horizontal {\n"
"     background: rgb(107, 147, 255);\n"
" }"));
        brightnessHorizontalSlider->setMinimum(-255);
        brightnessHorizontalSlider->setMaximum(255);
        brightnessHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(brightnessHorizontalSlider, 0, 1, 1, 1);

        hueLabel = new QLabel(colourWidget);
        hueLabel->setObjectName(QStringLiteral("hueLabel"));
        hueLabel->setFrameShape(QFrame::NoFrame);
        hueLabel->setFrameShadow(QFrame::Plain);
        hueLabel->setPixmap(QPixmap(QString::fromUtf8(":/ColourSpace/ColorSpace/icon.png")));
        hueLabel->setScaledContents(false);

        gridLayout_4->addWidget(hueLabel, 1, 0, 1, 1);

        hueHorizontalSlider = new QSlider(colourWidget);
        hueHorizontalSlider->setObjectName(QStringLiteral("hueHorizontalSlider"));
        hueHorizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"	 height: 3px; /* the groove expands to the size of the 		 slider by default. by giving it a height, it has a 		 fixed size */\n"
"     background: white;\n"
" }\n"
" \n"
" QSlider::handle:horizontal {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\250.png);\n"
"     width: 10px;\n"
"     margin: -5px 0;\n"
" }\n"
"\n"
" QSlider::handle:pressed {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\2502.png);\n"
" }\n"
"\n"
" QSlider::add-page:horizontal {\n"
"     background: rgb(223, 220, 245);\n"
" }\n"
" \n"
" QSlider::sub-page:horizontal {\n"
"     background: rgb(107, 147, 255);\n"
" }"));
        hueHorizontalSlider->setMinimum(-255);
        hueHorizontalSlider->setMaximum(255);
        hueHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(hueHorizontalSlider, 1, 1, 1, 1);

        contrastHorizontalSlider = new QSlider(colourWidget);
        contrastHorizontalSlider->setObjectName(QStringLiteral("contrastHorizontalSlider"));
        contrastHorizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"	 height: 3px; /* the groove expands to the size of the 		 slider by default. by giving it a height, it has a 		 fixed size */\n"
"     background: white;\n"
" }\n"
" \n"
" QSlider::handle:horizontal {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\250.png);\n"
"     width: 10px;\n"
"     margin: -5px 0;\n"
" }\n"
"\n"
" QSlider::handle:pressed {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\2502.png);\n"
" }\n"
"\n"
" QSlider::add-page:horizontal {\n"
"     background: rgb(223, 220, 245);\n"
" }\n"
" \n"
" QSlider::sub-page:horizontal {\n"
"     background: rgb(107, 147, 255);\n"
" }"));
        contrastHorizontalSlider->setMinimum(-255);
        contrastHorizontalSlider->setMaximum(255);
        contrastHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(contrastHorizontalSlider, 2, 1, 1, 1);

        saturationHorizontalSlider = new QSlider(colourWidget);
        saturationHorizontalSlider->setObjectName(QStringLiteral("saturationHorizontalSlider"));
        saturationHorizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"	 height: 3px; /* the groove expands to the size of the 		 slider by default. by giving it a height, it has a 		 fixed size */\n"
"     background: white;\n"
" }\n"
" \n"
" QSlider::handle:horizontal {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\250.png);\n"
"     width: 10px;\n"
"     margin: -5px 0;\n"
" }\n"
"\n"
" QSlider::handle:pressed {\n"
"	border-image: url(:/PTZ/PTZ/\346\273\221\345\212\2502.png);\n"
" }\n"
"\n"
" QSlider::add-page:horizontal {\n"
"     background: rgb(223, 220, 245);\n"
" }\n"
" \n"
" QSlider::sub-page:horizontal {\n"
"     background: rgb(107, 147, 255);\n"
" }"));
        saturationHorizontalSlider->setMinimum(-255);
        saturationHorizontalSlider->setMaximum(255);
        saturationHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(saturationHorizontalSlider, 3, 1, 1, 1);

        defaultValuePushButton = new QPushButton(colourWidget);
        defaultValuePushButton->setObjectName(QStringLiteral("defaultValuePushButton"));
        sizePolicy.setHeightForWidth(defaultValuePushButton->sizePolicy().hasHeightForWidth());
        defaultValuePushButton->setSizePolicy(sizePolicy);
        defaultValuePushButton->setStyleSheet(QLatin1String("QPushButton{	\n"
"    border: 10px;\n"
"	border-image: url(:/Button/Button/2.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}"));

        gridLayout_4->addWidget(defaultValuePushButton, 4, 0, 1, 2);

        contrastLabel = new QLabel(colourWidget);
        contrastLabel->setObjectName(QStringLiteral("contrastLabel"));
        contrastLabel->setPixmap(QPixmap(QString::fromUtf8(":/ColourSpace/ColorSpace/icon.png")));

        gridLayout_4->addWidget(contrastLabel, 2, 0, 1, 1);

        saturationLabel = new QLabel(colourWidget);
        saturationLabel->setObjectName(QStringLiteral("saturationLabel"));
        saturationLabel->setPixmap(QPixmap(QString::fromUtf8(":/ColourSpace/ColorSpace/icon.png")));

        gridLayout_4->addWidget(saturationLabel, 3, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 2);
        gridLayout_4->setRowStretch(1, 2);
        gridLayout_4->setRowStretch(2, 2);
        gridLayout_4->setRowStretch(3, 2);
        gridLayout_4->setRowStretch(4, 1);

        verticalLayout_6->addWidget(colourWidget);

        verticalLayout_6->setStretch(0, 3);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 3);
        verticalLayout_6->setStretch(3, 3);
        panelStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        calendarWidget = new QCalendarWidget(page_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setLayoutDirection(Qt::LeftToRight);
        calendarWidget->setAutoFillBackground(false);
        calendarWidget->setStyleSheet(QLatin1String("selection-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(38, 116, 0);\n"
"alternate-background-color: rgb(134, 134, 134);"));
        calendarWidget->setGridVisible(false);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);

        verticalLayout_8->addWidget(calendarWidget);

        durationWidget = new QWidget(page_2);
        durationWidget->setObjectName(QStringLiteral("durationWidget"));
        durationWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Calendar/Calendar/\346\227\245\346\234\237\345\272\225\346\241\206.png);"));
        gridLayout_6 = new QGridLayout(durationWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(9);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        fromLabel = new QLabel(durationWidget);
        fromLabel->setObjectName(QStringLiteral("fromLabel"));
        fromLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(fromLabel, 0, 0, 1, 1);

        fromTimeEdit = new QTimeEdit(durationWidget);
        fromTimeEdit->setObjectName(QStringLiteral("fromTimeEdit"));
        fromTimeEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/Calendar/Calendar/\346\227\245\345\216\206\345\272\225\346\241\206\346\226\207\345\255\227\345\214\272.png);"));
        fromTimeEdit->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(fromTimeEdit, 0, 1, 1, 1);

        toLabel = new QLabel(durationWidget);
        toLabel->setObjectName(QStringLiteral("toLabel"));
        toLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(toLabel, 1, 0, 1, 1);

        toTimeEdit = new QTimeEdit(durationWidget);
        toTimeEdit->setObjectName(QStringLiteral("toTimeEdit"));
        toTimeEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/Calendar/Calendar/\346\227\245\345\216\206\345\272\225\346\241\206\346\226\207\345\255\227\345\214\272.png);"));
        toTimeEdit->setAlignment(Qt::AlignCenter);
        toTimeEdit->setTime(QTime(23, 59, 59));

        gridLayout_6->addWidget(toTimeEdit, 1, 1, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 3);

        verticalLayout_8->addWidget(durationWidget);

        resultWidget = new QWidget(page_2);
        resultWidget->setObjectName(QStringLiteral("resultWidget"));
        verticalLayout_7 = new QVBoxLayout(resultWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        searchPushButton = new QPushButton(resultWidget);
        searchPushButton->setObjectName(QStringLiteral("searchPushButton"));
        sizePolicy2.setHeightForWidth(searchPushButton->sizePolicy().hasHeightForWidth());
        searchPushButton->setSizePolicy(sizePolicy2);
        searchPushButton->setStyleSheet(QLatin1String("QPushButton{	\n"
"	border-image: url(:/Button/Button/2.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-image: url(:/Button/Button/3.png);\n"
"}"));

        verticalLayout_7->addWidget(searchPushButton);

        resultListWidget = new QListWidget(resultWidget);
        resultListWidget->setObjectName(QStringLiteral("resultListWidget"));
        resultListWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\346\237\245\350\257\242\347\273\223\346\236\234\345\272\225\346\235\277.png);"));

        verticalLayout_7->addWidget(resultListWidget);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 8);

        verticalLayout_8->addWidget(resultWidget);

        verticalLayout_8->setStretch(0, 8);
        verticalLayout_8->setStretch(1, 2);
        verticalLayout_8->setStretch(2, 10);
        panelStackedWidget->addWidget(page_2);

        verticalLayout_4->addWidget(panelStackedWidget);


        verticalLayout_2->addWidget(panelGroupBox);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        horizontalLayout->addWidget(panelWidget);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(VideoDisplay);
        QObject::connect(realtimeVideoPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(changeToRealtime()));
        QObject::connect(historicVideoPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(changeToHistoric()));
        QObject::connect(playOrPausePushButton, SIGNAL(clicked()), VideoDisplay, SLOT(playOrPause()));
        QObject::connect(leftPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(leftEnd()));
        QObject::connect(rightPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(rightBegin()));
        QObject::connect(downPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(downBegin()));
        QObject::connect(upPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(upBegin()));
        QObject::connect(leftupPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(leftupBegin()));
        QObject::connect(leftdownPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(leftdownBegin()));
        QObject::connect(rightupPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(rightupBegin()));
        QObject::connect(rightdownPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(rightdownBegin()));
        QObject::connect(leftPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(leftBegin()));
        QObject::connect(rightPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(rightBegin()));
        QObject::connect(upPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(upBegin()));
        QObject::connect(downPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(downBegin()));
        QObject::connect(leftupPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(leftupBegin()));
        QObject::connect(leftdownpushButton, SIGNAL(pressed()), VideoDisplay, SLOT(leftdownBegin()));
        QObject::connect(rightupPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(rightupBegin()));
        QObject::connect(rightdownPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(rightdownBegin()));
        QObject::connect(leftPushButton_2, SIGNAL(pressed()), VideoDisplay, SLOT(leftBegin()));
        QObject::connect(leftupPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(leftupEnd()));
        QObject::connect(leftdownPushButton, SIGNAL(released()), VideoDisplay, SLOT(leftdownEnd()));
        QObject::connect(downPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(downEnd()));
        QObject::connect(upPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(upEnd()));
        QObject::connect(rightPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(rightEnd()));
        QObject::connect(rightdownPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(rightdownEnd()));
        QObject::connect(rightupPushButton_2, SIGNAL(released()), VideoDisplay, SLOT(rightupEnd()));
        QObject::connect(leftupPushButton, SIGNAL(released()), VideoDisplay, SLOT(leftupEnd()));
        QObject::connect(leftPushButton, SIGNAL(released()), VideoDisplay, SLOT(leftEnd()));
        QObject::connect(leftdownpushButton, SIGNAL(released()), VideoDisplay, SLOT(leftdownEnd()));
        QObject::connect(upPushButton, SIGNAL(released()), VideoDisplay, SLOT(upEnd()));
        QObject::connect(downPushButton, SIGNAL(released()), VideoDisplay, SLOT(downEnd()));
        QObject::connect(rightupPushButton, SIGNAL(released()), VideoDisplay, SLOT(rightupEnd()));
        QObject::connect(rightPushButton, SIGNAL(released()), VideoDisplay, SLOT(rightEnd()));
        QObject::connect(rightdownPushButton, SIGNAL(released()), VideoDisplay, SLOT(rightdownEnd()));
        QObject::connect(searchPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(queryRecordVideo()));
        QObject::connect(resultListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), VideoDisplay, SLOT(playRecordVideo(QListWidgetItem*)));
        QObject::connect(zoomOutPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(zoomOutBegin()));
        QObject::connect(zoomOutPushButton, SIGNAL(released()), VideoDisplay, SLOT(zoomOutEnd()));
        QObject::connect(zoomInPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(zoomInBegin()));
        QObject::connect(zoomInPushButton, SIGNAL(released()), VideoDisplay, SLOT(zoomInEnd()));
        QObject::connect(focusFarPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(focusFarBegin()));
        QObject::connect(focusFarPushButton, SIGNAL(released()), VideoDisplay, SLOT(focusFarEnd()));
        QObject::connect(focusNearPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(focusNearBegin()));
        QObject::connect(focusNearPushButton, SIGNAL(released()), VideoDisplay, SLOT(focusNearEnd()));
        QObject::connect(irisClosePushButton, SIGNAL(pressed()), VideoDisplay, SLOT(irisCloseBegin()));
        QObject::connect(irisClosePushButton, SIGNAL(released()), VideoDisplay, SLOT(irisCloseEnd()));
        QObject::connect(irisOpenPushButton, SIGNAL(pressed()), VideoDisplay, SLOT(irisOpenBegin()));
        QObject::connect(irisOpenPushButton, SIGNAL(released()), VideoDisplay, SLOT(irisOpenEnd()));
        QObject::connect(speedHorizontalSlider, SIGNAL(valueChanged(int)), VideoDisplay, SLOT(speedChange(int)));
        QObject::connect(brightnessHorizontalSlider, SIGNAL(sliderMoved(int)), VideoDisplay, SLOT(brightnessChange(int)));
        QObject::connect(hueHorizontalSlider, SIGNAL(sliderMoved(int)), VideoDisplay, SLOT(hueChange(int)));
        QObject::connect(contrastHorizontalSlider, SIGNAL(sliderMoved(int)), VideoDisplay, SLOT(contrastChange(int)));
        QObject::connect(saturationHorizontalSlider, SIGNAL(sliderMoved(int)), VideoDisplay, SLOT(saturationChange(int)));
        QObject::connect(defaultValuePushButton, SIGNAL(clicked()), VideoDisplay, SLOT(returnDefault()));
        QObject::connect(stopPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(stop()));
        QObject::connect(lastPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(last()));
        QObject::connect(nextPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(next()));
        QObject::connect(yesterdayPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(slow()));
        QObject::connect(tomorrowPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(fast()));
        QObject::connect(decreasePushButton, SIGNAL(clicked()), VideoDisplay, SLOT(speedDecrease()));
        QObject::connect(increasePushButton, SIGNAL(clicked()), VideoDisplay, SLOT(speedIncrease()));

        controlStackedWidget->setCurrentIndex(1);
        panelStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VideoDisplay);
    } // setupUi

    void retranslateUi(QWidget *VideoDisplay)
    {
        VideoDisplay->setWindowTitle(QApplication::translate("VideoDisplay", "VideoDisplay", 0));
        leftupPushButton->setText(QString());
        upPushButton->setText(QString());
        rightupPushButton->setText(QString());
        leftPushButton->setText(QString());
        circlePushButton->setText(QString());
        rightPushButton->setText(QString());
        leftdownpushButton->setText(QString());
        downPushButton->setText(QString());
        rightdownPushButton->setText(QString());
        tomorrowPushButton->setText(QString());
        playOrPausePushButton->setText(QString());
        stopPushButton->setText(QString());
        lastPushButton->setText(QString());
        yesterdayPushButton->setText(QString());
        nextPushButton->setText(QString());
        videoGroupBox->setTitle(QString());
        realtimeVideoPushButton->setText(QApplication::translate("VideoDisplay", "\345\256\236\346\227\266\350\247\206\351\242\221", 0));
        historicVideoPushButton->setText(QApplication::translate("VideoDisplay", "\345\216\206\345\217\262\350\247\206\351\242\221", 0));
        panelGroupBox->setTitle(QString());
        leftupPushButton_2->setText(QString());
        upPushButton_2->setText(QString());
        rightupPushButton_2->setText(QString());
        leftPushButton_2->setText(QString());
        circlePushButton_2->setText(QString());
        rightPushButton_2->setText(QString());
        leftdownPushButton->setText(QString());
        downPushButton_2->setText(QString());
        rightdownPushButton_2->setText(QString());
        decreasePushButton->setText(QString());
        increasePushButton->setText(QString());
        zoomInPushButton->setText(QString());
        focusFarPushButton->setText(QString());
        zoomOutPushButton->setText(QString());
        tiltLabel->setText(QString());
        focusNearPushButton->setText(QString());
        zoomLabel->setText(QString());
        irisClosePushButton->setText(QString());
        apertureLabel->setText(QString());
        irisOpenPushButton->setText(QString());
        brightnessLabel->setText(QString());
        hueLabel->setText(QString());
        defaultValuePushButton->setText(QApplication::translate("VideoDisplay", "\346\201\242\345\244\215\351\273\230\350\256\244\345\200\274", 0));
        contrastLabel->setText(QString());
        saturationLabel->setText(QString());
        fromLabel->setText(QApplication::translate("VideoDisplay", "\344\273\216", 0));
        toLabel->setText(QApplication::translate("VideoDisplay", "\345\210\260", 0));
        searchPushButton->setText(QApplication::translate("VideoDisplay", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoDisplay: public Ui_VideoDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEODISPLAY_H
