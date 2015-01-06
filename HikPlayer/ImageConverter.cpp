#include "stdafx.h"
#include "ImageConverter.h"


ImageConverter::ImageConverter()
{
}


ImageConverter::~ImageConverter()
{
}

bool ImageConverter::YV12ToRGB24(unsigned char* pYV12, unsigned char* pRGB24, int iWidth, int iHeight)
{
	if (!pYV12 || !pRGB24)
		return false;
	const long nYLen = long(iHeight * iWidth);
	const int nHfWidth = (iWidth >> 1);
	if (nYLen<1 || nHfWidth<1)
		return false;
	// yv12数据格式，其中Y分量长度为width * height, U和V分量长度都为width * height / 4
	// |WIDTH |
	// y......y--------
	// y......y   HEIGHT
	// y......y
	// y......y--------
	// v..v
	// v..v
	// u..u
	// u..u
	unsigned char* yData = pYV12;
	unsigned char* vData = &yData[nYLen];
	unsigned char* uData = &vData[nYLen >> 2];
	if (!uData || !vData)
		return false;
	// Convert YV12 to RGB24
	// 
	// formula
	//                                       [1            1                        1             ]
	// [r g b] = [y u-128 v-128] [0            0.34375             0             ]
	//                                       [1.375      0.703125          1.734375]
	// another formula
	//                                       [1                   1                      1            ]
	// [r g b] = [y u-128 v-128] [0                   0.698001         0            ]
	//                                       [1.370705      0.703125         1.732446]
	int rgb[3];
	int i, j, m, n, x, y;
	m = -iWidth;
	n = -nHfWidth;
	for (y = 0; y < iHeight; y++)
	{
		m += iWidth;
		if (!(y % 2))
			n += nHfWidth;
		for (x = 0; x < iWidth; x++)
		{
			i = m + x;
			j = n + (x >> 1);
			rgb[2] = int(yData[i] + 1.370705 * (vData[j] - 128)); // r分量值
			rgb[1] = int(yData[i] - 0.698001 * (uData[j] - 128) - 0.703125 * (vData[j] - 128)); // g分量值
			rgb[0] = int(yData[i] + 1.732446 * (uData[j] - 128)); // b分量值
			j = nYLen - iWidth - m + x;
			i = (j << 1) + j;
			for (j = 0; j<3; j++)
			{
				if (rgb[j] >= 0 && rgb[j] <= 255)
					pRGB24[i + j] = rgb[j];
				else
					pRGB24[i + j] = (rgb[j] < 0) ? 0 : 255;
			}
		}
	}
	return true;
}