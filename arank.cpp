#include "data.h"
int Co3 = 28;
void arank1()
{
	title();
	int F,a,i,j,k,x1,y1,count,x,y,F1,Fi;
	Fi = 0;
	F = 1;
	char si1[5];
	char si[5];
	char sou[100];
	setfillcolor(RGB(0, 191, 255));	
	solidrectangle(0,200,333,250);
	solidrectangle(333,200,666,250);
    setfillcolor(RGB(30, 144, 255));
    solidrectangle(666,200,1000,250);
    setlinecolor(WHITE);
	line(333,200,333,250);
	line(666,200,666,250);
	RECT r1= {0,200,333,250};
	RECT r2= {333,200,666,250};
	RECT r3= {666,200,1000,250};
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("��Ŀ����"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���Ҷ���Ϣ"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���а�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
       
    setbkmode(TRANSPARENT);
	setfillcolor(RGB(70,130,180));
	fillrectangle(0,344,165,392);//���� 
	setfillcolor(RGB(147,112,219));
	fillrectangle(166,344,331,392);//���� 
	setfillcolor(RGB(255, 215, 0));
	fillrectangle(332,344,497,392);//�� 
	setfillcolor(RGB(207, 207, 207));
	fillrectangle(498,344,663,392);//�� 
	setfillcolor(RGB(205, 129, 98));
	fillrectangle(664,344,829,392);//ͭ 
	setfillcolor(RGB(70,130,180));
	fillrectangle(830,344,1000,392);//���� 
	settextstyle(25,0,"����");
	
	RECT r16 = {0,344,165,392};//300-252 = 48
	RECT r17 = {166,344,331,392};
	RECT r18 = {332,344,497,392};
	RECT r19 = {498,344,663,392};
	RECT r7 = {664,344,829,392};
	RECT r8 = {830,344,1000,392};
		
	
	drawtext("����",&r16,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("����",&r17,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("��",&r18,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("��",&r19,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("ͭ",&r7,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("����",&r8,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	
	
	RECT r9 = {25,250,500,350};
	RECT r10 = {60,250,500,350};
	RECT r11 = {95,250,500,350};
	RECT r12 = {130,250,500,350};
	RECT r13 = {165,250,500,350};
	RECT r14 = {200,250,500,350};
	settextstyle(34,0,"����");
	settextcolor(RED); 
	drawtext("��",&r9,DT_VCENTER | DT_SINGLELINE); 
	settextcolor(RGB(255,69,0));
	drawtext("��",&r10,DT_VCENTER | DT_SINGLELINE);
	settextcolor(YELLOW);
	drawtext("��",&r11,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(50,205,50));
	drawtext("��",&r12,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(0,191,255));
	drawtext("��",&r13,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(132,112,255));
	drawtext("��",&r14,DT_VCENTER | DT_SINGLELINE);
	
	RECT r15 = {400,870,800,900};
	settextcolor(BLACK);
	settextstyle(15,0,"����");
	drawtext("��ʾ������������ or ����������",&r15,DT_VCENTER | DT_SINGLELINE);
	
	  
    setlinecolor(BLACK);
	setfillcolor(RGB(224,255,255));
	fillroundrect(790,305,990,340,10,10);
	RECT r21= {800,305,990,340};
	settextstyle(25,0.5,"Times New Roman");
	settextcolor(BLACK);
	drawtext(_T("������"), &r21, DT_VCENTER | DT_SINGLELINE);
	
	setlinecolor(WHITE);
	x = 0,y = 300;	
	k = 1;
	count = 0;
	for(y = 393;y <= 848;y+=48)
	{
		y1 = y+48;
		for(x = 0;x <= 1000;x+=165)
		{
			if(k%2==0)
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 235));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			else
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 250));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			k++;
			count++;
		}
		k++;
		count++;
	}
	FILE *fp = fopen("./rank.txt","r");
	med s[50];
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<Co3;i++){
		fscanf(fp,"%s%d%d%d%d",&s[i].country,&s[i].Au,&s[i].Ag,&s[i].Cu,&s[i].all);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./rank.dat","wb");
	fwrite(s,sizeof(s[0]),Co3,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./rank.dat","rb");
	med s1[50];
	//fread(s1,sizeof(s[0]),8,fp1);  //��ȡ�������ļ���һ�ζ�ȡ�������� 
	
	//��ȡ�������ļ���һ�ζ�ȡһ�����ݡ� 
	for(i=0;i<Co3;i++){
		fread(&s1[i],sizeof(s1[0]),Co3,fp1);
	}
	
    char str[100];
	for(i=0;i<Co3;i++)
	{
			sprintf(str,"%s%d%d%d%d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
	}
	
a: 
    if(F==1)
	{
	x = 0,y = 300;	
	k = 1;
	count = 0;
	for(y = 393;y <= 848;y+=48)
	{
		y1 = y+48;
		for(x = 0;x <= 1000;x+=165)
		{
			if(k%2==0)
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 235));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			else
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 250));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			k++;
			count++;
		}
		k++;
		count++;
	}
  
    
    j = k = 300;
    RECT r = {10, 400, 1000, 1000};
  
  for(i=0;i<10;i++)
	{
	//	if(i>=28)
	//	{
	//		break;
	//	}
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //����������ɫ 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
	//	F1++;
}
    
	settextcolor(WHITE);
	j = 400;
	for(i=1;i<=10;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
	 } 
   if(F==2)
   {
   	x = 0,y = 300;	
	k = 1;
	count = 0;
	for(y = 393;y <= 848;y+=48)
	{
		y1 = y+48;
		for(x = 0;x <= 1000;x+=165)
		{
			if(k%2==0)
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 235));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			else
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 250));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			k++;
			count++;
		}
		k++;
		count++;
	}
  
    
    j = k = 300;
    RECT r = {10, 400, 1000, 1000};
  
  for(i=10;i<20;i++)
	{
	//	if(i>=28)
	//	{
	//		break;
	//	}
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //����������ɫ 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
	//	F1++;
}
    
	settextcolor(WHITE);
	j = 400;
	for(i=11;i<=20;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
   }
   if(F==3)
   {
   	x = 0,y = 300;	
	k = 1;
	count = 0;
	for(y = 393;y <= 848;y+=48)
	{
		y1 = y+48;
		for(x = 0;x <= 1000;x+=165)
		{
			if(k%2==0)
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 235));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			else
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 250));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			k++;
			count++;
		}
		k++;
		count++;
	}
  
    
    j = k = 300;
    RECT r = {10, 400, 1000, 1000};
  for(i=20;i<Co3;i++)
	{
	//	if(i>=28)
	//	{
	//		break;
	//	} 
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //����������ɫ 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
	//	F1++;
}
    
	settextcolor(WHITE);
	j = 400;
	for(i=21;i<=Co3;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
   }
   fclose(fp1); 
   while (true)
	{
		ExMessage msg,msg1;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		msg1 = getmessage(EM_MOUSE|EM_KEY); 
		if(msg.message==WM_LBUTTONDOWN)
		{
			if(msg.x >= 0 && msg.x <= 333 && msg.y >= 200 && msg.y <= 250)
			{
				Project1();
			}
				if(msg.x >= 333 && msg.x <= 666 && msg.y >= 200 && msg.y <= 250)
			{
				team();
			}
			if(msg.x>=790&&msg.x<=990&&msg.y>=305&&msg.y<=340)
			{
					Fi = 1;
				InputBox(sou, 10, "�������������"); //��ѯ�������а� 
				for(i=0;i<28;i++)   //���й����ж�һ�� 
				{
					if(strcmp(s1[i].country,sou)==0) //�ж��Ƿ���ڴ˹��� 
					{
					//	F1 = i;
	x = 0,y = 300;	
	k = 1;
	count = 0;
	for(y = 393;y <= 848;y+=48) //���¸��Ǵ�ף��������൱������ 
	{
		y1 = y+48;
		for(x = 0;x <= 1000;x+=165)
		{
			if(k%2==0)
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 235));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			else
			{
				x1 = x + 165;
			setfillcolor(RGB(135, 206, 250));
			fillrectangle(x,y,x1,y1);
			x++;
			}
			k++;
			count++;
		}
		k++;
		count++;
	}
    	
	     settextcolor(WHITE);
		 sprintf(si1, "%d", i+1);
		 outtextxy(70, 400, si1);
         RECT r = {10, 400, 1000, 1000};
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //����������ɫ 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all); //�����ѯ�����а� 
		
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  	
		break;
					}
		else if(strcmp(s1[i].country,sou)!=0 && i == 27)
			{
					HWND hn = GetHWnd();//��ȡ���ھ��������
	                        SetWindowText(hn, "��Ա");//�޸Ĵ������ֺ���
                          	MessageBox(hn, "���޴˹���", "��ʾ", MB_OKCANCEL);//��Ϣ�򵯳����ú���
	                        adrank1();
			 } 
					
				 } 
			}
		}
        if(msg.vkcode==VK_RIGHT)
		 {	
		    F++;
		    if(F>3)
		    {
		    	F = 1;
			}		
		 	goto a;
		 }
		 if(msg.vkcode==VK_LEFT)
		 {
		 	F--;
		 	if(F<=0)
		 	{
		 		F = 3;
			 }
		 	goto a;
		 }
		 	 if(msg1.vkcode==VK_ESCAPE && Fi == 0)
          {
          	choice1();
		  }	
		  if(msg1.vkcode==VK_ESCAPE && Fi == 1)
          {
          	arank1();
		  }			
}
}

