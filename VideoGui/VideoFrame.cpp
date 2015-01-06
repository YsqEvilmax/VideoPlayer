#include "stdafx.h"
#include "VideoFrame.h"
#include "ui_VideoFrame.h"

namespace Gui
{
	VideoFrame::VideoFrame(QWidget *parent)
		: QWidget(parent)
	{
		ui = new Ui::VideoFrame();
		ui->setupUi(this);
	}

	VideoFrame::~VideoFrame()
	{
		delete ui;
	}

	void VideoFrame::minimize()
	{
		((QWidget*)parent())->showMinimized();
	}

	void VideoFrame::maximize()
	{
		if (ui->maximizePushButton->isChecked())
		{
			((QWidget*)parent())->showMaximized();
		}
		else
		{
			((QWidget*)parent())->showNormal();
		}		
	}

	void VideoFrame::quit()
	{
		((QWidget*)parent())->close();
	}
}


