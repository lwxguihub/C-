#include "data.h"

void menu1()
{
    initgraph(1000, 900);
	IMAGE img1,img2;//����һ������ͼ��ı���
	loadimage(&img1, "./title.jpg",1000,300);
	loadimage(&img2, "./body1.jpg",1000,600);//����ͼ��//����ͼ��
	cleardevice();
	putimage(0, 0, &img1);//�ڴ����д�ӡͼ��
	//getchar();
	putimage(0, 300, &img2);//�ڴ����д�ӡͼ��
}


