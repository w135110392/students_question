#include<graphics.h>
#include<conio.h>
#include<thread>
void initGame();
void moveStr();


typedef struct {

	int x;
	int y;
	int speed;
}STR;
void moveStr() {
	STR str;
	str.x = 400;
	str.y = 200;
	str.speed = 200;
	
	while (1) {
		
		outtextxy(str.x, str.y, "���ڲ�������......");
		Sleep(str.speed);
		str.x -= 3;
		if (str.x <= 200) {
			Sleep(3000);
			str.x = 500;
			
		}
		fillrectangle(0,200,600,220);
	}

}
void initGame() {
	setbkmode(TRANSPARENT);
	setcolor(WHITE);
	settextcolor(GREEN);
	settextstyle(20, 0, "����");
	//���Ű�ť
	fillrectangle(100,10,140,30);
	outtextxy(100,10,"����");
	//ֹͣ��ť
	fillrectangle(180, 10, 220, 30);
	outtextxy(180, 10, "ֹͣ");
}
int mainmove() {

	MOUSEMSG msg = { 0 };

	initgraph(600, 400);

	//����ĳ�ʼ��
	initGame();
	
	while (1) {
		msg = GetMouseMsg();
		HANDLE hTread;
		DWORD mymoveStr;
		//hTread = CreateThread(NULL, 0, &moveStr, NULL, CREATE_SUSPENDED,NULL);
		
		//���Ű�ť���� ����¼��ж�
		if (msg.x >= 100 && msg.x <= 140 && msg.y >= 0 && msg.y <= 30) {
			if (msg.uMsg == WM_LBUTTONDOWN) {
				
				
				
				//outtextxy(400, 200, "���ڲ�������......");
			}
		}

		//ֹͣ��ť���� ����¼��ж�
		if (msg.x >= 180 && msg.x <= 220 && msg.y >= 0 && msg.y <= 30) {
			if (msg.uMsg == WM_LBUTTONDOWN) {
				

				//TerminateThread(mymoveStr, mymoveStr);
				outtextxy(400, 300, "�����Ѿ�ֹͣ......");

			}
		}

	}

	




	//printf("%d\n",sizeof(long));

	_getch();
	return 0;
}