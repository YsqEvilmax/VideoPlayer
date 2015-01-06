#pragma once
class ImageConverter
{
public:
	ImageConverter();
	virtual ~ImageConverter();

	bool YV12ToRGB24(unsigned char* pYV12, unsigned char* pRGB24, int iWidth, int iHeight);
};

