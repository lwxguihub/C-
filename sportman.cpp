#include "data.h"

void sportman()
{ 

	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//获取窗口句柄函数；即窗口名字  
	SetWindowText(hn,"运动员信息");//修改窗口名字函数
	setbkmode(TRANSPARENT);
	IMAGE img;//创建一个加载图像的变量
	IMAGE img1,img2;
	loadimage(&img, "./body2.jpg",1000,900);
	loadimage(&img1, "./photo1.jpg",170,200);
	//loadimage(&img2, "./Au.jpg",50,25);
	putimage(0, 0, &img);//在窗口中打印图像
	//rectangle(155,155,175,205);
	RECT r1 = {0,0,1000,100};	
	RECT r2 = {0,0,1000,450};
	RECT r3 = {0,0,1000,550}; 
	RECT r4 = {0,0,1000,650};
	RECT r5 = {0,0,500,800};
	RECT r6 = {0,0,1500,450};//编辑 
	RECT r7 = {0,0,1500,550};
	RECT r8 = {0,0,1500,650};
	RECT r9 = {0,0,1000,350};
    //RECT r8 = {0,0,1500,650};
	
	settextcolor(BLACK);
	settextstyle(50,0,"宋体");
	drawtext(_T("运动员信息"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);	
    
	setlinecolor(BLACK);
	fillrectangle(100,100,900,800);//大方框 
	
	setlinecolor(BLACK);
	fillrectangle(150,150,250,300);//头像 
	putimage(150,150,&img1);
    
    settextcolor(BLACK);
	settextstyle(25,0,"宋体");
	drawtext(_T("ID："), &r9, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("姓名："), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("性别："), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("年龄："), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);;
    drawtext(_T("项目"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
	
	settextcolor(BLUE);
	settextstyle(15,0,"宋体");
    drawtext(_T("编辑"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("编辑"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("编辑"), &r8, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
    setfillcolor(RGB(255, 215, 0));
    solidcircle(450, 400, 20);//无边框填充
    setfillcolor(RGB(207, 207, 207));
    solidcircle(600, 400, 20);
    setfillcolor(RGB(205, 129, 98));
    solidcircle(750, 400, 20);
    
    RECT r10 = {400,304,500,500};
    RECT r11 = {500,103,700,700};
    RECT r12 = {600,1,900,800};
    
    settextcolor(BLACK);
	settextstyle(25,0,"宋体");
    drawtext(_T("G"), &r10, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("S"), &r11, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("B"), &r12, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
    sportman1();
}

void sportman1()
{
	    //读取运动员各项目奖牌 
	FILE *fp = fopen("./data.txt","r"); 
	med s[2];
	int i;
	//格式化读取文本文件 
	for(i=0;i<2;i++){
		fscanf(fp,"%s%d%d%d",&s[i].project,&s[i].Au,&s[i].Ag,&s[i].Cu);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./data1.dat","wb");
	fwrite(s,sizeof(s[0]),2,fp1);
	fclose(fp1);
	
	fp1 = fopen("./data1.dat","rb");
	med s1[8]; 
	for(i=0;i<2;i++){
		fread(&s1[i],sizeof(s1[0]),2,fp1);
	}   
    char str[100];
    int j;
    j = 450;
	for(i=0;i<2;i++) // 输出运动员参与的项目和金牌数量 
	{
		settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(30,144,255));       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str,"%s                                   %d                             %d                            %d",s1[i].project,s1[i].Au,s1[i].Ag,s1[i].Cu);
		outtextxy(230, j,str);
		
		j = j+50;
		
	}
	fclose(fp1);
	IMAGE img;
    setbkmode(TRANSPARENT);
    loadimage(&img, "./Chinese.jpg",54,36);
	putimage(720, 150, &img);
	
	
	
	RECT r1 = {0,0,1200,350};	
    settextcolor(BLACK);
	settextstyle(25,0,"宋体");
	drawtext(_T("2022"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

    FILE *fp2 = fopen("./name.txt","r"); //读取运动员修改后的姓名 
	sport s2[5];
	//格式化读取文本文件 
	for(i=0;i<1;i++){
		fscanf(fp2,"%s",&s2[i].name);
	} 
	char str1[100];
    for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(BLACK);       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].name);
		outtextxy(570, 205,str1);
	}
	fclose(fp2);
	FILE *fp3 = fopen("./gender.txt","r"); //读取运动员修改后的性别 
    for(i=0;i<1;i++){
		fscanf(fp3,"%s",&s2[i].gender);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(BLACK);       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%s",s2[i].gender);
		outtextxy(575, 255,str1);
	}
	fclose(fp3);
	FILE *fp4 = fopen("./age.txt","r"); //读取运动员修改后的年龄 
     for(i=0;i<1;i++){
		fscanf(fp4,"%d",&s2[i].age);
	} 
     for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(BLACK);       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str1,"%d",s2[i].age);
		outtextxy(573, 310,str1);
	}
    fclose(fp4);
      
     while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);  //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
		    if (msg.x > 720 && msg.x < 780 && msg.y >200 && msg.y < 240)    
				{
					
					edit1();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >250 && msg.y < 295)   
				{
					
					edit2();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >305 && msg.y < 340)   
				{
					
					edit3();
				}
}
      if(msg.vkcode==VK_ESCAPE )
      {
      	sportman2();
	  }


}
}


void sportman2()
{
	title();
	 
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
	RECT r4 = {0,0,250,600};
	
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("项目介绍"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("队员信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("排行榜"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    settextcolor(BLACK);

	
	setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//大方框 
	
	
	
	IMAGE img;//创建一个加载图像的变量
	loadimage(&img, "./Chinese.jpg",45,36);
	putimage(775, 420, &img);//在窗口中打印图像
	
	FILE *fp = fopen("./name1.txt","r"); //读取各运动员信息 
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
	for(i=0;i<8;i++) //将文本内容读入到字符串后输出 
	{
		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //设置字体颜色 
		
		sprintf(str,"%s                           %s                           %s",s[i].name,s[i].gender,s[i].project1);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r11,DT_CENTER | DT_VCENTER ); 
		r11.top += 45;
		r11.bottom += 45;
		putimage(775, j, &img);
		j  = j + 45;
		
}
    fclose(fp1);
	drawtext("滑冰", &r12,DT_CENTER | DT_VCENTER ); 
	 FILE *fp2 = fopen("./name.txt","r"); //读取修改后运动员的姓名 
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
	fclose(fp2); 
	FILE *fp3 = fopen("./gender.txt","r"); //读取运动员修改后的性别 
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
    fclose(fp3);
	settextcolor(BLUE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("查看"), &r15, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 0 && msg.x <= 333 && msg.y >= 200 && msg.y <= 250)   
				{	   
                     	cleardevice();
					    Project();
				}
				
			if (msg.x >= 666 && msg.x <= 999 && msg.y >= 200 && msg.y <= 250)   
				{
					   cleardevice();
					   rank();
					   break;
				}	
				
			
		}
		ExMessage msg1;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg1.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg1.x >= 890 && msg1.x <= 940 && msg1.y >= 420 && msg1.y <= 470)   
				{
					sportman(); 
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
