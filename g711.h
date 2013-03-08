/*******************************************************
*	这是配合我的博客《JRTPLIB@Conference DIY视频会议系统》
*	而写的一个阶段性实验。
*	作者：冯富秋 tinnal
*	邮箱：tinnal@163.com
*	版本：1.00
*********************************************************/

#ifndef _G711_H_
#define _G711_H_

//其中一种实现
unsigned char ALawEncode(int pcm16);
int ALawDecode(unsigned char alaw);

//另一种实现
unsigned char	linear2alaw	( int pcm_val);
int				alaw2linear	( unsigned char a_val);
unsigned char	linear2ulaw	( int pcm_val);
int				ulaw2linear	( unsigned char u_val);
unsigned char	alaw2ulaw	( unsigned char aval);
unsigned char	ulaw2alaw	( unsigned char uval);

#endif