#ifndef VIDEOFORM_H
#define VIDEOFORM_H

#include <QWidget>
#include <QMouseEvent> 
#include "VideoFrame.h"
#include "VideoDisplay.h"

namespace Ui {class VideoForm;};

namespace Gui
{
	class VideoForm : public QWidget
	{
		Q_OBJECT

	public:
		VideoForm(QWidget *parent = 0);
		~VideoForm();

		VideoDisplay* dispalyWidget();

	protected:
		virtual void mousePressEvent(QMouseEvent *event);

	private:
		Ui::VideoForm *ui;
	};
}

#endif // VIDEOFORM_H
