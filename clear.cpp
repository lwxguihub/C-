#include "data.h"

void clear()
{
	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//获取窗口句柄函数；即窗口名字  
	SetWindowText(hn,"中国队");//修改窗口名字函数
	setbkmode(TRANSPARENT);
	IMAGE img,img1;//创建一个加载图像的变量
	loadimage(&img, "./body2.jpg",1000,900);
	loadimage(&img1,"./chinese.jpg",210,140);
	putimage(0, 0, &img);//在窗口中打印图像
	putimage(710,30,&img1);
	
	RECT r1 = {360,1,700,200};
	
	settextcolor(RED);
	settextstyle(100,0.5,"Times New Roman");
	drawtext(_T("中国队"), &r1, DT_VCENTER | DT_SINGLELINE);
	
	 setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,200,950,850);//大方框 
	
	RECT r2 = {0,0,290,500};
	RECT r3 = {0,0,900,500};
	RECT r4 = {0,0,1530,500};
	
	settextcolor(BLACK);
	settextstyle(50,0,"Times New Roman");
	drawtext(_T("姓名"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("性别"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("项目"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	
	
	
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
   
    //RECT r10 = {0, 330, 1000, 1000};
    RECT r11 = {100, 360, 800, 900}; 
    RECT r12 = {810, 305, 1000, 900};
    RECT r13 = {660, 305, 1000, 900};
		for(i = 1;i < 8;i++)
	{
		
		setfillcolor(RED);
		solidroundrect(880,300+j,930,330+j,10,10);
		
		settextcolor(BLACK); 
		settextstyle(20,0,_T("Times New Roman"));
		drawtext(_T("删除"), &r12, DT_CENTER | DT_VCENTER );
		settextcolor(BLUE); 
		settextstyle(20,0,_T("Times New Roman"));
		drawtext(_T("编辑"), &r13, DT_CENTER | DT_VCENTER );
		r12.top += 60;
		r12.bottom += 60;
		r13.top += 60;
		r13.bottom += 60;
		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //设置字体颜色 
		
		sprintf(str,"%s                                       %s                                       %s",s[i].name,s[i].gender,s[i].project1);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r11,DT_CENTER | DT_VCENTER ); 
    	r11.top += 60;
		r11.bottom += 60;
		
		j = j+60;
		//settextstyle(15,0,_T("Times New Roman"));
	//	drawtext(_T("请按esc键返回上一级,按“←”或者“→”翻页"), &r10, DT_CENTER | DT_VCENTER );
		
}
        setfillcolor(RED);
		solidroundrect(880,300+j,930,330+j,10,10); 
        settextcolor(BLACK); 
		settextstyle(20,0,_T("Times New Roman"));
		drawtext(_T("删除"), &r12, DT_CENTER | DT_VCENTER ); 
		settextcolor(BLUE);
		drawtext(_T("编辑"), &r13, DT_CENTER | DT_VCENTER ); 
        //rectangle(850,290,900,330);
        RECT r14= {725 ,300, 800, 900}; 
        
        settextcolor(RED); 
		settextstyle(30,0,_T("Times New Roman"));
		drawtext(_T("滑冰"), &r14, DT_CENTER | DT_VCENTER ); 
        
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
		outtextxy(110, 300,str1);
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
		outtextxy(440, 300,str1);
	}
        
    setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(160,290,250,330);
	fillrectangle(465,290,540,330);
     	while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);
		 if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 800 && msg.x <= 860 && msg.y >= 290 && msg.y <= 330)   //左键点击主页第一个功能所在的矩形区域 
				{
					name();
					//rectangle(890,420,940,470); 
					
}
           /* if(msg.x >= 880 && msg.x <= 930 && msg.y >= 350 && msg.y <= 390)
            {
            	HWND hn = GetHWnd();//获取窗口句柄函数；
	            MessageBox(hn, "是否删除？", "提示", MB_OKCANCEL);//消息框弹出设置函数
	            _getch();  
            	clear();
			}*/
}
		if(msg.vkcode==VK_ESCAPE )
          {
          	choice1();
		  }	  
}



}
