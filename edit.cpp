#include "data.h"

void edit1()
{
    int i,k,j;
	char str[1000];
	char xiu1[1000]; 
	FILE *fp = fopen("./name.txt","r");
	sport s[100]; 
	fscanf(fp,"%s",&s[0].name);
	fclose(fp);
	FILE *fp1 = fopen("./name.dat","wb");
	fwrite(s,sizeof(s[0]),1,fp1);
	fclose(fp1); 
	fp1 = fopen("./name.dat","rb");
	sport s1[100];
	fread(&s1[0],sizeof(s1[0]),1,fp1);	
	sprintf(str,"%s",s1[0].name);	
    FILE *fp2;
	fp2=fopen("name.txt","w");
	InputBox(xiu1, 10, "请输入姓名");//修改运动员个人姓名 
	setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(550,200,720,240);
	strcpy(s1[0].name,xiu1);
    fprintf(fp2,"%s",s1[0].name);
   	fclose(fp2); 
    sportman1();
	
	
}

void edit2()
{

	int i,k,j;
	char str[1000];
	char xiu1[1000];
	FILE *fp = fopen("./gender.txt","r");
	sport s[100]; 
	fscanf(fp,"%s",&s[0].gender);
	fclose(fp);
	FILE *fp1 = fopen("./gender.dat","wb");
	fwrite(s,sizeof(s[0]),1,fp1);
	fclose(fp1); 
	fp1 = fopen("./gender.dat","rb");
	sport s1[100];
	fread(&s1[0],sizeof(s1[0]),1,fp1);	
	sprintf(str,"%s",s1[0].gender);	
    FILE *fp2;
	fp2=fopen("gender.txt","w");
	InputBox(xiu1, 10, "请输入性别"); //修改运动员个人性别 
	setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(550,250,720,295);
	strcpy(s1[0].gender,xiu1);
    fprintf(fp2,"%s",s1[0].gender);
   	fclose(fp2); 
    sportman1();
}

void edit3()
{
	int i,k,j;
	char str[1000];
	char xiu1[100];
	FILE *fp = fopen("./age.txt","r");
	sport s[100]; 
	fscanf(fp,"%d",&s[0].age);
	fclose(fp);
	FILE *fp1 = fopen("./age.dat","wb");
	fwrite(s,sizeof(s[0]),1,fp1);
	fclose(fp1); 
	fp1 = fopen("./age.dat","rb");
	sport s1[100];
	fread(&s1[0],sizeof(s1[0]),1,fp1);	
	sprintf(str,"%d",s1[0].age);	
    FILE *fp2;
	fp2=fopen("age.txt","w");
	InputBox(xiu1, 10, "请输入年龄"); //修改运动员个人年龄 
	int r = atoi(xiu1);
	setfillcolor(WHITE);
	setlinecolor(WHITE);
	fillrectangle(550,305,720,340);
	s1[0].age = r;
    fprintf(fp2,"%d",s1[0].age);
   	fclose(fp2); 
    sportman1();
}


