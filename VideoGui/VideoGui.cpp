#include "stdafx.h"
#include "VideoGui.h"

namespace Gui{
	VideoGui::VideoGui()
		: m_pForm(NULL)
	{
		m_pForm = new VideoForm();
	}

	VideoGui::~VideoGui()
	{
		Delete(m_pForm);
	}
}
