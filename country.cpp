#include "data.h"
int Co = 7; //��¼�����������������ɾ������ 

void menu3() //�ڹ��Ҷ�ҳ�棨team���������������� 
{
	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//��ȡ���ھ������������������  
	SetWindowText(hn,"�й���");//�޸Ĵ������ֺ���
	setbkmode(TRANSPARENT);
	IMAGE img,img1;//����һ������ͼ��ı���
	loadimage(&img, "./body2.jpg",1000,900);
	loadimage(&img1,"./chinese.jpg",210,140);
	putimage(0, 0, &img);//�ڴ����д�ӡͼ��
	putimage(710,30,&img1);
	
	RECT r1 = {360,1,700,200};
	
	settextcolor(RED);
	settextstyle(100,0.5,"Times New Roman");
	drawtext(_T("�й���"), &r1, DT_VCENTER | DT_SINGLELINE);
	
	 setlinecolor(BLACK);
	setfillcolor(WHITE); 
	fillrectangle(50,200,950,850);//�󷽿� 
	
	setfillcolor(RGB(255,127,80));
	solidroundrect(845,220,945,270,10,10); 
	
	
	RECT r2 = {0,0,290,500};
	RECT r3 = {0,0,900,500};
	RECT r4 = {0,0,1530,500};
	RECT r5 = {800,0,1000,500};
	
	settextcolor(BLACK);
	settextstyle(50,0,"Times New Roman");
	drawtext(_T("����"), &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("�Ա�"), &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("��Ŀ"), &r4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	settextstyle(45,0,"Times New Roman");
	drawtext(_T("����"), &r5, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	
	
	
	FILE *fp = fopen("./name1.txt","r");
	sport s[30];
	int i;
	//��ʽ����ȡ�ı��ļ� 
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
	for(i = 0;i < Co;i++) //���뵽�ַ����д�ӡ 
	{

		
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
		
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
		drawtext(_T("����"), &r10, DT_CENTER | DT_VCENTER ); 
        
    FILE *fp2 = fopen("./name.txt","r");
	sport s2[5];
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<1;i++){
		fscanf(fp2,"%s",&s2[i].name);
	} 
	char str1[100];
    for(i=0;i<1;i++)
	{
		settextstyle(30,0,_T("Times New Roman"));
		settextcolor(RED);       //����������ɫ 
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
		settextcolor(RED);       //����������ɫ 
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
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);
		 if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
            if(msg.x >= 845&& msg.x <= 945&& msg.y >=220 && msg.y <= 270)
            {
            setfillcolor(RGB(240,128,128));
	        solidroundrect(845,280,945,330,10,10); 
			 RECT r20= {800,285,1000,500};
	         settextstyle(40,0.5,"Times New Roman");
	         settextcolor(BLACK);
	         drawtext(_T("ɾ��"), &r20, DT_CENTER | DT_VCENTER);
	        
	        Sleep(100);
	        setfillcolor(RGB(240,128,128));
	        solidroundrect(845,340,945,390,10,10); 
			 RECT r21= {800,345,1000,600};
	         settextstyle(40,0.5,"Times New Roman");
	         settextcolor(BLACK);
	         drawtext(_T("����"), &r21, DT_CENTER | DT_VCENTER);
	         
	         Sleep(100);
	        setfillcolor(RGB(240,128,128));
	        solidroundrect(845,400,945,450,10,10); 
			 RECT r22= {800,408,1000,500};
	         settextstyle(40,0.5,"Times New Roman");
	         settextcolor(BLACK);
	         drawtext(_T("�޸�"), &r22, DT_CENTER | DT_VCENTER);
                 
			}
			if(msg.x >= 845&& msg.x <= 945&& msg.y >=280 && msg.y <= 330)
			{				
				delete1();
			}
			if(msg.x >= 845&& msg.x <= 945&& msg.y >=340 && msg.y <= 390) 
			{
				Co++;			//ÿִ������һ�εĲ����������ܼ�1	
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
	//��ʽ����ȡ�ı��ļ� 
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
		sprintf(str,"%s%s%s",s1[i].name,s1[i].gender,s1[i].project1);	//�ı�����ȫ��������ַ����� 
}
	fclose(fp1);
	InputBox(sh, 10, "�������Ա����");
            	for(i=0;i<8;i++)
            	{	
            	if(strcmp(sh,s1[i].name)==0) //�ж��Ƿ���ڶ��� 
            	{
            		Co--;//ÿִ��һ��ɾ������������1 
                            FILE *fp2; /*�ļ�ָ��*/
                             fp2=fopen("name1.txt","w");
							for(j=0;j<8;j++) //���˶�Ա���¶��뵽�ı��� 
							{
								if(j==i) //����Ǻ�Ҫɾ���������±���ȣ��򲻶��뵽�ı��� 
								{
									continue;
								}
								fprintf(fp2,"%s	%s	%s\n",s1[j].name,s1[j].gender,s1[j].project1);
							 } 
							 
							 fclose(fp2);
							 HWND hn = GetHWnd();//��ȡ���ھ��������
	                        SetWindowText(hn, "��Ա");//�޸Ĵ������ֺ���
                          	MessageBox(hn, "ɾ���ɹ�", "��ʾ", MB_OKCANCEL);
                            menu3();
				}
				else if(strcmp(sh,s1[i].name)!=0&&i==Co) //���������Co�κͶ�����ȣ���û������� 
				{
					
						HWND hn = GetHWnd();//��ȡ���ھ��������
	                        SetWindowText(hn, "��Ա");//�޸Ĵ������ֺ���
                          	MessageBox(hn, "��ѯ��������", "��ʾ", MB_OKCANCEL);//��Ϣ�򵯳����ú���
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
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<8;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),8,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[100];
	//fread(s1,sizeof(s[0]),8,fp1);  //��ȡ�������ļ���һ�ζ�ȡ�������� 
	
	//��ȡ�������ļ���һ�ζ�ȡһ�����ݡ� 
	for(i=0;i<8;i++){
		fread(&s1[i],sizeof(s1[0]),8,fp1);
	}
	
	
	for(i=0;i<Co;i++)
	{		
		sprintf(str,"%s%s%s",s1[i].name,s1[i].gender,s1[i].project1);	//�ı�����ȫ��������ַ����� 
}
     fclose(fp1);
	char jia1[100],jia2[100],jia3[100];
	  FILE *fp2; /*�ļ�ָ��*/
     fp2=fopen("name1.txt","w");
	InputBox(jia1, 10, "�������Ա����");
	InputBox(jia2, 10, "�������Ա�Ա�");
	InputBox(jia3, 10, "�������Ա��Ŀ");
	for(i=0;i<Co;i++) //���˶�Ա���¶��뵽�ı��� 
	{
		if(i==Co-1)  //�������ӵ��˶�Ա�����ı���� 
		{
				strcpy(s1[i].name,jia1);
            	strcpy(s1[i].gender,jia2);
            	strcpy(s1[i].project1,jia3);
            	fprintf(fp2,"%s	%s	%s\n",s1[i].name,s1[i].gender,s1[i].project1);
            	break;
		}
		fprintf(fp2,"%s	%s	%s\n",s1[i].name,s1[i].gender,s1[i].project1); //�������ӵ��˶�Ա�����ı��� 
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
	//��ʽ����ȡ�ı��ļ� 
	for(i=0;i<8;i++){
		fscanf(fp,"%s%s%s",&s[i].name,&s[i].gender,&s[i].project1);
	} 
	fclose(fp);
	FILE *fp1 = fopen("./name1.dat","wb");
	fwrite(s,sizeof(s[0]),8,fp1);
	fclose(fp1); 
	
	fp1 = fopen("./name1.dat","rb");
	sport s1[100];
	//fread(s1,sizeof(s[0]),8,fp1);  //��ȡ�������ļ���һ�ζ�ȡ�������� 
	
	//��ȡ�������ļ���һ�ζ�ȡһ�����ݡ� 
	for(i=0;i<8;i++){
		fread(&s1[i],sizeof(s1[0]),8,fp1);
	}
	
	
	for(i=0;i<8;i++)
	{		
		sprintf(str,"%s%s%s",s1[i].name,s1[i].gender,s1[i].project1);	//�ı�����ȫ��������ַ����� 
}
    FILE *fp2;
	fp2=fopen("name1.txt","w");
	InputBox(xiu1, 10, "�������Ա����");
            	for(i=0;i<8;i++)  //���˶�Ա���¶��뵽�ı��� 
            	{	
            	if(strcmp(xiu1,s1[i].name)==0)  //�ж�����Ҫ�޸ĵ����� 
            	{
            		InputBox(xiu2, 10, "�������Ա�Ա�");
            		InputBox(xiu3, 10, "�������Ա��Ŀ");
      for(j=0;j<Co;j++)   
	{
		if(j==i)  //����Ǻ�Ҫ�޸ĵ������±���ȣ��򸲸Ƕ��뵽�ı��� 
		{
				strcpy(s1[i].name,xiu1);
				strcpy(s1[i].gender,xiu2);
                strcpy(s1[i].project1,xiu3);
            	fprintf(fp2,"%s	%s	%s\n",s1[i].name,s1[i].gender,s1[i].project1);
            	continue;
		}
		fprintf(fp2,"%s	%s	%s\n",s1[j].name,s1[j].gender,s1[j].project1); //�������¶��뵽�ı��� 
	}	
	fclose(fp1);
    fclose(fp2);
    menu3();
				}
				else if(strcmp(xiu1,s1[i].name)!=0&&i==Co)
				{
					fclose(fp1);
						HWND hn = GetHWnd();//��ȡ���ھ��������
	                        SetWindowText(hn, "��Ա");//�޸Ĵ������ֺ���
                          	MessageBox(hn, "���޴���", "��ʾ", MB_OKCANCEL);//��Ϣ�򵯳����ú���
	                        menu3();
				}
				}
}
