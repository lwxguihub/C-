#include "data.h"

void sportman1()
{
	    //��ȡ�ļ� 
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
	
	IMAGE img;
    setbkmode(TRANSPARENT);
    loadimage(&img, "./Chinese.jpg",54,36);
	putimage(720, 150, &img);
	
	
	
	RECT r1 = {0,0,1200,350};	
settextcolor(BLACK);
	settextstyle(25,0,"����");
	drawtext(_T("2022"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
/*	//RECT r2 = {0,0,1200,450};
	RECT r3 = {0,0,1200,550}; 
	RECT r4 = {0,0,1200,650};
	
    //drawtext(_T("С��"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("��"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("23"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);*/
     
     
    
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
     
     
     setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(620,200,720,240);
	fillrectangle(600,250,720,295);
	fillrectangle(598,305,720,340);
     while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);  //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
		    if (msg.x > 720 && msg.x < 780 && msg.y >200 && msg.y < 240)   //��������ҳ��һ���������ڵľ������� 
				{
					
					edit1();
	
	//InputBox(si, 10, "�޸�����");
	//settextcolor(BLACK);
	//settextstyle(25,0,"����");
	//outtextxy(570,210,si);
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >250 && msg.y < 295)   //��������ҳ��һ���������ڵľ������� 
				{
					
					edit2();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >305 && msg.y < 340)   //��������ҳ��һ���������ڵľ������� 
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


