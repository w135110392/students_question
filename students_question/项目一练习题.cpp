#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;

bool flag = false;

void drawline() {

	string str(100,'-');
	cout << str << endl;
}

/*
			¼ÙÉèÐèÇóÈçÏÂ£º 
					1. ÍøÕ¾ 404 ¹¥»÷ 
					2. ÍøÕ¾´Û¸Ä¹¥»÷ 
					3. ÍøÕ¾¹¥»÷¼ÇÂ¼ 
					4. DNS ¹¥»÷ 
					5. ·þÎñÆ÷ÖØÆô¹¥»÷
*/
void menu() {


	cout << "1. ÍøÕ¾ 404 ¹¥»÷ "<<endl
		<< "2. ÍøÕ¾´Û¸Ä¹¥»÷ " << endl
		<< "3. ÍøÕ¾¹¥»÷¼ÇÂ¼ " << endl
		<< "4. DNS ¹¥»÷ " << endl
		<< "5. ·þÎñÆ÷ÖØÆô¹¥»÷ " << endl;
	drawline();
	cout << "ÇëÑ¡ÔñÐòºÅ:" ;
	
}
void isokcancel(bool flag) {

	cout << "È·ÈÏ?(Y/N)";
	char key;
	if (_kbhit()) {
	
		key = _getch();
		switch (key) {
		case 'y':
		case 'Y':
			flag = true;
			break;
		case'n':
		case 'N':
			break;

		};
	
	}
	



}
void select(char key) {
	
		
		
	
		switch (key) {
		case '1':			
			system("cls");
			cout << "1. ÍøÕ¾ 404 ¹¥»÷.    (°´ ESC ·µ»Ø) " << endl;		
				break;

		case '2':
			system("cls");
			cout << "2. ÍøÕ¾´Û¸Ä¹¥»÷.    (°´ ESC ·µ»Ø) " << endl;
			break;
		case '3':
			system("cls");
			cout << "3. ÍøÕ¾¹¥»÷¼ÇÂ¼.    (°´ ESC ·µ»Ø) " << endl;
			break;
		case '4':
			system("cls");
			cout << "4. DNS ¹¥»÷.    (°´ ESC ·µ»Ø) " << endl;
			break;
		case '5':
			system("cls");
			cout << "5. ·þÎñÆ÷ÖØÆô¹¥»÷.    (°´ ESC ·µ»Ø) " << endl;
			break;
		case 0X1B:
			/*system("cls");
			menu();*/
			break;
		default:
			
			printf("\n\n\n\n\n\n\n\n");

			cout << "ÄãÃ»ÓÐÈÎºÎÑ¡Ôñ,ÇëÖØÐÂÑ¡Ôñ!!!";
			break;
		}
	
}
				
			




int main1(void) {
	while(1){
		system("cls");
		menu();

		
		char key = _getch();
		select(key);
	
		
		putchar('\n');
		system("pause");
	
	}
	

	
	return 0;
}