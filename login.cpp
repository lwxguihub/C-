#include "data.h"

void login1()
{
    //���ô��ڴ�С  ������ɫ
	initgraph(450, 600);
	setbkmode(TRANSPARENT);
	IMAGE img;//����һ������ͼ��ı���
	IMAGE img1,img2,img3;
	loadimage(&img, "./body2.jpg",450,600);
	loadimage(&img1, "./body4.jpg",450,300);
	loadimage(&img2, "./dd1.jpg",96,36);
	//loadimage(&img2, "./Au.jpg",50,25);
	putimage(0, 0, &img);//�ڴ����д�ӡͼ��
	//����������ɫ ���в�����ʾ����
	putimage(0, 0, &img1);
	putimage(260, 453, &img2);
			
	settextcolor(BLACK);
	settextstyle(25, 0, "����");
	outtextxy(200,330,"��¼");
	outtextxy(100, 380, "�˺�:");
	outtextxy(100, 420, "����:");
	outtextxy(100, 460, "��֤��:");
	setlinecolor(RGB(193,205,205));
	line(100,410,350,410);
	line(100,450,350,450);
	line(100,490,350,490);
     
    char p[8],p2[8],p4[8];
     int i,flag = 0;
	string str1,str2,str3,str4,str5,str6,str7;   //ͷ�ļ� string 
	//str1������c�������� str2ÿ�δ�š���ʾ���ݣ���+str1���������
	//�˺����� 
	char c,c1;  //�����ַ�c���ռ�������
	while ((c = _getch()) != '\r')  //���û���س�������һ��c
	{  //getch()ͷ�ļ� conio.h

		str2 = "";
		if(c == 27)  //�����esc���ͷ��� 
		{
			choice1();
		}
		if (c == '\b')  //���c���˸����str1ɾ��һ��
		{
			str1 = str1.substr(0, str1.size() - 1);

		}
		else{
			str1 += (int)c;  
		}
		str2 = "�˺�:" + str1;
		//cleardevice();
		outtextxy(100, 380, str2.c_str());  //�ڴ�������Ϊ��100��300���ĵط���ʼ���str2������
		
		
	}
	//�������� 
		while ((c1 = _getch()) != '\r')  //���û���س�������һ��c
	{  //getch()ͷ�ļ� conio.h
		str4 = "";
		if(c == 27)
		{
			choice1();
		}
		if (c1 == '\b')  //���c���˸����str1ɾ��һ��
		{
			str3 = str3.substr(0, str3.size() - 1);

		}
		else{
			str7 += (int)c1;  
			str3 += "*";
		}
		str4 = "����:" + str3;
	//	cleardevice();
		outtextxy(100, 420, str4.c_str());  //�ڴ�������Ϊ��10��220���ĵط���ʼ���str2������
		
	}
	//��֤������ 
   while ((c = _getch()) != '\r')  //���û���س�������һ��c
	{  //getch()ͷ�ļ� conio.h
		str6 = "";
		if(c == 27)
		{
			choice1();
		}
		if (c == '\b')  //���c���˸����str1ɾ��һ��
		{
			str5 = str5.substr(0, str5.size() - 1);

		}
		else{
			str5 += (int)c;  
		}
		str6 = "��֤��:" + str5;
		//cleardevice();
		outtextxy(100, 460, str6.c_str());  //�ڴ�������Ϊ��10��220���ĵط���ʼ���str2������
		
		
	}
	//��ȡ string ���͵����ݣ����뵽 char[]�� 
      for(i=0;i<str1.length();i++)
     {
     	p4[i] = str1[i];
     	
	 }
	  p4[i] = '\0';
     for(i=0;i<str7.length();i++)
     {
     	p[i] = str7[i];
     	
	 }
	  p[i] = '\0';
	  
	  
	  for(i=0;i<str5.length();i++)
     {
     	p2[i] = str5[i];
     	
	 }
	  p2[i] = '\0';
	 char p3[8] = "fda4";//��֤�� 
	 char p5[8] = "2022";//�˺� 
	 char p1[8] = "lwx";//���� 
	 char p6[8] = "2021";//���Ҷ��˺�
	 char p7[8] = "2020";//����Ա�˺� 
	 
	 //�ж��Ƿ��Ԥ����˺�������֤����ͬ 
	  if(strcmp(p,p1)==0 && strcmp(p2,p3)==0 && strcmp(p4,p5)==0)
	  {
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "��¼�ɹ���", "��¼�ɹ�", MB_OKCANCEL);
    	 Project();
	  }
	  else if(strcmp(p,p1)==0 && strcmp(p2,p3)==0 && strcmp(p4,p6)==0)
	  {
	  	HWND hn = GetHWnd();
    	MessageBox(hn, "��¼�ɹ���", "��¼�ɹ�", MB_OKCANCEL);
    	 Project1();
	  }
	  else if(strcmp(p,p1)==0 && strcmp(p2,p3)==0 && strcmp(p4,p7)==0)
	  {
	  	HWND hn = GetHWnd();
    	MessageBox(hn, "��¼�ɹ���", "��¼�ɹ�", MB_OKCANCEL);
    	 menu5();
	  }
	  else if(strcmp(p,p1)!=0 && strcmp(p2,p3)==0 )
	  {
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "�������", "��¼ʧ��", MB_OKCANCEL);
    	login1();
	  }
	  else if(strcmp(p4,p5)!=0 && strcmp(p2,p3)==0 )
	  {
	  	
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "�˺Ŵ���򲻴���", "��¼ʧ��", MB_OKCANCEL);
    	login1();
	  }
	  else 
	  {
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "��֤�����", "��¼ʧ��", MB_OKCANCEL);
    	login1();
	  }
}

