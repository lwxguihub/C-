#include "data.h"

void menu4()
{
	title();
	int flag = 1;
    
	while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		rank();  //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 0 && msg.x <= 500 && msg.y >= 200 && msg.y <= 250)   //��������ҳ��һ���������ڵľ������� 
				{
					    flag = 1;
					    setfillcolor(RGB(0, 191, 255));
		                solidrectangle(0,200,500,250);
                        setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(500,200,1000,250);                    	
                     	cleardevice();
					    menu4();
				}
			if (msg.x >= 500 && msg.x <= 1000 && msg.y >= 200 && msg.y <= 250)   //��������ҳ��һ���������ڵľ������� 
				{
					   flag = 2;
					   setfillcolor(RGB(0, 191, 255));
	                	solidrectangle(500,200,1000,250);
	                	setfillcolor(RGB(30, 144, 255));
	                	solidrectangle(0,200,500,250);
                    	cleardevice();
					   sportman3();
					   break;
				}	
			
		}
	
	if(flag == 1)
	{
		setfillcolor(RGB(0, 191, 255));
		                solidrectangle(0,200,500,250);
                        setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(500,200,1000,250);
    	
	}
	if(flag == 2)
	{
		setfillcolor(RGB(0, 191, 255));
	                	solidrectangle(500,200,1000,250);
	                	setfillcolor(RGB(30, 144, 255));
	                	solidrectangle(0,200,500,250);
	}

	setlinecolor(WHITE);
	line(500,200,500,250);
	RECT r1 = {0,0,500,450};
	RECT r2 = {0,0,1500,450};
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("���а�"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("��Ա��Ϣ"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }
}
}
