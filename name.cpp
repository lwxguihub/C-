#include "data.h"

void name()
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
	//fread(s1,sizeof(s[0]),8,fp1);  //��ȡ�������ļ���һ�ζ�ȡ�������� 
	
	//��ȡ�������ļ���һ�ζ�ȡһ�����ݡ� 
	for(i=0;i<2;i++){
		fread(&s1[i],sizeof(s1[0]),2,fp1);
	}   
    char str[100];
    int j;
    j = 450;
	for(i=0;i<2;i++)
	{
		settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(30,144,255));       //����������ɫ 
		setbkmode(TRANSPARENT);  
		sprintf(str,"%s                                   %d                             %d                            %d",s1[i].project,s1[i].Au,s1[i].Ag,s1[i].Cu);
		outtextxy(230, j,str);
		
		j = j+50;
		
	}
	
	RECT r13 = {0,0,1200,350};
	settextcolor(BLACK);
	settextstyle(25,0,"����");
	drawtext(_T("2022"), &r13, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
     
     
     
    IMAGE img11;
    setbkmode(TRANSPARENT);
    loadimage(&img11, "./Chinese.jpg",54,36);
	putimage(720, 150, &img11);

     FILE *fp2 = fopen("./name.txt","r");
    FILE *fp3 = fopen("./gender.txt","r");
    FILE *fp4 = fopen("./age.txt","r");
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
		
     while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);  //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
		    if (msg.x > 720 && msg.x < 780 && msg.y >200 && msg.y < 240)   //��������ҳ��һ���������ڵľ������� 
				{
					
				//	edit4();
	//settextcolor(BLACK);
	//settextstyle(25,0,"����");
	//outtextxy(570,210,si);
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >250 && msg.y < 295)   //��������ҳ��һ���������ڵľ������� 
				{
				
				//	edit5();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >305 && msg.y < 340)   //��������ҳ��һ���������ڵľ������� 
				{
				
				//	edit6();
				}
}
      if(msg.vkcode==VK_ESCAPE )
      {
      	menu3();
	  }


}
    
}
