#include "data.h"
#define MAX_SIZE 11000

void Project()
{
     title();
	int flag = 1; 
	setfillcolor(RGB(0, 191, 255));
	solidrectangle(0,200,333,250);
    setfillcolor(RGB(30, 144, 255));
    solidrectangle(333,200,1000,250);
    setlinecolor(WHITE);
	line(333,200,333,250);
	line(666,200,666,250);
	 
	 setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//�󷽿� 
	RECT r1 = {0,0,350,450};
	RECT r2 = {0,0,1000,450};
	RECT r3 = {0,0,1650,450}; 
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("��Ŀ����"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("��Ա��Ϣ"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("���а�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
	
	RECT r4 = {0,0,270,600};

	settextstyle(50,0.5,"Times New Roman");
	 settextcolor(RGB(0,206,209));
	drawtext(_T("��Ŀ����"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
 
	char file_name[10000]; //��ȡ�ļ���ʾ��Ŀ���� 
    char str[MAX_SIZE];
    FILE *fp;
    fp=fopen("project.txt", "r");
    fscanf(fp,"%s",&file_name);  
	 rewind (fp); //��fp��ָ�ļ��Ķ�дλ�õ���Ϊ�ļ���ʼ��
	 int j = 400;
    while (fgets(str,MAX_SIZE,fp) !=NULL) //��ȡ�ļ������ﲻΪ�ռ���ѭ�� 
    {
        settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(30,144,255));       //����������ɫ 
		setbkmode(TRANSPARENT);  
		outtextxy(70, j,str); //���ַ����������Ļ
		j = j+23;
    }
	fclose(fp);
	 
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
			if (msg.x >= 333 && msg.x <= 666 && msg.y >= 200 && msg.y <= 250)   
				{
					   
                    	cleardevice();
					   sportman2();
					   break;
				}	
			if (msg.x >= 666 && msg.x <= 999 && msg.y >= 200 && msg.y <= 250)   
				{

					   cleardevice();
					   rank();
					   break;
				}				
		}	
          if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }		
}
}

void Project1()
{
    title();
    setfillcolor(RGB(0, 191, 255));
	solidrectangle(0,200,333,250);
    setfillcolor(RGB(30, 144, 255));
    solidrectangle(333,200,1000,250);
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
    
	setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//�󷽿� 
	
	RECT r4 = {0,0,270,600};

	settextstyle(50,0.5,"Times New Roman");
	 settextcolor(RGB(0,206,209));
	drawtext(_T("��Ŀ����"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
 
	char file_name[10000]; //��ȡ�ļ���ʾ��Ŀ���� 
    char str[MAX_SIZE];
    FILE *fp;
    fp=fopen("project.txt", "r");
    fscanf(fp,"%s",&file_name);  
	 rewind (fp); //��fp��ָ�ļ��Ķ�дλ�õ���Ϊ�ļ���ʼ��
	 int j = 400;
    while (fgets(str,MAX_SIZE,fp) !=NULL)
    {
        settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(30,144,255));       //����������ɫ 
		setbkmode(TRANSPARENT);  
		outtextxy(70, j,str);//���ַ����������Ļ
		j = j+23;
    }
    fclose(fp);	 

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
				
			
		}	
          if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }
	
	
		
}


}
