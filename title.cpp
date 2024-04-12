#include "data.h"

void title()
{
	initgraph(1000, 900);
	setbkmode(TRANSPARENT);
	IMAGE img1,img2;//创建一个加载图像的变量
	loadimage(&img1, "./title1.jpg",1000,200);
	loadimage(&img2, "./body2.jpg",1000,700);//加载图像//加载图像
	cleardevice();
	putimage(0, 0, &img1);//在窗口中打印图像
	//getchar();
	putimage(0, 200, &img2);//在窗口中打印图像
	
}
