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
			�����������£� 
					1. ��վ 404 ���� 
					2. ��վ�۸Ĺ��� 
					3. ��վ������¼ 
					4. DNS ���� 
					5. ��������������
*/
void menu() {


	cout << "1. ��վ 404 ���� "<<endl
		<< "2. ��վ�۸Ĺ��� " << endl
		<< "3. ��վ������¼ " << endl
		<< "4. DNS ���� " << endl
		<< "5. �������������� " << endl;
	drawline();
	cout << "��ѡ�����:" ;
	
}
void isokcancel(bool flag) {

	cout << "ȷ��?(Y/N)";
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
			cout << "1. ��վ 404 ����.    (�� ESC ����) " << endl;		
				break;

		case '2':
			system("cls");
			cout << "2. ��վ�۸Ĺ���.    (�� ESC ����) " << endl;
			break;
		case '3':
			system("cls");
			cout << "3. ��վ������¼.    (�� ESC ����) " << endl;
			break;
		case '4':
			system("cls");
			cout << "4. DNS ����.    (�� ESC ����) " << endl;
			break;
		case '5':
			system("cls");
			cout << "5. ��������������.    (�� ESC ����) " << endl;
			break;
		case 0X1B:
			/*system("cls");
			menu();*/
			break;
		default:
			
			printf("\n\n\n\n\n\n\n\n");

			cout << "��û���κ�ѡ��,������ѡ��!!!";
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