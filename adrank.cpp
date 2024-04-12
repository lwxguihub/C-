#include "data.h"
int Co2 = 28;

void adrank1() //增加删除修改操作与 country 操作类似 
{
	int F,a,i,j,k,x1,y1,count,x,y,F1,Fi;
	F = 1;
	
	char si1[5];
	char si[5];
	char sou[100];
	title();
    setfillcolor(RGB(30, 144, 255));
	solidrectangle(0,200,500,250);
    setfillcolor(RGB(0, 191, 255));
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
	settextcolor(WHITE);
	settextstyle(20,0,"Times New Roman");
	drawtext(_T("国家队信息"), &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("排行榜信息"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("查询"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("增加"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("删除"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    drawtext(_T("修改"), &r6, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    
    setbkmode(TRANSPARENT);
	setfillcolor(RGB(70,130,180));
	fillrectangle(0,344,165,392);//排行 
	setfillcolor(RGB(147,112,219));
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
	
	RECT r16 = {0,344,165,392};//300-252 = 48
	RECT r17 = {166,344,331,392};
	RECT r18 = {332,344,497,392};
	RECT r19 = {498,344,663,392};
	RECT r7 = {664,344,829,392};
	RECT r8 = {830,344,1000,392};
		
	
	drawtext("排名",&r16,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("国家",&r17,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("金",&r18,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("银",&r19,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("铜",&r7,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	drawtext("总数",&r8,DT_VCENTER | DT_CENTER | DT_SINGLELINE); 
	
	
	RECT r9 = {25,300,500,350};
	RECT r10 = {60,300,500,350};
	RECT r11 = {95,300,500,350};
	RECT r12 = {130,300,500,350};
	RECT r13 = {165,300,500,350};
	RECT r14 = {200,300,500,350};
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
  
	
	FILE *fp = fopen("./rank.txt","r");
	med s[50];
	//格式化读取文本文件 
	for(i=0;i<Co2;i++){
		fscanf(fp,"%s%d%d%d%d",&s[i].country,&s[i].Au,&s[i].Ag,&s[i].Cu,&s[i].all);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./rank.dat","wb");
	fwrite(s,sizeof(s[0]),Co2,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./rank.dat","rb");
	med s1[50];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<Co2;i++){
		fread(&s1[i],sizeof(s1[0]),Co2,fp1);
	}
	
    char str[100];
	for(i=0;i<Co2;i++)
	{
			sprintf(str,"%s%d%d%d%d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
	}
	
a:  Fi =0;
    if(F==1)
	{
	x = 0,y = 300;	
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
  
    
    j = k = 300;
    RECT r = {10, 400, 1000, 1000};
  
  for(i=0;i<10;i++)
	{
	//	if(i>=28)
	//	{
	//		break;
	//	}
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //设置字体颜色 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
	//	F1++;
}
    
	settextcolor(WHITE);
	j = 400;
	for(i=1;i<=10;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
	 } 
   if(F==2)
   {
   	x = 0,y = 300;	
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
  
    
    j = k = 300;
    RECT r = {10, 400, 1000, 1000};
  
  for(i=10;i<20;i++)
	{
	//	if(i>=28)
	//	{
	//		break;
	//	}
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //设置字体颜色 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
	//	F1++;
}
    
	settextcolor(WHITE);
	j = 400;
	for(i=11;i<=20;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
   }
   if(F==3)
   {
   	x = 0,y = 300;	
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
  
    
    j = k = 300;
    RECT r = {10, 400, 1000, 1000};
  
  for(i=20;i<Co2;i++)
	{
	//	if(i>=28)
	//	{
	//		break;
	//	} 
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //设置字体颜色 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		//outtextxy(100, j,str);
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  
		r.top += 48;
		r.bottom += 48;
	//	F1++;
}
    
	settextcolor(WHITE);
	j = 400;
	for(i=21;i<=Co2;i++)
	{
		sprintf(si, "%d", i);
        outtextxy(70, j, si);
        j += 48;
	}
   }
	
    while (true)
	{
		ExMessage msg,msg1;    //消息结构体 
		flushmessage();   //清空当前消息队列所有消息 
		msg = getmessage(EM_MOUSE|EM_KEY); 
		msg1 = getmessage(EM_MOUSE|EM_KEY);   //获取消息队列中的 鼠标消息和按键消息 ，具体可查看Easy_X操作文档 
		if(msg.message==WM_LBUTTONDOWN)   
		{
			if(msg.x >= 0 && msg.x <= 500 && msg.y >= 200 && msg.y <= 250)
			{
				menu5();
			}
			if (msg.x >= 0 && msg.x <= 250 && msg.y >= 250 && msg.y <= 300) 
			{
				Fi = 1;
				InputBox(sou, 10, "请输入国家名称");
				for(i=0;i<Co2;i++)
				{
					if(strcmp(s1[i].country,sou)==0)
					{
					//	F1 = i;
	x = 0,y = 300;	
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
    	
	     settextcolor(WHITE);
		 sprintf(si1, "%d", i+1);
		 outtextxy(70, 400, si1);
         RECT r = {10, 400, 1000, 1000};
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RGB(0,0,0));       //设置字体颜色 
		
		sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
		
		drawtext(_T(str), &r,DT_CENTER | DT_VCENTER );  	
		break;
					}
		else if(strcmp(s1[i].country,sou)!=0 && i == Co2-1)
			{
					HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "队员");//修改窗口名字函数
                          	MessageBox(hn, "查无此国家", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                        adrank1();
			 } 
					
				 } 
			}
			if(msg.x >= 250 && msg.x <= 500 && msg.y >= 250 && msg.y <= 300)
			{
				Co2++;
				add3();
			}
			if(msg.x >= 500 && msg.x <= 750 && msg.y >= 250 && msg.y <= 300)
			{
				delete3();
			}
			if(msg.x >= 750 && msg.x <= 1000 && msg.y >= 250 && msg.y <= 300)
			{
				change3();
			}
		}
		 if(msg.vkcode==VK_RIGHT)
		 {	
		    F++;
		    if(F>3)
		    {
		    	F = 1;
			}		
		 	goto a;
		 }
		 if(msg.vkcode==VK_LEFT)
		 {
		 	F--;
		 	if(F<=0)
		 	{
		 		F = 3;
			 }
		 	goto a;
		 }
		 if(msg1.vkcode==VK_ESCAPE && Fi == 0)
          {
          	choice1();
		  }	
		  if(msg1.vkcode==VK_ESCAPE && Fi == 1)
          {
          	adrank1();
		  }	
	}
}

void add3()
{
	int i,k,j;
	char str[1000];
	FILE *fp = fopen("./rank.txt","r");
	med s[50];
	//格式化读取文本文件 
	for(i=0;i<Co2;i++){
		fscanf(fp,"%s%d%d%d%d",&s[i].country,&s[i].Au,&s[i].Ag,&s[i].Cu,&s[i].all);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./rank.dat","wb");
	fwrite(s,sizeof(s[0]),Co2,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./rank.dat","rb");
	med s1[50];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<Co2;i++){
		fread(&s1[i],sizeof(s1[0]),Co2,fp1);
	}
	
	for(i=0;i<Co2;i++)
	{
			sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
	}
		char jia1[100];
		char jia2[100];
		char jia3[100];
		char jia4[100];
		char jia5[100];
		
	  FILE *fp2; /*文件指针*/
     fp2=fopen("rank.txt","w");
	InputBox(jia1, 10, "请输入国家名称");
	InputBox(jia2, 10, "请输入金牌数量");
	InputBox(jia3, 10, "请输入银牌数量");
	InputBox(jia4, 10, "请输入铜牌数量");
	InputBox(jia5, 10, "请输入奖牌总数");
	
	
	int r2 = atoi(jia2);
	int r3 = atoi(jia3);
	int r4 = atoi(jia4);
	int r5 = atoi(jia5);
    
	strcpy(s1[Co2-1].country,jia1);
    s1[Co2-1].Au = r2;
    s1[Co2-1].Ag = r3;
	s1[Co2-1].Cu = r4;
	s1[Co2-1].all = r5;
    
 struct medal t;
 int index;
 for(i=0;i<Co2;i++){        //降序排序 
  index = i;
  for(j=i;j<Co2;j++){
    if(s1[index].Au < s1[j].Au){
     index = j;
    }
  }
  t = s1[i];
  s1[i] = s1[index];
  s1[index] = t;
 }
	 for(i=0;i<Co2;i++)
	 {
	 		fprintf(fp2,"%24s%20d%21d%21d%23d\n",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
	 }
    
	 fclose(fp2);
	     
	 	HWND hn = GetHWnd();//获取窗口句柄函数；
	    SetWindowText(hn, "提示");//修改窗口名字函数
        MessageBox(hn, "添加成功", "提示", MB_OKCANCEL);
        adrank1();
}
void delete3()
{
	int i,k,j,t;
	char str[1000];
	char sh[100];
	FILE *fp = fopen("./rank.txt","r");
	med s[50];
	//格式化读取文本文件 
	for(i=0;i<Co2;i++){
		fscanf(fp,"%s%d%d%d%d",&s[i].country,&s[i].Au,&s[i].Ag,&s[i].Cu,&s[i].all);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./rank.dat","wb");
	fwrite(s,sizeof(s[0]),Co2,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./rank.dat","rb");
	med s1[50];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<Co2;i++){
		fread(&s1[i],sizeof(s1[0]),Co2,fp1);
	}
	
	for(i=0;i<Co2;i++)
	{
			sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
	}
	InputBox(sh, 10, "请输入国家名称");
		for(i=0;i<Co2;i++)
            	{	
            	if(strcmp(sh,s1[i].country)==0)
            	{
            		Co2--;
                            FILE *fp2; /*文件指针*/
                             fp2=fopen("rank.txt","w");
							for(j=0;j<Co2;j++)
							{
								if(j==i)
								{
									continue;
								}
								fprintf(fp2,"%24s%20d%21d%21d%23d\n",s1[j].country,s1[j].Au,s1[j].Ag,s1[j].Cu,s1[j].all);
							 }
							struct medal t;
                            int index;
                       for(k=0;k<Co2;k++){        //降序排序 
                          index = k;
                       for(j=k;j<Co2;j++){
                       if(s1[index].Au < s1[j].Au){
                              index = j;
                                     }
                                            }
                                t = s1[k];
                               s1[k] = s1[index];
                               s1[index] = t;
                              }
							  for(j=0;j<Co2;j++)
							  {
							  	fprintf(fp2,"%24s%20d%21d%21d%23d\n",s1[j].country,s1[j].Au,s1[j].Ag,s1[j].Cu,s1[j].all);
							   } 
							 fclose(fp2);
							 HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "国家名");//修改窗口名字函数
                          	MessageBox(hn, "删除成功", "提示", MB_OKCANCEL);
                           adrank1();
				}
				else if(strcmp(sh,s1[i].country)!=0&&i==Co2)
				{
						HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "国家名");//修改窗口名字函数
                          	MessageBox(hn, "查询不到此国家", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                       adrank1();
				}
				}
}

void change3()
{
	int i,k,j,t;
	char str[1000];
	char sh[100];
	FILE *fp = fopen("./rank.txt","r");
	med s[50];
	//格式化读取文本文件 
	for(i=0;i<Co2;i++){
		fscanf(fp,"%s%d%d%d%d",&s[i].country,&s[i].Au,&s[i].Ag,&s[i].Cu,&s[i].all);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./rank.dat","wb");
	fwrite(s,sizeof(s[0]),Co2,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./rank.dat","rb");
	med s1[50];
	//fread(s1,sizeof(s[0]),8,fp1);  //读取二进制文件，一次读取所有内容 
	
	//读取二进制文件，一次读取一行数据。 
	for(i=0;i<Co2;i++){
		fread(&s1[i],sizeof(s1[0]),Co2,fp1);
	}
	
	for(i=0;i<Co2;i++)
	{
			sprintf(str,"%24s%20d%21d%21d%23d",s1[i].country,s1[i].Au,s1[i].Ag,s1[i].Cu,s1[i].all);
	}
		char jia1[100];
		char jia2[100];
		char jia3[100];
		char jia4[100];
		char jia5[100];
		
	  FILE *fp2; /*文件指针*/
     fp2=fopen("rank.txt","w");
	InputBox(jia1, 10, "请输入国家名称");

	
	for(i=0;i<Co2;i++)
    {	
        if(strcmp(jia1,s1[i].country)==0)
        {
	InputBox(jia2, 10, "请输入金牌数量");
	InputBox(jia3, 10, "请输入银牌数量");
	InputBox(jia4, 10, "请输入铜牌数量");
	InputBox(jia5, 10, "请输入奖牌总数");
	int r2 = atoi(jia2);
	int r3 = atoi(jia3);
	int r4 = atoi(jia4);
	int r5 = atoi(jia5);
	
      for(j=0;j<Co2;j++)
	{
		if(j==i)
		{
				strcpy(s1[i].country,jia1);
				s1[i].Au = r2;
		        s1[i].Ag = r3;
		        s1[i].Cu = r4;
		        s1[i].all = r5;	     	
            	continue;
		}
	}	
	struct medal t;
        int index;
	for(k=0;k<Co2;k++){        //降序排序 
            index = k;
    for(j=k;j<Co2;j++){
    if(s1[index].Au < s1[j].Au){
           index = j;
                            }
                        }
         t = s1[k];
         s1[k] = s1[index];
          s1[index] = t;
                         }
	
	
            for(j=0;j<Co2;j++)
            {
            	fprintf(fp2,"%24s%20d%21d%21d%23d\n",s1[j].country,s1[j].Au,s1[j].Ag,s1[j].Cu,s1[j].all);
			}
			fclose(fp2);
	        adrank1();
	}

  		if(strcmp(jia1,s1[i].country)!=0&&i==Co2)
				{
						HWND hn = GetHWnd();//获取窗口句柄函数；
	                        SetWindowText(hn, "国家名");//修改窗口名字函数
                          	MessageBox(hn, "查询不到此国家", "提示", MB_OKCANCEL);//消息框弹出设置函数
	                       adrank1();
				}
    }
    
}
