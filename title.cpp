#include "data.h"

void title()
{
	initgraph(1000, 900);
	setbkmode(TRANSPARENT);
	IMAGE img1,img2;//����һ������ͼ��ı���
	loadimage(&img1, "./title1.jpg",1000,200);
	loadimage(&img2, "./body2.jpg",1000,700);//����ͼ��//����ͼ��
	cleardevice();
	putimage(0, 0, &img1);//�ڴ����д�ӡͼ��
	//getchar();
	putimage(0, 200, &img2);//�ڴ����д�ӡͼ��
	
}
