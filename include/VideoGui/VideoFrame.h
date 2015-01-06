#ifndef VIDEOFRAM_H
#define VIDEOFRAM_H

#include <QWidget>

namespace Ui {class VideoFrame;};

namespace Gui
{
	class VideoFrame : public QWidget
	{
		Q_OBJECT

	public:
		VideoFrame(QWidget *parent = 0);
		~VideoFrame();
	private:
		Ui::VideoFrame *ui;
	public slots:
		void minimize();
		void maximize();
		void quit();
	};
}


#endif // VIDEOFRAM_H
