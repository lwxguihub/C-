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


void menu2()
{
	initgraph(1000, 900);
	title();
	int flag = 1;
    
	while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		Project(); //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 0 && msg.x <= 333 && msg.y >= 200 && msg.y <= 250)   //��������ҳ��һ���������ڵľ������� 
				{
					    flag = 1;
					    setfillcolor(RGB(0, 191, 255));
		                solidrectangle(0,200,333,250);
                        setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(333,200,1000,250);                    	
                     	cleardevice();
					    
					    menu2();
				}
			if (msg.x >= 333 && msg.x <= 666 && msg.y >= 200 && msg.y <= 250)   //��������ҳ��һ���������ڵľ������� 
				{
					   flag = 2;
					   setfillcolor(RGB(0, 191, 255));
	                	solidrectangle(333,200,666,250);
	                	setfillcolor(RGB(30, 144, 255));
	                	solidrectangle(0,200,333,250);
                    	solidrectangle(666,200,1000,250);
                    	cleardevice();
					   sportman2();
					   break;
				}	
			if (msg.x >= 666 && msg.x <= 999 && msg.y >= 200 && msg.y <= 250)   //��������ҳ��һ���������ڵľ������� 
				{
					   flag = 3;
					   setfillcolor(RGB(0, 191, 255));
		               solidrectangle(666,200,1000,250);
	                	setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(0,200,666,250);
					   cleardevice();
					   rank();
					   break;
				}	
				
			
		}
	
	if(flag == 1)
	{
		setfillcolor(RGB(0, 191, 255));
		solidrectangle(0,200,333,250);
        setfillcolor(RGB(30, 144, 255));
    	solidrectangle(333,200,1000,250);
    	
	}
	if(flag == 2)
	{
		setfillcolor(RGB(0, 191, 255));
		solidrectangle(333,200,666,250);
		setfillcolor(RGB(30, 144, 255));
		solidrectangle(0,200,333,250);
    	solidrectangle(666,200,1000,250);
	}
	if(flag == 3)
	{
		setfillcolor(RGB(0, 191, 255));
		solidrectangle(666,200,1000,250);
		setfillcolor(RGB(30, 144, 255));
    	solidrectangle(0,200,666,250);
	}

	setlinecolor(WHITE);
	line(333,200,333,250);
	line(666,200,666,250);
	RECT r1 = {0,0,350,450};
	RECT r2 = {0,0,1000,450};
	RECT r3 = {0,0,1650,450}; 
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("���а�"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("��Ա��Ϣ"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("��Ŀ����"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }
}
}

void menu3()
{
	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//��ȡ���ھ������������������  
	SetWindowText(hn,"�й���");//�޸Ĵ������ֺ���
	setbkmode(TRANSPARENT);
	IMAGE img,img1;//����һ������ͼ��ı���
	loadimage(&img, "./body2.jpg",1000,900);
	loadimage(&img1,"./chinese.jpg",210,140);
	putimage(0, 0, &img);//�ڴ����д�ӡͼ��
	putimage(710,30,&img1);
	
	RECT r1 = {360,1,700,200};
	
	settextcolor(RED);
	settextstyle(100,0.5,"Times New Roman");
	drawtext(_T("�й���"), &r1, DT_VCENTER | DT_SINGLELINE);
	
	 setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,200,950,850);//�󷽿� 
	
	RECT r2 = {0,0,290,500};
	RECT r3 = {0,0,900,500};
	RECT r4 = {0,0,1530,500};
	
	settextcolor(BLACK);
	settextstyle(50,0,"Times New Roman");
	drawtext(_T("����"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("�Ա�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("��Ŀ"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	
	
	
	FILE *fp = fopen("./name1.txt","r");
	sport s[30];
	int i;
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<11;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),11,fp1);
	fclose(fp1);
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[30];
	//fread(s1,sizeof(s[0]),8,fp1);  //��ȡ�������ļ���һ�ζ�ȡ�������� 
	
	//��ȡ�������ļ���һ�ζ�ȡһ�����ݡ� 
	for(i=0;i<11;i++){
		fread(&s1[i],sizeof(s1[0]),11,fp1);
	}

    
    char str[100];
    int j,k;
   
    //RECT r10 = {0, 330, 1000, 1000};
    RECT r11 = {100, 360, 800, 900}; 
    RECT r12 = {810, 305, 1000, 900};
    RECT r13 = {660, 305, 1000, 900};	
	for(i = 0;i < 8;i++)
	{
		setfillcolor(RED);
		solidroundrect(880,300+j,930,330+j,10,10);
		
		settextcolor(BLACK); 
		settextstyle(20,0,_T("Times New Roman"));
		drawtext(_T("ɾ��"), &r12, DT_CENTER | DT_VCENTER );
		settextcolor(BLUE); 
		settextstyle(20,0,_T("Times New Roman"));
		drawtext(_T("�༭"), &r13, DT_CENTER | DT_VCENTER );
		r12.top += 60;
		r12.bottom += 60;
		r13.top += 60;
		r13.bottom += 60;
		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
		
		sprintf(str,"%s                                       %s                                       %s",s[i].name,s[i].gender,s[i].project1);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r11,DT_CENTER | DT_VCENTER ); 
    	r11.top += 60;
		r11.bottom += 60;
		
		j = j+60;
		//settextstyle(15,0,_T("Times New Roman"));
	//	drawtext(_T("�밴esc��������һ��,�����������ߡ�������ҳ"), &r10, DT_CENTER | DT_VCENTER );
		
}
        setfillcolor(RED);
		solidroundrect(880,300+j,930,330+j,10,10); 
        settextcolor(BLACK); 
		settextstyle(20,0,_T("Times New Roman"));
		drawtext(_T("ɾ��"), &r12, DT_CENTER | DT_VCENTER ); 
		settextcolor(BLUE);
		drawtext(_T("�༭"), &r13, DT_CENTER | DT_VCENTER ); 
        //rectangle(850,290,900,330);
        RECT r14= {725 ,300, 800, 900}; 
        
        settextcolor(RED); 
		settextstyle(30,0,_T("Times New Roman"));
		drawtext(_T("����"), &r14, DT_CENTER | DT_VCENTER ); 
        
    FILE *fp2 = fopen("./name.txt","r");
    FILE *fp3 = fopen("./gender.txt","r");
	sport s2[5];
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<1;i++){
		fscanf(fp2,"%s",&s2[i].name);
	} 
	char str1[100];
    for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].name);
		outtextxy(110, 300,str1);
	}
    for(i=0;i<1;i++){
		fscanf(fp3,"%s",&s2[i].gender);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].gender);
		outtextxy(440, 300,str1);
	}
        
    setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(160,290,250,330);
	fillrectangle(465,290,540,330);
     	while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);
		 if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 800 && msg.x <= 860 && msg.y >= 290 && msg.y <= 330)   //��������ҳ��һ���������ڵľ������� 
				{
					name();
					//rectangle(890,420,940,470); 
					
}
           
}
		if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }	  
}
}
