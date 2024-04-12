#include "data.h"

void rank1()
{
	title();
	int j,k,flag = 3;
	FILE *fp = fopen("./rank.txt","r");
	med s[30];
	int i;
	//格式化读取文本文件 
	for(i=0;i<28;i++){
		fscanf(fp,"%s%d%d%d%d",&s[i].country,&s[i].Au,&s[i].Ag,&s[i].Cu,&s[i].all);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./rank.dat","wb");
	fwrite(s,sizeof(s[0]),28,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./rank.dat","rb");
	med s1[30];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<27;i++){
		fread(&s1[i],sizeof(s1[0]),28,fp1);
	}

    
    
	setbkmode(TRANSPARENT);
	setfillcolor(RGB(70,130,180));
	fillrectangle(0,344,165,392);//排行 
	fillrectangle(166,344,331,392);//国家 
	setfillcolor(RGB(255, 215, 0));
	fillrectangle(332,344,497,392);//金 
	setfillcolor(RGB(207, 207, 207));
	fillrectangle(498,344,663,392);//银 
	setfillcolor(RGB(205, 129, 98));
	fillrectangle(664,344,829,392);//铜 
	setfillcolor(RGB(70,130,180));
	fillrectangle(830,344,1000,392);//总数 
	settextstyle(25,0,"宋体");
	
	RECT r3 = {0,344,165,392};//300-252 = 48
	RECT r4 = {166,344,331,392};
	RECT r5 = {332,344,497,392};
	RECT r6 = {498,344,663,392};
	RECT r7 = {664,344,829,392};
	RECT r8 = {830,344,1000,392};
	
	
	//fillrectangle(0,300,165,348);
	//fillrectangle(166,300,331,348);
	int x = 0,y = 300;
	int x1,y1,count;
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
	
	
	
	drawtext("排名",&r3,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("国家",&r4,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("金",&r5,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("银",&r6,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("铜",&r7,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("总数",&r8,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	
	
	RECT r9 = {25,250,500,350};
	RECT r10 = {60,250,500,350};
	RECT r11 = {95,250,500,350};
	RECT r12 = {130,250,500,350};
	RECT r13 = {165,250,500,350};
	RECT r14 = {200,250,500,350};
	settextstyle(34,0,"宋体");
	settextcolor(RED); 
	drawtext("奥",&r9,DT_VCENTER | DT_SINGLELINE); 
	settextcolor(RGB(255,69,0));
	drawtext("运",&r10,DT_VCENTER | DT_SINGLELINE);
	settextcolor(YELLOW);
	drawtext("会",&r11,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(50,205,50));
	drawtext("排",&r12,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(0,191,255));
	drawtext("行",&r13,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(132,112,255));
	drawtext("榜",&r14,DT_VCENTER | DT_SINGLELINE);
	
	RECT r15 = {400,870,800,900};
	settextcolor(BLACK);
	settextstyle(15,0,"宋体");
	drawtext("提示：‘←’向左 or ‘→’向右",&r15,DT_VCENTER | DT_SINGLELINE);
	
	 //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		
	char si[5];
	settextcolor(WHITE);
	j = 400;
	for(i=11;i<21;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
	
	char str[100];
    
    j = k = 300;
    RECT r = {140, 400, 1000, 1000};
    RECT r1 = {0, 850, 1100, 1100};
    char input;
    	for(i=10;i<20;i++)
	{
		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //设置字体颜色 
		
		sprintf(str,"%s                %d                       %d                         %d                        %d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
		
		//settextstyle(15,0,_T("Times New Roman"));
		//drawtext(_T("请按esc键返回上一级,按“←”或者“→”翻页"), &r1, DT_CENTER | DT_VCENTER );
		
		/*if(i==19)
		{
			input=_getch();
			if(input == 77)
			{
			
			
			settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //设置字体颜色 
		
		sprintf(str,"%d                      %s                         %d                      %d                     %d                    %d",i+1,s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER ); 
		r.top += 25;
		r.bottom += 25;
		
		settextstyle(15,0,_T("Times New Roman"));
		drawtext(_T("请按esc键返回上一级,按“←”或者“→”翻页"), &r1, DT_CENTER | DT_VCENTER );
				 
			}
			if(input == 75)
			{
				goto a;
			}
			
		}*/

}
while (true)
	{
		ExMessage msg,msg1;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);  
		msg1 = getmessage(EM_MOUSE|EM_KEY); //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 0 && msg.x <= 333 && msg.y >= 200 && msg.y <= 250)   //左键点击主页第一个功能所在的矩形区域 
				{
					    flag = 1;
					    setfillcolor(RGB(0, 191, 255));
		                solidrectangle(0,200,333,250);
                        setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(333,200,1000,250);
                     	cleardevice();
					    menu2();
				}
			if (msg.x >= 333 && msg.x <= 666 && msg.y >= 200 && msg.y <= 250)   //左键点击主页第一个功能所在的矩形区域 
				{
					   flag = 2;
					   setfillcolor(RGB(0, 191, 255));
	                	solidrectangle(333,200,666,250);
	                	setfillcolor(RGB(30, 144, 255));
	                	solidrectangle(0,200,333,250);
                    	solidrectangle(666,200,1000,250);
                    	cleardevice();
					   sportman2();
					   break;
				}	
			if (msg.x >= 666 && msg.x <= 999 && msg.y >= 200 && msg.y <= 250)   //左键点击主页第一个功能所在的矩形区域 
				{
					   flag = 3;
					   setfillcolor(RGB(0, 191, 255));
		               solidrectangle(666,200,1000,250);
	                	setfillcolor(RGB(30, 144, 255));
                    	solidrectangle(0,200,666,250);
					   cleardevice();
					   rank();
					   break;
				}	
				
			
		}
	
	if(flag == 1)
	{
		setfillcolor(RGB(0, 191, 255));
		solidrectangle(0,200,333,250);
        setfillcolor(RGB(30, 144, 255));
    	solidrectangle(333,200,1000,250);
	}
	if(flag == 2)
	{
		setfillcolor(RGB(0, 191, 255));
		solidrectangle(333,200,666,250);
		setfillcolor(RGB(30, 144, 255));
		solidrectangle(0,200,333,250);
    	solidrectangle(666,200,1000,250);
	}
	if(flag == 3)
	{
		setfillcolor(RGB(0, 191, 255));
		solidrectangle(666,200,1000,250);
		setfillcolor(RGB(30, 144, 255));
    	solidrectangle(0,200,666,250);
	}
	
	setlinecolor(WHITE);
	line(333,200,333,250);
	line(666,200,666,250);
	
	RECT r1 = {0,0,350,450};
	RECT r2 = {0,0,1000,450};
	RECT r3 = {0,0,1650,450}; 
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("项目介绍"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("队员信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("排行榜"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
	flushmessage();
	
	if(msg1.vkcode == VK_RIGHT)
    {
    	
    	rank2();
	}
	if(msg1.vkcode == VK_LEFT)
    {
    	
    	rank();
	}
          if(msg.vkcode==VK_ESCAPE )
          {
          	cleardevice();
          	choice1();
		  }
	
	
		
}
 } 
