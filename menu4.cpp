#include "data.h"

void menu4()
{
	title();
	int flag = 1;
    
	while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		rank();  //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 0 && msg.x <= 500 && msg.y >= 200 && msg.y <= 250)   //左键点击主页第一个功能所在的矩形区域 
				{
					    flag = 1;
					    setfillcolor(RGB(0, 191, 255));
		                solidrectangle(0,200,500,250);
                        setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(500,200,1000,250);                    	
                     	cleardevice();
					    menu4();
				}
			if (msg.x >= 500 && msg.x <= 1000 && msg.y >= 200 && msg.y <= 250)   //左键点击主页第一个功能所在的矩形区域 
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
	drawtext(_T("排行榜"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("队员信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }
}
}
