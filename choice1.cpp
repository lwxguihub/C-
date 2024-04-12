#include "data.h"

void choice1()//选择运动员/国家队/管理员 
{
	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//获取窗口句柄函数；即窗口名字  
	SetWindowText(hn,"冬奥会奖牌榜");//修改窗口名字函数
	menu1(); 
	int VK_COUNT = 0;		//用于辅助 ↑方向和 ↓方向 
	while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 270 && msg.x <= 760 && msg.y >= 390 && msg.y <= 470)   //左键点击主页第一个功能所在的矩形区域 
				{
					login1();   
					cleardevice();  
					//login();
					cleardevice();  
					Project();     //显示主界面   
				}
			if (msg.x >= 270 && msg.x <= 760 && msg.y >= 570 && msg.y <= 650)   //左键点击主页第一个功能所在的矩形区域 
				{
					login1();   
					cleardevice();  
					flushmessage(); 
					Project1();      //显示主界面  
				}	
			if (msg.x >= 270 && msg.x <= 760 && msg.y >= 760 && msg.y <= 830)   //左键点击主页第一个功能所在的矩形区域 
				{
					login1();    
					 cleardevice();  
					flushmessage(); 
					menu5();  //显示主界面   
					
				}	
		}
		/*else if(msg.vkcode==VK_DOWN){    //按键盘  ↓ 键选择功能 ， VK_DOWN 虚拟键码，具体可百度 
				VK_COUNT = (VK_COUNT+1)%4;   //VK_COUNT 自定义变量，用于计数，统计按键多少次 
				switch(VK_COUNT){
					case 0:					//选择主页第一个功能 
						 menu1();
						setlinecolor(LIGHTBLUE);  //边框线设置为蓝色 
						setlinestyle(PS_SOLID, 5);  //边框宽度为 5 
						rectangle(270, 390, 760, 470); // 在指定位置画一个矩形边框，	
						break;
					case 1:				//选择主页第二个功能 ，（未实现）
					    menu1();
						setlinecolor(LIGHTBLUE);
						setlinestyle(PS_SOLID, 5);
						rectangle(270, 570, 760, 650);
						break; 
		
					case 2:			//选择主页第三个功能 ，（未实现）
						menu1();
						setlinecolor(LIGHTBLUE);
						setlinestyle(PS_SOLID, 5);
						rectangle(270, 760, 760, 830); 
						break;
				}
				Sleep(200);	
		}else if(msg.vkcode==VK_UP){     //按键盘  ↑ 键选择功能 
				VK_COUNT = (VK_COUNT+3)%4;
				switch(VK_COUNT){
				case 0:         //选择主页第一个功能 
					menu1();
					setlinecolor(LIGHTBLUE);
					setlinestyle(PS_SOLID, 5);
					rectangle(270, 390, 760, 470);
					break;
				case 1:     //选择主页第二个功能 ，（未实现）
				menu1();
					setlinecolor(LIGHTBLUE);
					setlinestyle(PS_SOLID, 5);
					rectangle(270, 570, 760, 650);
					break;
				case 2:    //选择主页第三个功能 ，（未实现）
				menu1();
					setlinecolor(LIGHTBLUE);
					setlinestyle(PS_SOLID, 5);
					rectangle(270, 760, 760, 830); 
					break;
				}
				Sleep(200);   //按键延迟 
	}
	else if(msg.vkcode==VK_RETURN)  //按键盘 回车键 
			{
				switch(VK_COUNT)  //根据选择，进入相应的功能 
				{
					case 0: 
						login1(); 
						cleardevice(); 
						Project();
						flushmessage();
						break;
	     			case 1:  		
					    login1(); 
						cleardevice();  
						Project1(); 
						flushmessage();
						break; 
					case 2:   
				    	login1(); 
						cleardevice(); 						
						menu5();
						break;
					default:
						break;	
				}
			} */
}
}
