#include<iostream>
#include<easyx.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"WINMM.LIB")
using namespace std;


#define PRAGMA_WIDTH 800 
#define PRAGMA_HEIGHT 450 


//_0000_ͼ��-148.jpg   �� _0147_ͼ��-1.jpg


int mainjile(void) {
	GetHWnd();

	IMAGE arr[148];
	char filename[128];
	int count = sizeof(arr) / sizeof(arr[0]);

	for (int i = 1; i <= count; i++) {

		sprintf(filename, "resource\\images\\_%04d_ͼ��-%d.jpg", count - i, i);
		loadimage(&arr[count-i], filename);

	}
	

	
	mciSendString("open resource\\music\\muyangqu.mp3 alias muyang", 0, 0, 0);
	mciSendString("play  muyang repeat", 0, 0, 0);
	HWND hwnd=initgraph(PRAGMA_WIDTH, PRAGMA_HEIGHT);
	SetWindowText(hwnd, "���־���");
	while(1){
		for (int i = 0; i < count; i++) {
			putimage(0, 0, &arr[i]);
			Sleep(150);
		}

	}

	

	system("pause");
	return 0;
}