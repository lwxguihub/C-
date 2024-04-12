#include <stdio.h>
#include <graphics.h> //包含图像库头文件,仅仅适用于C++
#include <conio.h>
#include <string.h>
#include<iostream>
#include <time.h> 
#include <windows.h>
//#pragma comment(lib,"Imm32.lib")


#define N 30
#define MAX_SIZE 11000


using namespace std;

typedef struct sportmen{
	int id;//账号 
	char gender[3]; //性别 
	char name[20]; //姓名 
	char project1[50];
	int age; //年龄 
}sport;

typedef struct medal{
	char project[50]; //运动项目 
	char country[30];//国家 
	char teams[2000];//国家队 
	int  Au; //金牌
	int  Ag; //银牌
	int  Cu; //铜牌
	int all; //总数  
}med;

void title(); //贴图 
void menu1(); //贴图2 
void menu3(); //国家队登录后各运动员信息页面 
void menu5(); //管理员登录后各国家队信息页面 
void choice1(); //首页 
void login1(); //登录页面 
void sportman(); //运动员界面点击查看后运动员个人信息 
void sportman1(); //运动员界面对运动员个人信息进行操作 
void sportman2(); //运动员界面登录后查看队员信息 
void Project(); //运动员界面项目介绍 
void Project1(); //国家队界面项目介绍 
void rank(); //运动员界面奖牌榜第一页 
void rank1(); //运动员界面奖牌榜第二页 
void rank2(); //运动员界面奖牌榜第三页 
void edit1(); //修改运动员个人姓名 
void edit2(); //修改运动员个人性别 
void edit3(); //修改运动员个人年龄 
void team(); //国家队页面查看国家各队信息 
void delete1(); //国家队对运动员删除信息 
void delete2(); //管理员对各国家队删除信息 
void delete3(); //管理员对奖牌榜删除国家 
void add1(); //国家队对运动员增加信息 
void add2(); //管理员对各国家队增加信息 
void add3(); //管理员对奖牌榜增加国家 
void change1(); //国家队对运动员修改信息 
void change2(); //管理员对各国家队修改信息 
void change3(); //管理员对奖牌榜修改各奖牌总数 
void adrank1(); //管理员界面奖牌榜 
void arank1();  //国家队界面奖牌榜 



