#include "data.h"

void choice3()
{
	cleardevice();  
	flushmessage(); 
	title();
	setfillcolor(RGB(135,206,255));
	
	solidroundrect(300,400,700,500,10,10);
	solidroundrect(300,600,700,700,10,10);
	
	//RECT r1 = {300,400,700}
	
	
	while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);   //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 300 && msg.x <= 700 && msg.y >= 400 && msg.y <= 500)   //��������ҳ��һ���������ڵľ������� 
				{
					//login();   //��ʾ������   
					cleardevice();  
					//login();
					cleardevice();  
					menu3();
					//fillrectangle();
					//fillrectangle(270, 390, 760, 470);      
				}
			if (msg.x >= 300 && msg.x <= 700 && msg.y >= 600 && msg.y <= 700)   //��������ҳ��һ���������ڵľ������� 
				{
					//login();   //��ʾ������   
					cleardevice();  
					flushmessage(); 
					
					//menu3();     
				}	
		
	}
}
}
