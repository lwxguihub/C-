#include "data.h"

void menu1()
{
    initgraph(1000, 900);
	IMAGE img1,img2;//创建一个加载图像的变量
	loadimage(&img1, "./title.jpg",1000,300);
	loadimage(&img2, "./body1.jpg",1000,600);//加载图像//加载图像
	cleardevice();
	putimage(0, 0, &img1);//在窗口中打印图像
	//getchar();
	putimage(0, 300, &img2);//在窗口中打印图像
}


