#include "data.h"
int Co = 7; //记录输出数量，方便增加删除操作 

void menu3() //在国家队页面（team函数）点击详情操作 
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
	
	setfillcolor(RGB(255,127,80));
	solidroundrect(845,220,945,270,10,10); 
	
	
	RECT r2 = {0,0,290,500};
	RECT r3 = {0,0,900,500};
	RECT r4 = {0,0,1530,500};
	RECT r5 = {800,0,1000,500};
	
	settextcolor(BLACK);
	settextstyle(50,0,"Times New Roman");
	drawtext(_T("姓名"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("性别"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("项目"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	settextstyle(45,0,"Times New Roman");
	drawtext(_T("操作"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	
	
	
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
	
	for(i=0;i<11;i++){
		fread(&s1[i],sizeof(s1[0]),11,fp1);
	}
    
    
    char str[100];
    int j,k;
   
    //RECT r10 = {0, 330, 1000, 1000};
    RECT r11 = {100, 360, 800, 900}; 	
	for(i = 0;i < Co;i++) //读入到字符串中打印 
	{

		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //设置字体颜色 
		
		sprintf(str,"%s                                       %s                                       %s",s1[i].name,s1[i].gender,s1[i].project1);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r11,DT_CENTER | DT_VCENTER ); 
    	r11.top += 60;
		r11.bottom += 60;
		
		j = j+60;
}
        RECT r10= {725 ,300, 800, 900}; 
        fclose(fp1);
        
        settextcolor(RED); 
		settextstyle(30,0,_T("Times New Roman"));
		drawtext(_T("滑冰"), &r10, DT_CENTER | DT_VCENTER ); 
        
    FILE *fp2 = fopen("./name.txt","r");
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
	fclose(fp2);
	FILE *fp3 = fopen("./gender.txt","r");
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
	fclose(fp3);
    setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(160,290,250,330);
	fillrectangle(465,290,540,330);
	char sh[100];
     	while (true)
	{
		ExMessage msg;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY);
		 if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
            if(msg.x >= 845&& msg.x <= 945&& msg.y >=220 && msg.y <= 270)
            {
            setfillcolor(RGB(240,128,128));
	        solidroundrect(845,280,945,330,10,10); 
			 RECT r20= {800,285,1000,500};
	         settextstyle(40,0.5,"Times New Roman");
	         settextcolor(BLACK);
	         drawtext(_T("删除"), &r20, DT_CENTER | DT_VCENTER);
	        
	        Sleep(100);
	        setfillcolor(RGB(240,128,128));
	        solidroundrect(845,340,945,390,10,10); 
			 RECT r21= {800,345,1000,600};
	         settextstyle(40,0.5,"Times New Roman");
	         settextcolor(BLACK);
	         drawtext(_T("增加"), &r21, DT_CENTER | DT_VCENTER);
	         
	         Sleep(100);
	        setfillcolor(RGB(240,128,128));
	        solidroundrect(845,400,945,450,10,10); 
			 RECT r22= {800,408,1000,500};
	         settextstyle(40,0.5,"Times New Roman");
	         settextcolor(BLACK);
	         drawtext(_T("修改"), &r22, DT_CENTER | DT_VCENTER);
                 
			}
			if(msg.x >= 845&& msg.x <= 945&& msg.y >=280 && msg.y <= 330)
			{				
				delete1();
			}
			if(msg.x >= 845&& msg.x <= 945&& msg.y >=340 && msg.y <= 390) 
			{
				Co++;			//每执行增加一次的操作则总数总加1	
				add1();
				
			}
			if(msg.x >= 845&& msg.x <= 945&& msg.y >=400 && msg.y <= 450)
			{
				change1();
			}
			
}
		if(msg.vkcode==VK_ESCAPE )
          {
          	team();
		  }	  
}
}

void delete1()
{
	int i,k,j;
	char str[1000];
	char sh[1000];
	FILE *fp = fopen("./name1.txt","r");
	sport s[100];
	//格式化读取文本文件 
	for(i=0;i<8;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),8,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[100];
	for(i=0;i<8;i++){
		fread(&s1[i],sizeof(s1[0]),8,fp1);
	}
	
	
	for(i=0;i<8;i++)
	{		
		sprintf(str,"%s%s%s",s1[i].name,s1[i].gender,s1[i].project1);	//文本内容全部读入进字符串中 
}
	fclose(fp1);
	InputBox(sh, 10, "请输入队员姓名");
            	for(i=0;i<8;i++)
            	{	
            	if(strcmp(sh,s1[i].name)==0) //判断是否存在队名 
            	{
            		Co--;//每执行一次删除则总数减少1 
                            FILE *fp2; /*文件指针*/
                             fp2=fopen("name1.txt","w");
							for(j=0;j<8;j++) //将运动员重新读入到文本中 
							{
								if(j==i) //如果是和要删除的名字下标相等，则不读入到文本中 
								{
									continue;
								}
								fprintf(fp2,"%s	%s	%s\n",s1[j].name,s1[j].gender,s1[j].project1);
							 } 
							 
							 fclose(fp2);
							 HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队员");//修改窗口名字函数
                          	MessageBox(hn, "删除成功", "提示", MB_OKCANCEL);
                            menu3();
				}
				else if(strcmp(sh,s1[i].name)!=0&&i==Co) //如果搜索了Co次和都不相等，则没有这个人 
				{
					
						HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队员");//修改窗口名字函数
                          	MessageBox(hn, "查询不到此人", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                        menu3();
				}
				}
}
void add1()
{
	int i,k,j;
	char str[1000];
	FILE *fp = fopen("./name1.txt","r");
	sport s[100];
	//格式化读取文本文件 
	for(i=0;i<8;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),8,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[100];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<8;i++){
		fread(&s1[i],sizeof(s1[0]),8,fp1);
	}
	
	
	for(i=0;i<Co;i++)
	{		
		sprintf(str,"%s%s%s",s1[i].name,s1[i].gender,s1[i].project1);	//文本内容全部读入进字符串中 
}
     fclose(fp1);
	char jia1[100],jia2[100],jia3[100];
	  FILE *fp2; /*文件指针*/
     fp2=fopen("name1.txt","w");
	InputBox(jia1, 10, "请输入队员姓名");
	InputBox(jia2, 10, "请输入队员性别");
	InputBox(jia3, 10, "请输入队员项目");
	for(i=0;i<Co;i++) //将运动员重新读入到文本中 
	{
		if(i==Co-1)  //把新增加的运动员存入文本最后 
		{
				strcpy(s1[i].name,jia1);
            	strcpy(s1[i].gender,jia2);
            	strcpy(s1[i].project1,jia3);
            	fprintf(fp2,"%s	%s	%s\n",s1[i].name,s1[i].gender,s1[i].project1);
            	break;
		}
		fprintf(fp2,"%s	%s	%s\n",s1[i].name,s1[i].gender,s1[i].project1); //把新增加的运动员存入文本中 
	}	
	 fclose(fp2);
     menu3();
}

void  change1()
{
	int i,k,j;
	char str[1000];
	char xiu1[1000];
	char xiu2[1000];
	char xiu3[1000];
	FILE *fp = fopen("./name1.txt","r");
	sport s[100];
	//格式化读取文本文件 
	for(i=0;i<8;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),8,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[100];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<8;i++){
		fread(&s1[i],sizeof(s1[0]),8,fp1);
	}
	
	
	for(i=0;i<8;i++)
	{		
		sprintf(str,"%s%s%s",s1[i].name,s1[i].gender,s1[i].project1);	//文本内容全部读入进字符串中 
}
    FILE *fp2;
	fp2=fopen("name1.txt","w");
	InputBox(xiu1, 10, "请输入队员姓名");
            	for(i=0;i<8;i++)  //将运动员重新读入到文本中 
            	{	
            	if(strcmp(xiu1,s1[i].name)==0)  //判断有无要修改的姓名 
            	{
            		InputBox(xiu2, 10, "请输入队员性别");
            		InputBox(xiu3, 10, "请输入队员项目");
      for(j=0;j<Co;j++)   
	{
		if(j==i)  //如果是和要修改的姓名下标相等，则覆盖读入到文本中 
		{
				strcpy(s1[i].name,xiu1);
				strcpy(s1[i].gender,xiu2);
                strcpy(s1[i].project1,xiu3);
            	fprintf(fp2,"%s	%s	%s\n",s1[i].name,s1[i].gender,s1[i].project1);
            	continue;
		}
		fprintf(fp2,"%s	%s	%s\n",s1[j].name,s1[j].gender,s1[j].project1); //其他重新读入到文本中 
	}	
	fclose(fp1);
    fclose(fp2);
    menu3();
				}
				else if(strcmp(xiu1,s1[i].name)!=0&&i==Co)
				{
					fclose(fp1);
						HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队员");//修改窗口名字函数
                          	MessageBox(hn, "查无此人", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                        menu3();
				}
				}
}
