#include "data.h"

void choice1()//ѡ���˶�Ա/���Ҷ�/����Ա 
{
	initgraph(1000, 900,NOMINIMIZE);
	HWND hn = GetHWnd();//��ȡ���ھ������������������  
	SetWindowText(hn,"���»ά�ư�");//�޸Ĵ������ֺ���
	menu1(); 
	int VK_COUNT = 0;		//���ڸ��� ������� ������ 
	while (true)
	{
		ExMessage msg;    //��Ϣ�ṹ�� 
		flushmessage();   //��յ�ǰ��Ϣ����������Ϣ 
		msg = getmessage(EM_MOUSE|EM_KEY);   //��ȡ��Ϣ�����е� �����Ϣ�Ͱ�����Ϣ ������ɲ鿴Easy_X�����ĵ� 
		if(msg.message==WM_LBUTTONDOWN)      //��������� ��WM_LBUTTONDOWN��Windows��Ϣ������ɰٶ��˽� 
		{
			if (msg.x >= 270 && msg.x <= 760 && msg.y >= 390 && msg.y <= 470)   //��������ҳ��һ���������ڵľ������� 
				{
					login1();   
					cleardevice();  
					//login();
					cleardevice();  
					Project();     //��ʾ������   
				}
			if (msg.x >= 270 && msg.x <= 760 && msg.y >= 570 && msg.y <= 650)   //��������ҳ��һ���������ڵľ������� 
				{
					login1();   
					cleardevice();  
					flushmessage(); 
					Project1();      //��ʾ������  
				}	
			if (msg.x >= 270 && msg.x <= 760 && msg.y >= 760 && msg.y <= 830)   //��������ҳ��һ���������ڵľ������� 
				{
					login1();    
					 cleardevice();  
					flushmessage(); 
					menu5();  //��ʾ������   
					
				}	
		}
		/*else if(msg.vkcode==VK_DOWN){    //������  �� ��ѡ���� �� VK_DOWN ������룬����ɰٶ� 
				VK_COUNT = (VK_COUNT+1)%4;   //VK_COUNT �Զ�����������ڼ�����ͳ�ư������ٴ� 
				switch(VK_COUNT){
					case 0:					//ѡ����ҳ��һ������ 
						 menu1();
						setlinecolor(LIGHTBLUE);  //�߿�������Ϊ��ɫ 
						setlinestyle(PS_SOLID, 5);  //�߿���Ϊ 5 
						rectangle(270, 390, 760, 470); // ��ָ��λ�û�һ�����α߿�	
						break;
					case 1:				//ѡ����ҳ�ڶ������� ����δʵ�֣�
					    menu1();
						setlinecolor(LIGHTBLUE);
						setlinestyle(PS_SOLID, 5);
						rectangle(270, 570, 760, 650);
						break; 
		
					case 2:			//ѡ����ҳ���������� ����δʵ�֣�
						menu1();
						setlinecolor(LIGHTBLUE);
						setlinestyle(PS_SOLID, 5);
						rectangle(270, 760, 760, 830); 
						break;
				}
				Sleep(200);	
		}else if(msg.vkcode==VK_UP){     //������  �� ��ѡ���� 
				VK_COUNT = (VK_COUNT+3)%4;
				switch(VK_COUNT){
				case 0:         //ѡ����ҳ��һ������ 
					menu1();
					setlinecolor(LIGHTBLUE);
					setlinestyle(PS_SOLID, 5);
					rectangle(270, 390, 760, 470);
					break;
				case 1:     //ѡ����ҳ�ڶ������� ����δʵ�֣�
				menu1();
					setlinecolor(LIGHTBLUE);
					setlinestyle(PS_SOLID, 5);
					rectangle(270, 570, 760, 650);
					break;
				case 2:    //ѡ����ҳ���������� ����δʵ�֣�
				menu1();
					setlinecolor(LIGHTBLUE);
					setlinestyle(PS_SOLID, 5);
					rectangle(270, 760, 760, 830); 
					break;
				}
				Sleep(200);   //�����ӳ� 
	}
	else if(msg.vkcode==VK_RETURN)  //������ �س��� 
			{
				switch(VK_COUNT)  //����ѡ�񣬽�����Ӧ�Ĺ��� 
				{
					case 0: 
						login1(); 
						cleardevice(); 
						Project();
						flushmessage();
						break;
	     			case 1:  		
					    login1(); 
						cleardevice();  
						Project1(); 
						flushmessage();
						break; 
					case 2:   
				    	login1(); 
						cleardevice(); 						
						menu5();
						break;
					default:
						break;	
				}
			} */
}
}
