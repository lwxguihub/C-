#include <stdio.h>
#include <graphics.h> //����ͼ���ͷ�ļ�,����������C++
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
	int id;//�˺� 
	char gender[3]; //�Ա� 
	char name[20]; //���� 
	char project1[50];
	int age; //���� 
}sport;

typedef struct medal{
	char project[50]; //�˶���Ŀ 
	char country[30];//���� 
	char teams[2000];//���Ҷ� 
	int  Au; //����
	int  Ag; //����
	int  Cu; //ͭ��
	int all; //����  
}med;

void title(); //��ͼ 
void menu1(); //��ͼ2 
void menu3(); //���Ҷӵ�¼����˶�Ա��Ϣҳ�� 
void menu5(); //����Ա��¼������Ҷ���Ϣҳ�� 
void choice1(); //��ҳ 
void login1(); //��¼ҳ�� 
void sportman(); //�˶�Ա�������鿴���˶�Ա������Ϣ 
void sportman1(); //�˶�Ա������˶�Ա������Ϣ���в��� 
void sportman2(); //�˶�Ա�����¼��鿴��Ա��Ϣ 
void Project(); //�˶�Ա������Ŀ���� 
void Project1(); //���Ҷӽ�����Ŀ���� 
void rank(); //�˶�Ա���潱�ư��һҳ 
void rank1(); //�˶�Ա���潱�ư�ڶ�ҳ 
void rank2(); //�˶�Ա���潱�ư����ҳ 
void edit1(); //�޸��˶�Ա�������� 
void edit2(); //�޸��˶�Ա�����Ա� 
void edit3(); //�޸��˶�Ա�������� 
void team(); //���Ҷ�ҳ��鿴���Ҹ�����Ϣ 
void delete1(); //���ҶӶ��˶�Աɾ����Ϣ 
void delete2(); //����Ա�Ը����Ҷ�ɾ����Ϣ 
void delete3(); //����Ա�Խ��ư�ɾ������ 
void add1(); //���ҶӶ��˶�Ա������Ϣ 
void add2(); //����Ա�Ը����Ҷ�������Ϣ 
void add3(); //����Ա�Խ��ư����ӹ��� 
void change1(); //���ҶӶ��˶�Ա�޸���Ϣ 
void change2(); //����Ա�Ը����Ҷ��޸���Ϣ 
void change3(); //����Ա�Խ��ư��޸ĸ��������� 
void adrank1(); //����Ա���潱�ư� 
void arank1();  //���Ҷӽ��潱�ư� 



