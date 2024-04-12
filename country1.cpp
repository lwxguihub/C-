#include "data.h"
int Co1 = 80;


void menu5() //增加删除修改操作与 country 操作类似 
{
	title();
	int i,j,count,a,count1,count2,F;
	int flag = 2;
	char si[100]; 
	char str[2000];
	char sou[100];
	count = 0;
	count1 = 1;
	count2 = 1;
	setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,350,950,850);//大方框 
    setfillcolor(RGB(0, 191, 255));
	solidrectangle(0,200,500,250);
    setfillcolor(RGB(30, 144, 255));
    solidrectangle(500,200,1000,250);
    setfillcolor(RGB(72, 209, 204));
    solidrectangle(0,250,250,300);//查询 
    solidrectangle(250,250,500,300);
    solidrectangle(500,250,750,300);
    solidrectangle(750,250,1000,300);
    setlinecolor(WHITE);
	line(500,200,500,250);
	line(250,250,250,300);
	line(500,250,500,300);
	line(750,250,750,300);
	RECT r1 = {0,200,500,250};
	RECT r2 = {500,200,1000,250};
	RECT r3 = {0,250,250,300};
	RECT r4 = {250,250,500,300};
	RECT r5 = {500,250,750,300};
	RECT r6 = {750,250,1000,300};
	RECT r7 = {0,0,320,800};
	RECT r8 = {0,0,1000,800};
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("国家队信息"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("排行榜信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("查询"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("增加"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("删除"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("修改"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    settextstyle(45,0.5,"Times New Roman");
	 settextcolor(BLACK);
	drawtext(_T("序号"), &r7, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("队名"), &r8, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
    	
a:	FILE *fp = fopen("./team.txt","r");
	med s[100];
	//格式化读取文本文件 
	for(i=0;i<80;i++){
		fscanf(fp,"%s",&s[i].teams);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./team.dat","wb");
	fwrite(s,sizeof(s[0]),80,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./team.dat","rb");
	med s1[80];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<80;i++){
		fread(&s1[i],sizeof(s1[0]),80,fp1);
	}
	
	
	for(i=0;i<80;i++)
	{		
		sprintf(str,"%s",s1[i].teams);	
    }
	RECT r = {100,450,900,1000}; 
         F = 0;
     for(i=count;i<7*count1;i++)
	{
		
		settextstyle(35,0.5,_T("Times New Roman"));
		settextcolor(RGB(138,43,226));       //设置字体颜色 
		
		sprintf(str,"%s",s1[i].teams);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 60;
		r.bottom += 60;
		count++;
	if(count>Co1-1)
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
        if(count2>=Co1)
		{
			break;
		}
	}
		while (true)
	{
		ExMessage msg,msg1;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)      //点击鼠标左键 ，WM_LBUTTONDOWN是Windows消息，具体可百度了解 
		{
			if (msg.x >= 0 && msg.x <= 250 && msg.y >= 250 && msg.y <= 300)   //左键点击主页第一个功能所在的矩形区域 
				{
					InputBox(sou, 10, "请输入队名");
	         		for(i=0;i<80;i++)
	         		{
	         			if(strcmp(sou,s1[i].teams)==0)
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
				if(i==79&&strcmp(s1[i].teams,sou)!=0)
						{
							HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "国家队");//修改窗口名字函数
                          	MessageBox(hn, "查询不到此队", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                        menu5();
						}
			}
			}
			if (msg.x >= 250 && msg.x <= 500 && msg.y >= 250 && msg.y <= 300)
			{
				Co1++; 
				add2();
			}
			if (msg.x >= 500 && msg.x <= 750 && msg.y >= 250 && msg.y <= 300)
			{
				
				delete2();
			}
			if (msg.x >= 750 && msg.x <= 1000 && msg.y >= 250 && msg.y <= 300)
			{
				change2();
			}
			if(msg.x >= 500 && msg.x <= 1000 && msg.y >= 200 && msg.y <= 250)
			{
				adrank1();
			}
		}
		
		if(msg.vkcode==VK_RIGHT)
    {
    setfillcolor(WHITE);
	solidrectangle(110,450,650,845);
    	count1++;
    	if(count>Co1)
    	{
    		count = 0;
    		count1 = 1;
    		count2 = 1;
    		
		}
    	goto a;	
	}	
	if(msg.vkcode==VK_LEFT)
    {
    	 setfillcolor(WHITE);
	     solidrectangle(110,450,650,845);
	    count1--; 
    	count = count - 14;
    	count2 = count2 - 14;
    	if(count1<=0)
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
	 if(msg1.vkcode==VK_ESCAPE && F == 0)
          {
          	choice1();
		  }	
		  if(msg1.vkcode==VK_ESCAPE && F == 1)
          {
          	menu5();
		  }	
}
}

void add2()
{
	int i,k,j;
	char str[1000];
	FILE *fp = fopen("./team.txt","r");
	med s[100];
	//格式化读取文本文件 
	for(i=0;i<Co1;i++){
		fscanf(fp,"%s",&s[i].teams);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./team.dat","wb");
	fwrite(s,sizeof(s[0]),80,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./team.dat","rb");
	med s1[100];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<Co1;i++){
		fread(&s1[i],sizeof(s1[0]),Co1,fp1);
	}
	
	
	for(i=0;i<Co1;i++)
	{		
		sprintf(str,"%s",s1[i].teams);	
}
fclose(fp1);
	char jia[100];
	  FILE *fp2; /*文件指针*/
     fp2=fopen("team.txt","w");
	InputBox(jia, 10, "请输入国家队名");
	for(i=0;i<Co1;i++)
	{
		if(i==Co1-1)
		{
				strcpy(s1[i].teams,jia);
            	fprintf(fp2,"%s\n",s1[i].teams);
            	break;
		}
		fprintf(fp2,"%s\n",s1[i].teams);
	}	
	 fclose(fp2);
	 	HWND hn = GetHWnd();//获取窗口句柄函数；
	    SetWindowText(hn, "提示");//修改窗口名字函数
        MessageBox(hn, "添加成功", "提示", MB_OKCANCEL);
	     menu5();
}

void delete2()
{
	int i,k,j;
	char str[1000];
	FILE *fp = fopen("./team.txt","r");
	med s[100];
	//格式化读取文本文件 
	for(i=0;i<Co1;i++){
		fscanf(fp,"%s",&s[i].teams);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./team.dat","wb");
	fwrite(s,sizeof(s[0]),80,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./team.dat","rb");
	med s1[100];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<Co1;i++){
		fread(&s1[i],sizeof(s1[0]),Co1,fp1);
	}
	
	
	for(i=0;i<Co1;i++)
	{		
		sprintf(str,"%s",s1[i].teams);	
}
fclose(fp1);
	char sh[100];
	InputBox(sh, 10, "请输入国家队名");
            	for(i=0;i<Co1;i++)
            	{	
            	if(strcmp(sh,s1[i].teams)==0)
            	{
            		Co1--;
                            FILE *fp2; /*文件指针*/
                             fp2=fopen("team.txt","w");
							for(j=0;j<Co1;j++)
							{
								if(j==i)
								{
									continue;
								}
								fprintf(fp2,"%s\n",s1[j].teams);
							 } 
							 fclose(fp2);
							 HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队名");//修改窗口名字函数
                          	MessageBox(hn, "删除成功", "提示", MB_OKCANCEL);
                            menu5();
				}
				else if(strcmp(sh,s1[i].teams)!=0&&i==Co1)
				{
						HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队名");//修改窗口名字函数
                          	MessageBox(hn, "查询不到此队", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                        menu5();
				}
				}
}

void change2()
{
	int i,k,j;
	char str[1000];
	FILE *fp = fopen("./team.txt","r");
	med s[100];
	//格式化读取文本文件 
	for(i=0;i<Co1;i++){
		fscanf(fp,"%s",&s[i].teams);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./team.dat","wb");
	fwrite(s,sizeof(s[0]),80,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./team.dat","rb");
	med s1[100];
 
	for(i=0;i<Co1;i++){
		fread(&s1[i],sizeof(s1[0]),Co1,fp1);
	}
	
	
	for(i=0;i<Co1;i++)
	{		
		sprintf(str,"%s",s1[i].teams);	
}
fclose(fp1);
	FILE *fp2;
	char xiu1[100];
	char xiu2[100];
	fp2=fopen("team.txt","w");
	InputBox(xiu1, 10, "请输入要修改的原队名");
            	for(i=0;i<Co1;i++)
            	{	
            	if(strcmp(xiu1,s1[i].teams)==0)
            	{
            		InputBox(xiu2, 10, "请输入要修改的队名");
            			for(j=0;j<Co1;j++)
	{
		if(j==i)
		{
				strcpy(s1[i].teams,xiu2);
            	fprintf(fp2,"%s\n",s1[i].teams);
            	continue;
		}
		fprintf(fp2,"%s\n",s1[j].teams);
	}	
	                       fclose(fp2);
                           	HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "国家队");//修改窗口名字函数
                          	MessageBox(hn, "修改成功", "提示", MB_OKCANCEL);
                            menu5();
				}
				else if(strcmp(xiu1,s1[i].teams)!=0&&i==Co1)
				{
						HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队员");//修改窗口名字函数
                          	MessageBox(hn, "查无此队", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                        menu5();
				}
				}
} 
