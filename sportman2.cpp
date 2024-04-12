#include "data.h"



void sportman2()
{
	title();
	int flag = 2;
	 
	RECT r5 = {0,0,250,800};
	RECT r6 = {0,0,700,800};
	RECT r7 = {0,0,1150,800};
	RECT r8 = {0,0,1600,800};
	RECT r15 = {0,0,1830,870};
	
	settextstyle(25,0,"Times New Roman");
	drawtext(_T("姓名"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("性别"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("项目"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("国家"), &r8, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	RECT r16 = {50,250,500,350};
	RECT r17 = {85,250,500,350};
	RECT r18 = {120,250,500,350};
	RECT r19 = {155,250,500,350};
	settextstyle(34,0.5,"宋体");
	settextcolor(RGB(255,48,48)); 
	drawtext("队",&r16,DT_VCENTER | DT_SINGLELINE); 
	settextcolor(RGB(238,44,44));
	drawtext("员",&r17,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(238,59,59));
	drawtext("信",&r18,DT_VCENTER | DT_SINGLELINE);
	settextcolor(RGB(205,51,51));
	drawtext("息",&r19,DT_VCENTER | DT_SINGLELINE);
	
	
	
	/*settextcolor(RED);
	settextstyle(25,0,"Times New Roman");
	drawtext(_T("小文"), &r9, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("男"), &r10, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("滑冰 冰壶"), &r11, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("小林"), &r12, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("女"), &r13, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("花样滑雪"), &r14, DT_CENTER | DT_VCENTER | DT_SINGLELINE);*/
	
	setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//大方框 
	
	
	
	IMAGE img;//创建一个加载图像的变量
	loadimage(&img, "./Chinese.jpg",45,36);
	//loadimage(&img2, "./Au.jpg",50,25);
	putimage(775, 420, &img);//在窗口中打印图像
/*	putimage(775, 460, &img);
	putimage(775, 500, &img);
	putimage(775, 540, &img);
	putimage(775, 580, &img);
	putimage(775, 620, &img);
	putimage(775, 660, &img);
	putimage(775, 700, &img);
	putimage(775, 740, &img);
	putimage(775, 780, &img);*/
	
	
	FILE *fp = fopen("./name1.txt","r");
	sport s[30];
	int i;
	//格式化读取文本文件 
	for(i=0;i<11;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),11,fp1);
	fclose(fp1);
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[30];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<11;i++){
		fread(&s1[i],sizeof(s1[0]),11,fp1);
	}

    
    char str[100];
    int j,k;
    j = k = 300;
    RECT r10 = {0, 330, 1000, 1000};
    RECT r11 = {0, 470, 700, 1500};
    RECT r12 = {158, 425, 1000,1500};
    j = 465;
	for(i=0;i<8;i++)
	{
		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //设置字体颜色 
		
		sprintf(str,"%s                           %s                           %s",s[i].name,s[i].gender,s[i].project1);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r11,DT_CENTER | DT_VCENTER ); 
		r11.top += 45;
		r11.bottom += 45;
		putimage(775, j, &img);
		//settextstyle(15,0,_T("Times New Roman"));
	//	drawtext(_T("请按esc键返回上一级,按“←”或者“→”翻页"), &r10, DT_CENTER | DT_VCENTER );
		j  = j + 45;
		
}
	drawtext("滑冰", &r12,DT_CENTER | DT_VCENTER ); 
	 FILE *fp2 = fopen("./name.txt","r");
    FILE *fp3 = fopen("./gender.txt","r");
	sport s2[5];
	//格式化读取文本文件 
	for(i=0;i<1;i++){
		fscanf(fp2,"%s",&s2[i].name);
	} 
	char str1[100];
    for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].name);
		outtextxy(92, 420,str1);
	}
    for(i=0;i<1;i++){
		fscanf(fp3,"%s",&s2[i].gender);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].gender);
		outtextxy(337, 420,str1);
	}
        
    setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(142,410,220,455);
	fillrectangle(363,410,450,455);
	
	while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
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
	RECT r4 = {0,0,250,600};
	
	
	
	/*RECT r9 = {0,0,250,900};
	RECT r10 = {0,0,700,900};
	RECT r11 = {0,0,1150,900};
	
	RECT r12 = {0,0,250,1000};
	RECT r13 = {0,0,700,1000};
	RECT r14 = {0,0,1150,1000};
	
	*/
	
	settextcolor(BLUE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("查看"), &r15, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("项目介绍"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("队员信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("排行榜"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    settextcolor(BLACK);
	
	

		ExMessage msg1;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg1.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg1.x >= 890 && msg1.x <= 940 && msg1.y >= 420 && msg1.y <= 470)   //左键点击主页第一个功能所在的矩形区域 
				{
					sportman();
					//rectangle(890,420,940,470); 
					break; 
}
}
flushmessage();

if(msg1.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }	  
}

}
