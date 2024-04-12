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
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 300 && msg.x <= 700 && msg.y >= 400 && msg.y <= 500)   //左键点击主页第一个功能所在的矩形区域 
				{
					//login();   //显示主界面   
					cleardevice();  
					//login();
					cleardevice();  
					menu3();
					//fillrectangle();
					//fillrectangle(270, 390, 760, 470);      
				}
			if (msg.x >= 300 && msg.x <= 700 && msg.y >= 600 && msg.y <= 700)   //左键点击主页第一个功能所在的矩形区域 
				{
					//login();   //显示主界面   
					cleardevice();  
					flushmessage(); 
					
					//menu3();     
				}	
		
	}
}
}
