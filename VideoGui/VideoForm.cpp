#include "stdafx.h"
#include "VideoForm.h"
#include "ui_VideoForm.h"

namespace Gui
{
	VideoForm::VideoForm(QWidget *parent)
		: QWidget(parent)
	{
		ui = new Ui::VideoForm();
		ui->setupUi(this);
		//���ô�����������ز�����λ�ڶ���
		setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
		QPalette palette;
		palette.setBrush(backgroundRole(), QBrush(QImage(":/Backgroud/Backgroud/�װ�.png")));
		setPalette(palette);
	}

	VideoForm::~VideoForm()
	{
		delete ui;
	}

	VideoDisplay* VideoForm::dispalyWidget()
	{
		return ui->displayWidget;
	}

	void VideoForm::mousePressEvent(QMouseEvent *event)
	{
		if (ReleaseCapture())
			SendMessage(HWND(this->winId()), WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0);
		event->ignore();
	}
}

