#include "data.h"

void sportman1()
{
	    //读取文件 
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
	
	IMAGE img;
    setbkmode(TRANSPARENT);
    loadimage(&img, "./Chinese.jpg",54,36);
	putimage(720, 150, &img);
	
	
	
	RECT r1 = {0,0,1200,350};	
settextcolor(BLACK);
	settextstyle(25,0,"宋体");
	drawtext(_T("2022"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
/*	//RECT r2 = {0,0,1200,450};
	RECT r3 = {0,0,1200,550}; 
	RECT r4 = {0,0,1200,650};
	
    //drawtext(_T("小文"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("男"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("23"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);*/
     
     
    
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
     
     
     setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(620,200,720,240);
	fillrectangle(600,250,720,295);
	fillrectangle(598,305,720,340);
     while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);  //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
		    if (msg.x > 720 && msg.x < 780 && msg.y >200 && msg.y < 240)   //左键点击主页第一个功能所在的矩形区域 
				{
					
					edit1();
	
	//InputBox(si, 10, "修改姓名");
	//settextcolor(BLACK);
	//settextstyle(25,0,"宋体");
	//outtextxy(570,210,si);
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >250 && msg.y < 295)   //左键点击主页第一个功能所在的矩形区域 
				{
					
					edit2();
				}
			if (msg.x > 720 && msg.x < 780 && msg.y >305 && msg.y < 340)   //左键点击主页第一个功能所在的矩形区域 
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


