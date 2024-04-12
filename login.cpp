#include "data.h"

void login1()
{
    //设置窗口大小  背景颜色
	initgraph(450, 600);
	setbkmode(TRANSPARENT);
	IMAGE img;//创建一个加载图像的变量
	IMAGE img1,img2,img3;
	loadimage(&img, "./body2.jpg",450,600);
	loadimage(&img1, "./body4.jpg",450,300);
	loadimage(&img2, "./dd1.jpg",96,36);
	//loadimage(&img2, "./Au.jpg",50,25);
	putimage(0, 0, &img);//在窗口中打印图像
	//设置字体颜色 还有测试显示字体
	putimage(0, 0, &img1);
	putimage(260, 453, &img2);
			
	settextcolor(BLACK);
	settextstyle(25, 0, "黑体");
	outtextxy(200,330,"登录");
	outtextxy(100, 380, "账号:");
	outtextxy(100, 420, "密码:");
	outtextxy(100, 460, "验证码:");
	setlinecolor(RGB(193,205,205));
	line(100,410,350,410);
	line(100,450,350,450);
	line(100,490,350,490);
     
    char p[8],p2[8],p4[8];
     int i,flag = 0;
	string str1,str2,str3,str4,str5,str6,str7;   //头文件 string 
	//str1用来放c的总内容 str2每次存放“显示内容：”+str1，方便输出
	//账号输入 
	char c,c1;  //定义字符c接收键盘输入
	while ((c = _getch()) != '\r')  //如果没按回车，接收一个c
	{  //getch()头文件 conio.h

		str2 = "";
		if(c == 27)  //如果是esc键就返回 
		{
			choice1();
		}
		if (c == '\b')  //如果c是退格符，str1删掉一个
		{
			str1 = str1.substr(0, str1.size() - 1);

		}
		else{
			str1 += (int)c;  
		}
		str2 = "账号:" + str1;
		//cleardevice();
		outtextxy(100, 380, str2.c_str());  //在窗口坐标为（100，300）的地方开始输出str2的内容
		
		
	}
	//密码输入 
		while ((c1 = _getch()) != '\r')  //如果没按回车，接收一个c
	{  //getch()头文件 conio.h
		str4 = "";
		if(c == 27)
		{
			choice1();
		}
		if (c1 == '\b')  //如果c是退格符，str1删掉一个
		{
			str3 = str3.substr(0, str3.size() - 1);

		}
		else{
			str7 += (int)c1;  
			str3 += "*";
		}
		str4 = "密码:" + str3;
	//	cleardevice();
		outtextxy(100, 420, str4.c_str());  //在窗口坐标为（10，220）的地方开始输出str2的内容
		
	}
	//验证码输入 
   while ((c = _getch()) != '\r')  //如果没按回车，接收一个c
	{  //getch()头文件 conio.h
		str6 = "";
		if(c == 27)
		{
			choice1();
		}
		if (c == '\b')  //如果c是退格符，str1删掉一个
		{
			str5 = str5.substr(0, str5.size() - 1);

		}
		else{
			str5 += (int)c;  
		}
		str6 = "验证码:" + str5;
		//cleardevice();
		outtextxy(100, 460, str6.c_str());  //在窗口坐标为（10，220）的地方开始输出str2的内容
		
		
	}
	//获取 string 类型的内容，存入到 char[]里 
      for(i=0;i<str1.length();i++)
     {
     	p4[i] = str1[i];
     	
	 }
	  p4[i] = '\0';
     for(i=0;i<str7.length();i++)
     {
     	p[i] = str7[i];
     	
	 }
	  p[i] = '\0';
	  
	  
	  for(i=0;i<str5.length();i++)
     {
     	p2[i] = str5[i];
     	
	 }
	  p2[i] = '\0';
	 char p3[8] = "fda4";//验证码 
	 char p5[8] = "2022";//账号 
	 char p1[8] = "lwx";//密码 
	 char p6[8] = "2021";//国家队账号
	 char p7[8] = "2020";//管理员账号 
	 
	 //判断是否和预存的账号密码验证码相同 
	  if(strcmp(p,p1)==0 && strcmp(p2,p3)==0 && strcmp(p4,p5)==0)
	  {
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "登录成功！", "登录成功", MB_OKCANCEL);
    	 Project();
	  }
	  else if(strcmp(p,p1)==0 && strcmp(p2,p3)==0 && strcmp(p4,p6)==0)
	  {
	  	HWND hn = GetHWnd();
    	MessageBox(hn, "登录成功！", "登录成功", MB_OKCANCEL);
    	 Project1();
	  }
	  else if(strcmp(p,p1)==0 && strcmp(p2,p3)==0 && strcmp(p4,p7)==0)
	  {
	  	HWND hn = GetHWnd();
    	MessageBox(hn, "登录成功！", "登录成功", MB_OKCANCEL);
    	 menu5();
	  }
	  else if(strcmp(p,p1)!=0 && strcmp(p2,p3)==0 )
	  {
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "密码错误", "登录失败", MB_OKCANCEL);
    	login1();
	  }
	  else if(strcmp(p4,p5)!=0 && strcmp(p2,p3)==0 )
	  {
	  	
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "账号错误或不存在", "登录失败", MB_OKCANCEL);
    	login1();
	  }
	  else 
	  {
	  		HWND hn = GetHWnd();
    	MessageBox(hn, "验证码错误", "登录失败", MB_OKCANCEL);
    	login1();
	  }
}

