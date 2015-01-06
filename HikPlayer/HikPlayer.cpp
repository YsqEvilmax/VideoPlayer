#include "stdafx.h"
#include "HikPlayer.h"
#include "ImageConverter.h"

HikPlayer::HikPlayer()
	: m_pVideoOutput(NULL)
	, m_pMedia(NULL)
{

}

HikPlayer::~HikPlayer()
{
	stop();
	Delete(m_pMedia);
	Delete(m_pVideoOutput);
}

void HikPlayer::setMedia(MediaContent* media)
{
	Delete(m_pMedia);
	m_pMedia = media;
}

void HikPlayer::play()
{
	if (m_pMedia && m_pMedia->valid())
	{
		HWND handle = NULL;
		if (m_pVideoOutput)
		{
			handle = (HWND)(m_pVideoOutput->winId());
		}
		PlayM4_Play(m_pMedia->port(), handle);
		PlayM4_VIE_SetModuConfig(m_pMedia->port(), PLAYM4_VIE_MODU_ADJ, true);
	}
}

void HikPlayer::stop()
{
	if (m_pMedia && m_pMedia->valid())
	{
		PlayM4_SetDisplayCallBackEx(m_pMedia->port(), NULL, NULL);
		PlayM4_Stop(m_pMedia->port());
		PlayM4_VIE_SetModuConfig(m_pMedia->port(), PLAYM4_VIE_MODU_ADJ, false);
	}
}

void HikPlayer::inputData(const QByteArray &data)
{
	if (m_pMedia && m_pMedia->valid())
	{
		PlayM4_InputData(m_pMedia->port(), (PBYTE)(data.data()), data.size());
	}
}

void HikPlayer::setColourSpace(int bright, int contrast, int color)
{
	if (m_pMedia && m_pMedia->valid())
	{
		PLAYM4_VIE_PARACONFIG VIEParaCfg = { 0 };
		VIEParaCfg.moduFlag = PLAYM4_VIE_MODU_ADJ;
		VIEParaCfg.brightVal = bright;
		VIEParaCfg.contrastVal = contrast;
		VIEParaCfg.colorVal = color;
		PlayM4_VIE_SetParaConfig(m_pMedia->port(), &VIEParaCfg);
		PlayM4_VIE_SetRegion(m_pMedia->port(), 1, NULL);
	}
}
