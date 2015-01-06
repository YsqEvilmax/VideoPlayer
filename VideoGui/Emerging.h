#ifndef EMERGING_H
#define EMERGING_H
#include <QWidget>
#include <QPushButton>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>

namespace Gui{
	class Emerging : public QObject
	{
		Q_OBJECT
	public:
		Emerging(QWidget *parent = 0);
		~Emerging();

		void appear();
		void disappear();
	private:
		QGraphicsOpacityEffect *m_pOpacityEffect;
		QPropertyAnimation *m_pEmergingAnimation;
	};


	/******************************************************************************************************************************************************************/
	class EmergingWidget : public QWidget
	{
		Q_OBJECT
	public:
		EmergingWidget(QWidget *parent = 0);
		~EmergingWidget();
	protected:
		virtual void enterEvent(QEvent *event);
		virtual void leaveEvent(QEvent *event);
	private:
		Emerging m_AutoEmerging;
	};

	/******************************************************************************************************************************************************************/
	class EmergingButton : public QPushButton
	{
		Q_OBJECT
	public:
		EmergingButton(QWidget *parent = 0);
		~EmergingButton();
	protected:
		virtual void enterEvent(QEvent *event);
		virtual void leaveEvent(QEvent *event);
	private:
		Emerging m_AutoEmerging;
	};
}
#endif // EMERGING_H
