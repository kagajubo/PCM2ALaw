/*******************************************************
*	这是配合我的博客《JRTPLIB@Conference DIY视频会议系统》
*	而写的一个阶段性实验。
*	作者：冯富秋 tinnal
*	邮箱：tinnal@163.com
*	版本：1.00
*********************************************************/

#ifndef _WAV_H_
#define _WAV_H_

#include "types.h"

#pragma pack(1)

struct RIFF_HEADER
{
	U8		szRiffID[4];  // 'R','I','F','F'
	U32		dwRiffSize;
	U8		szRiffFormat[4]; // 'W','A','V','E'
};

struct WAVE_FORMAT
{
	U16		wFormatTag;
	U16		wChannels;
	U32		dwSamplesPerSec;
	U32		dwAvgBytesPerSec;
	U16		wBlockAlign;
	U16		wBitsPerSample;
	U16		pack;		//附加信息
};
struct FMT_BLOCK
{
	U8		szFmtID[4]; // 'f','m','t',' '
	U32		dwFmtSize;
	struct	WAVE_FORMAT wavFormat;
};

struct FACT_BLOCK
{
	U8		szFactID[4]; // 'f','a','c','t'
	U32		dwFactSize;
};

struct DATA_BLOCK
{
	U8		szDataID[4]; // 'd','a','t','a'
	U32		dwDataSize;
};


#endif