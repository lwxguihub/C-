#include "data.h"

void sportman()
{ 

	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//��ȡ���ھ������������������  
	SetWindowText(hn,"�˶�Ա��Ϣ");//�޸Ĵ������ֺ���
	setbkmode(TRANSPARENT);
	IMAGE img;//����һ������ͼ��ı���
	IMAGE img1,img2;
	loadimage(&img, "./body2.jpg",1000,900);
	loadimage(&img1, "./photo1.jpg",170,200);
	//loadimage(&img2, "./Au.jpg",50,25);
	putimage(0, 0, &img);//�ڴ����д�ӡͼ��
	//rectangle(155,155,175,205);
	RECT r1 = {0,0,1000,100};	
	RECT r2 = {0,0,1000,450};
	RECT r3 = {0,0,1000,550}; 
	RECT r4 = {0,0,1000,650};
	RECT r5 = {0,0,500,800};
	RECT r6 = {0,0,1500,450};//�༭ 
	RECT r7 = {0,0,1500,550};
	RECT r8 = {0,0,1500,650};
	RECT r9 = {0,0,1000,350};
    //RECT r8 = {0,0,1500,650};
	
	settextcolor(BLACK);
	settextstyle(50,0,"����");
	drawtext(_T("�˶�Ա��Ϣ"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);	
    
	setlinecolor(BLACK);
	fillrectangle(100,100,900,800);//�󷽿� 
	
	setlinecolor(BLACK);
	fillrectangle(150,150,250,300);//ͷ�� 
	putimage(150,150,&img1);
    
    settextcolor(BLACK);
	settextstyle(25,0,"����");
	drawtext(_T("ID��"), &r9, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("������"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("�Ա�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���䣺"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);;
    drawtext(_T("��Ŀ"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
	
	settextcolor(BLUE);
	settextstyle(15,0,"����");
    drawtext(_T("�༭"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("�༭"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("�༭"), &r8, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
    setfillcolor(RGB(255, 215, 0));
    solidcircle(450, 400, 20);//�ޱ߿����
    setfillcolor(RGB(207, 207, 207));
    solidcircle(600, 400, 20);
    setfillcolor(RGB(205, 129, 98));
    solidcircle(750, 400, 20);
    
    RECT r10 = {400,304,500,500};
    RECT r11 = {500,103,700,700};
    RECT r12 = {600,1,900,800};
    
    settextcolor(BLACK);
	settextstyle(25,0,"����");
    drawtext(_T("G"), &r10, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("S"), &r11, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("B"), &r12, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
    sportman1();
}

void sportman1()
{
	    //��ȡ�˶�Ա����Ŀ���� 
	FILE *fp = fopen("./data.txt","r"); 
	med s[2];
	int i;
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<2;i++){
		fscanf(fp,"%s%d%d%d",&s[i].project,&s[i].Au,&s[i].Ag,&s[i].Cu);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./data1.dat","wb");
	fwrite(s,sizeof(s[0]),2,fp1);
	fclose(fp1);
	
	fp1 = fopen("./data1.dat","rb");
	med s1[8]; 
	for(i=0;i<2;i++){
		fread(&s1[i],sizeof(s1[0]),2,fp1);
	}   
    char str[100];
    int j;
    j = 450;
	for(i=0;i<2;i++) // ����˶�Ա�������Ŀ�ͽ������� 
	{
		settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(30,144,255));       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str,"%s                                   %d                             %d                            %d",s1[i].project,s1[i].Au,s1[i].Ag,s1[i].Cu);
		outtextxy(230, j,str);
		
		j = j+50;
		
	}
	fclose(fp1);
	IMAGE img;
    setbkmode(TRANSPARENT);
    loadimage(&img, "./Chinese.jpg",54,36);
	putimage(720, 150, &img);
	
	
	
	RECT r1 = {0,0,1200,350};	
    settextcolor(BLACK);
	settextstyle(25,0,"����");
	drawtext(_T("2022"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

    FILE *fp2 = fopen("./name.txt","r"); //��ȡ�˶�Ա�޸ĺ������ 
	sport s2[5];
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<1;i++){
		fscanf(fp2,"%s",&s2[i].name);
	} 
	char str1[100];
    for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(BLACK);       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].name);
		outtextxy(570, 205,str1);
	}
	fclose(fp2);
	FILE *fp3 = fopen("./gender.txt","r"); //��ȡ�˶�Ա�޸ĺ���Ա� 
    for(i=0;i<1;i++){
		fscanf(fp3,"%s",&s2[i].gender);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(BLACK);       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].gender);
		outtextxy(575, 255,str1);
	}
	fclose(fp3);
	FILE *fp4 = fopen("./age.txt","r"); //��ȡ�˶�Ա�޸ĺ������ 
     for(i=0;i<1;i++){
		fscanf(fp4,"%d",&s2[i].age);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(BLACK);       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%d",s2[i].age);
		outtextxy(573, 310,str1);
	}
    fclose(fp4);
      
     while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);  //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
		    if (msg.x > 720 && msg.x < 780 && msg.y >200 && msg.y < 240)    
				{
					
					edit1();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >250 && msg.y < 295)   
				{
					
					edit2();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >305 && msg.y < 340)   
				{
					
					edit3();
				}
}
      if(msg.vkcode==VK_ESCAPE )
      {
      	sportman2();
	  }


}
}


void sportman2()
{
	title();
	 
	RECT r5 = {0,0,250,800};
	RECT r6 = {0,0,700,800};
	RECT r7 = {0,0,1150,800};
	RECT r8 = {0,0,1600,800};
	RECT r15 = {0,0,1830,870};
	
	settextstyle(25,0,"Times New Roman");
	drawtext(_T("����"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("�Ա�"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("��Ŀ"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("����"), &r8, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	RECT r16 = {50,250,500,350};
	RECT r17 = {85,250,500,350};
	RECT r18 = {120,250,500,350};
	RECT r19 = {155,250,500,350};
	settextstyle(34,0.5,"����");
	settextcolor(RGB(255,48,48)); 
	drawtext("��",&r16,DT_VCENTER | DT_SINGLELINE); 
	settextcolor(RGB(238,44,44));
	drawtext("Ա",&r17,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(238,59,59));
	drawtext("��",&r18,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(205,51,51));
	drawtext("Ϣ",&r19,DT_VCENTER | DT_SINGLELINE);
	setfillcolor(RGB(0, 191, 255));
	solidrectangle(333,200,666,250);
	setfillcolor(RGB(30, 144, 255));
	solidrectangle(0,200,333,250);
    solidrectangle(666,200,1000,250);
		
	setlinecolor(WHITE);
	line(333,200,333,250);
	line(666,200,666,250);			
	RECT r1 = {0,0,350,450};
	RECT r2 = {0,0,1000,450};
	RECT r3 = {0,0,1650,450}; 
	RECT r4 = {0,0,250,600};
	
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("��Ŀ����"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("��Ա��Ϣ"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���а�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    settextcolor(BLACK);

	
	setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//�󷽿� 
	
	
	
	IMAGE img;//����һ������ͼ��ı���
	loadimage(&img, "./Chinese.jpg",45,36);
	putimage(775, 420, &img);//�ڴ����д�ӡͼ��
	
	FILE *fp = fopen("./name1.txt","r"); //��ȡ���˶�Ա��Ϣ 
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
	 
	for(i=0;i<11;i++){
		fread(&s1[i],sizeof(s1[0]),11,fp1);
	}
    
    
    char str[100];
    int j,k;
    j = k = 300;
    RECT r10 = {0, 330, 1000, 1000};
    RECT r11 = {0, 470, 700, 1500};
    RECT r12 = {158, 425, 1000,1500};
    j = 465;
	for(i=0;i<8;i++) //���ı����ݶ��뵽�ַ�������� 
	{
		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
		
		sprintf(str,"%s                           %s                           %s",s[i].name,s[i].gender,s[i].project1);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r11,DT_CENTER | DT_VCENTER ); 
		r11.top += 45;
		r11.bottom += 45;
		putimage(775, j, &img);
		j  = j + 45;
		
}
    fclose(fp1);
	drawtext("����", &r12,DT_CENTER | DT_VCENTER ); 
	 FILE *fp2 = fopen("./name.txt","r"); //��ȡ�޸ĺ��˶�Ա������ 
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
		outtextxy(92, 420,str1);
	}
	fclose(fp2); 
	FILE *fp3 = fopen("./gender.txt","r"); //��ȡ�˶�Ա�޸ĺ���Ա� 
    for(i=0;i<1;i++){
		fscanf(fp3,"%s",&s2[i].gender);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].gender);
		outtextxy(337, 420,str1);
	}
    fclose(fp3);
	settextcolor(BLUE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("�鿴"), &r15, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);   //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 0 && msg.x <= 333 && msg.y >= 200 && msg.y <= 250)   
				{	   
                     	cleardevice();
					    Project();
				}
				
			if (msg.x >= 666 && msg.x <= 999 && msg.y >= 200 && msg.y <= 250)   
				{
					   cleardevice();
					   rank();
					   break;
				}	
				
			
		}
		ExMessage msg1;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg1.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg1.x >= 890 && msg1.x <= 940 && msg1.y >= 420 && msg1.y <= 470)   
				{
					sportman(); 
					break; 
}
}
flushmessage();

if(msg1.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }	  
}

}
