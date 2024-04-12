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
	drawtext(_T("项目介绍"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("国家队信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("排行榜"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
	int i,j,count,a,count1,count2,F;
	F = 0;
	int flag = 2;
	char si[100]; 
	char str[2000];
	char sou[100];
	count = 0; //记录换页打印数 
	count1 = 1; //换页数 
	count2 = 1; //输出排名数 
	 setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//大方框 
	
	RECT r4 = {0,0,320,600};
	RECT r5 = {0,0,320,800};
	RECT r6 = {0,0,1000,800};
	RECT r7 = {600,0,1000,920};

	settextstyle(50,0.5,"Times New Roman");
	settextcolor(RGB(255,64,64));
	drawtext(_T("参赛队信息"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	settextstyle(45,0.5,"Times New Roman");
	 settextcolor(BLACK);
	drawtext(_T("序号"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("队名"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	settextstyle(30,0.5,"Times New Roman");
	 settextcolor(BLUE);
	drawtext(_T("详情"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	
	FILE *fp = fopen("./team.txt","r");
	med s[100];
	//格式化读取国家队
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
	
	//点击方向键跳转到此页面 
a:   F = 0; //作为按 esc 判断是否跳转到主页面或返回操作 
	RECT r = {100,450,900,1000}; 
     for(i=count;i<7*count1;i++) 
	{
		
		settextstyle(35,0.5,_T("Times New Roman"));
		settextcolor(RGB(138,43,226));       //设置字体颜色 
		
		sprintf(str,"%s",s1[i].teams);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 60;
		r.bottom += 60;
		count++;
	if(count>79) //超过79个国家则结束输出 
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
        if(count2>=81) ///超过80个排名则结束输出 
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
	drawtext(_T("搜索："), &r21, DT_VCENTER | DT_SINGLELINE);
	
	fclose(fp1); 
	while (true)
	{
		ExMessage msg,msg1;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
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
			if(msg.x>=730&&msg.x<=860&&msg.y>=435&&msg.y<=480)	//点击详情后跳转 
			{
		           menu3();
			}
			 if(msg.x>=750&&msg.x<=950&&msg.y>=305&&msg.y<=340)//搜索 
	         {
	         		InputBox(sou, 10, "请输入队名");
	         		for(i=0;i<80;i++)
	         		{
	         			if(strcmp(sou,s1[i].teams)==0) //判断输出的队名在不在文件中 
	         			{
	         				setfillcolor(WHITE);
	                        solidrectangle(110,450,650,845);
	                        RECT r = {100,450,900,1000};
	                settextstyle(35,0.5,_T("Times New Roman"));
	            	settextcolor(RGB(28,134,238));       //设置字体颜色 
	             	sprintf(str,"%s",s1[i].teams);
	             	drawtext(_T(str), &r,DT_CENTER | DT_VCENTER ); 
	             	settextstyle(40,0.5,"Times New Roman");
	                settextcolor(BLACK);
		            sprintf(si, "%d", i+1);
		            outtextxy(140, 450, si);
		            F = 1;
		            break;
						}
						if(i==79&&strcmp(s1[i].teams,sou)!=0) //查询了79次同时没有找到则没有此队 
						{
							HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "国家队");//修改窗口名字函数
                          	MessageBox(hn, "查询不到此队", "提示", MB_OKCANCEL);//消息框弹出设置函数
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
    	count1++; //页码数增加 
    	if(count>80) //大于国家数则重置定义 
    	{
    		count = 0;
    		count1 = 1;
    		count2 = 1;
    		
		}
    	goto a;	//跳转到下一个页面 
	}	
	if(msg.vkcode==VK_LEFT)
    {
    	 setfillcolor(WHITE);
	     solidrectangle(110,450,650,845);
	    count1--; 
    	count = count - 14; //一个页面7个国家，返回则减去数量7的两倍 
    	count2 = count2 - 14; //同理 
    	if(count1<=0) //在第一页计数小于零则重新刷新 
    	{
    		HWND hn = GetHWnd();//获取窗口句柄函数；
	        SetWindowText(hn, "提示");//修改窗口名字函数
            MessageBox(hn, "错误操作", "提示", MB_OKCANCEL);
            count = 0;
    		count1 = 1;
    		count2 = 1;
		}
    	goto a;
	}	
          if(msg1.vkcode==VK_ESCAPE && F == 0) //F判断记录是否是退出 
          {
          	choice1();
		  }	
		  if(msg1.vkcode==VK_ESCAPE && F == 1) //F判断搜索后返回上一层操作 
          {
          	team();
		  }	
}
}
