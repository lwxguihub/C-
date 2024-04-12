#include "data.h"

void name()
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
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<2;i++){
		fread(&s1[i],sizeof(s1[0]),2,fp1);
	}   
    char str[100];
    int j;
    j = 450;
	for(i=0;i<2;i++)
	{
		settextstyle(20,0,_T("Times New Roman"));
		settextcolor(RGB(30,144,255));       //设置字体颜色 
		setbkmode(TRANSPARENT);  
		sprintf(str,"%s                                   %d                             %d                            %d",s1[i].project,s1[i].Au,s1[i].Ag,s1[i].Cu);
		outtextxy(230, j,str);
		
		j = j+50;
		
	}
	
	RECT r13 = {0,0,1200,350};
	settextcolor(BLACK);
	settextstyle(25,0,"宋体");
	drawtext(_T("2022"), &r13, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
     
     
     
    IMAGE img11;
    setbkmode(TRANSPARENT);
    loadimage(&img11, "./Chinese.jpg",54,36);
	putimage(720, 150, &img11);

     FILE *fp2 = fopen("./name.txt","r");
    FILE *fp3 = fopen("./gender.txt","r");
    FILE *fp4 = fopen("./age.txt","r");
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
		
     while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);  //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
		    if (msg.x > 720 && msg.x < 780 && msg.y >200 && msg.y < 240)   //左键点击主页第一个功能所在的矩形区域 
				{
					
				//	edit4();
	//settextcolor(BLACK);
	//settextstyle(25,0,"宋体");
	//outtextxy(570,210,si);
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >250 && msg.y < 295)   //左键点击主页第一个功能所在的矩形区域 
				{
				
				//	edit5();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >305 && msg.y < 340)   //左键点击主页第一个功能所在的矩形区域 
				{
				
				//	edit6();
				}
}
      if(msg.vkcode==VK_ESCAPE )
      {
      	menu3();
	  }


}
    
}
