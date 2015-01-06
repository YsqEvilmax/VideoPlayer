#include "stdafx.h"
#include "Emerging.h"

namespace Gui{
	Emerging::Emerging(QWidget *parent)
		: QObject(parent)
		, m_pOpacityEffect(NULL)
		, m_pEmergingAnimation(NULL)
	{
		m_pOpacityEffect = new QGraphicsOpacityEffect(this);
		parent->setGraphicsEffect(m_pOpacityEffect);
		m_pOpacityEffect->setOpacity(0);
		m_pEmergingAnimation = new QPropertyAnimation(m_pOpacityEffect, "opacity");
		m_pEmergingAnimation->setDuration(1000);
	}

	Emerging::~Emerging()
	{
		Delete(m_pEmergingAnimation);
		Delete(m_pOpacityEffect);
	}

	void Emerging::appear()
	{
		m_pEmergingAnimation->setStartValue(0);
		m_pEmergingAnimation->setEndValue(1);
		m_pEmergingAnimation->start();
	}

	void Emerging::disappear()
	{
		m_pEmergingAnimation->setStartValue(1);
		m_pEmergingAnimation->setEndValue(0);
		m_pEmergingAnimation->start();
	}

	/******************************************************************************************************************************************************************/
	EmergingWidget::EmergingWidget(QWidget *parent)
		: QWidget(parent)
		, m_AutoEmerging(this)
	{
		//setAttribute(Qt::WA_TranslucentBackground);
		//setWindowFlags(Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint | Qt::Tool);
	}

	EmergingWidget::~EmergingWidget()
	{
	}

	void EmergingWidget::enterEvent(QEvent *event)
	{
		m_AutoEmerging.appear();
	}
	void EmergingWidget::leaveEvent(QEvent *event)
	{
		m_AutoEmerging.disappear();
	}

	/******************************************************************************************************************************************************************/
	EmergingButton::EmergingButton(QWidget *parent)
		: QPushButton(parent)
		, m_AutoEmerging(this)
	{
		//setAttribute(Qt::WA_TranslucentBackground);
		//setWindowFlags(Qt::FramelessWindowHint | Qt::ToolTip);
		//setAttribute(Qt::WA_TranslucentBackground);
		//setWindowFlags(Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint | Qt::Tool);
	}

	EmergingButton::~EmergingButton()
	{
	}

	void EmergingButton::enterEvent(QEvent *event)
	{
		m_AutoEmerging.appear();
	}
	void EmergingButton::leaveEvent(QEvent *event)
	{
		m_AutoEmerging.disappear();
	}
}