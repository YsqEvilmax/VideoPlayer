/********************************************************************************
** Form generated from reading UI file 'VideoForm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOFORM_H
#define UI_VIDEOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "VideoDisplay.h"
#include "VideoFrame.h"

QT_BEGIN_NAMESPACE

class Ui_VideoForm
{
public:
    QVBoxLayout *verticalLayout;
    Gui::VideoFrame *frameWidget;
    Gui::VideoDisplay *displayWidget;

    void setupUi(QWidget *VideoForm)
    {
        if (VideoForm->objectName().isEmpty())
            VideoForm->setObjectName(QStringLiteral("VideoForm"));
        VideoForm->setWindowModality(Qt::WindowModal);
        VideoForm->resize(832, 590);
        VideoForm->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(VideoForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frameWidget = new Gui::VideoFrame(VideoForm);
        frameWidget->setObjectName(QStringLiteral("frameWidget"));
        frameWidget->setAutoFillBackground(false);
        frameWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Frame/Frame/\347\252\227\345\217\243\346\235\241_\344\270\255.png);"));

        verticalLayout->addWidget(frameWidget);

        displayWidget = new Gui::VideoDisplay(VideoForm);
        displayWidget->setObjectName(QStringLiteral("displayWidget"));
        displayWidget->setAutoFillBackground(false);
        displayWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/Backgroud/Backgroud/\345\261\217\345\271\225\345\260\272\345\257\270.png);"));

        verticalLayout->addWidget(displayWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 20);

        retranslateUi(VideoForm);

        QMetaObject::connectSlotsByName(VideoForm);
    } // setupUi

    void retranslateUi(QWidget *VideoForm)
    {
        VideoForm->setWindowTitle(QApplication::translate("VideoForm", "VideoForm", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoForm: public Ui_VideoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOFORM_H
