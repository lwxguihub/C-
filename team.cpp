#include "data.h"

void team()
{
	title();
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
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("��Ŀ����"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���Ҷ���Ϣ"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���а�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
	int i,j,count,a,count1,count2,F;
	F = 0;
	int flag = 2;
	char si[100]; 
	char str[2000];
	char sou[100];
	count = 0; //��¼��ҳ��ӡ�� 
	count1 = 1; //��ҳ�� 
	count2 = 1; //��������� 
	 setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//�󷽿� 
	
	RECT r4 = {0,0,320,600};
	RECT r5 = {0,0,320,800};
	RECT r6 = {0,0,1000,800};
	RECT r7 = {600,0,1000,920};

	settextstyle(50,0.5,"Times New Roman");
	settextcolor(RGB(255,64,64));
	drawtext(_T("��������Ϣ"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	settextstyle(45,0.5,"Times New Roman");
	 settextcolor(BLACK);
	drawtext(_T("���"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("����"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	settextstyle(30,0.5,"Times New Roman");
	 settextcolor(BLUE);
	drawtext(_T("����"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	
	FILE *fp = fopen("./team.txt","r");
	med s[100];
	//��ʽ����ȡ���Ҷ�
	for(i=0;i<80;i++){
		fscanf(fp,"%s",&s[i].teams);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./team.dat","wb");
	fwrite(s,sizeof(s[0]),80,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./team.dat","rb");
	med s1[80];
	for(i=0;i<80;i++){
		fread(&s1[i],sizeof(s1[0]),80,fp1);
	}
	
	
	for(i=0;i<80;i++)
	{		
		sprintf(str,"%s",s1[i].teams);	
}
	
	//����������ת����ҳ�� 
a:   F = 0; //��Ϊ�� esc �ж��Ƿ���ת����ҳ��򷵻ز��� 
	RECT r = {100,450,900,1000}; 
     for(i=count;i<7*count1;i++) 
	{
		
		settextstyle(35,0.5,_T("Times New Roman"));
		settextcolor(RGB(138,43,226));       //����������ɫ 
		
		sprintf(str,"%s",s1[i].teams);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 60;
		r.bottom += 60;
		count++;
	if(count>79) //����79�������������� 
		{
			break;
		}
}
    for(i=count2,j = 0;i<=7*count1;i++)
	{
		settextstyle(40,0.5,"Times New Roman");
	    settextcolor(BLACK);
		sprintf(si, "%d", i);
        outtextxy(140, 450+j, si);
        j += 60;
        count2++;
        if(count2>=81) ///����80�������������� 
		{
			break;
		}
	}
	setlinecolor(BLACK);
	setfillcolor(RGB(224,255,255));
	fillroundrect(750,305,950,340,10,10);
	RECT r21= {760,305,950,340};
	settextstyle(25,0.5,"Times New Roman");
	settextcolor(BLACK);
	drawtext(_T("������"), &r21, DT_VCENTER | DT_SINGLELINE);
	
	fclose(fp1); 
	while (true)
	{
		ExMessage msg,msg1;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 0 && msg.x <= 333 && msg.y >= 200 && msg.y <= 250)   
				{
					  
                     	cleardevice();
					    Project1();
				}
			if (msg.x >= 333 && msg.x <= 666 && msg.y >= 200 && msg.y <= 250)   
				{
                    	cleardevice();
					   team();
					   break;
				}	
			if (msg.x >= 666 && msg.x <= 999 && msg.y >= 200 && msg.y <= 250)   
				{
					   cleardevice();
					   arank1();
					   break;
				}	
			if(msg.x>=730&&msg.x<=860&&msg.y>=435&&msg.y<=480)	//����������ת 
			{
		           menu3();
			}
			 if(msg.x>=750&&msg.x<=950&&msg.y>=305&&msg.y<=340)//���� 
	         {
	         		InputBox(sou, 10, "���������");
	         		for(i=0;i<80;i++)
	         		{
	         			if(strcmp(sou,s1[i].teams)==0) //�ж�����Ķ����ڲ����ļ��� 
	         			{
	         				setfillcolor(WHITE);
	                        solidrectangle(110,450,650,845);
	                        RECT r = {100,450,900,1000};
	                settextstyle(35,0.5,_T("Times New Roman"));
	            	settextcolor(RGB(28,134,238));       //����������ɫ 
	             	sprintf(str,"%s",s1[i].teams);
	             	drawtext(_T(str), &r,DT_CENTER | DT_VCENTER ); 
	             	settextstyle(40,0.5,"Times New Roman");
	                settextcolor(BLACK);
		            sprintf(si, "%d", i+1);
		            outtextxy(140, 450, si);
		            F = 1;
		            break;
						}
						if(i==79&&strcmp(s1[i].teams,sou)!=0) //��ѯ��79��ͬʱû���ҵ���û�д˶� 
						{
							HWND hn = GetHWnd();//��ȡ���ھ��������
	                        SetWindowText(hn, "���Ҷ�");//�޸Ĵ������ֺ���
                          	MessageBox(hn, "��ѯ�����˶�", "��ʾ", MB_OKCANCEL);//��Ϣ�򵯳����ú���
	                        team();
						}
							
					 }
			 }
			
		}
 
    flushmessage();
    if(msg.vkcode==VK_RIGHT)
    {
    setfillcolor(WHITE);
	solidrectangle(110,450,650,845);
    	count1++; //ҳ�������� 
    	if(count>80) //���ڹ����������ö��� 
    	{
    		count = 0;
    		count1 = 1;
    		count2 = 1;
    		
		}
    	goto a;	//��ת����һ��ҳ�� 
	}	
	if(msg.vkcode==VK_LEFT)
    {
    	 setfillcolor(WHITE);
	     solidrectangle(110,450,650,845);
	    count1--; 
    	count = count - 14; //һ��ҳ��7�����ң��������ȥ����7������ 
    	count2 = count2 - 14; //ͬ�� 
    	if(count1<=0) //�ڵ�һҳ����С����������ˢ�� 
    	{
    		HWND hn = GetHWnd();//��ȡ���ھ��������
	        SetWindowText(hn, "��ʾ");//�޸Ĵ������ֺ���
            MessageBox(hn, "�������", "��ʾ", MB_OKCANCEL);
            count = 0;
    		count1 = 1;
    		count2 = 1;
		}
    	goto a;
	}	
          if(msg1.vkcode==VK_ESCAPE && F == 0) //F�жϼ�¼�Ƿ����˳� 
          {
          	choice1();
		  }	
		  if(msg1.vkcode==VK_ESCAPE && F == 1) //F�ж������󷵻���һ����� 
          {
          	team();
		  }	
}
}
