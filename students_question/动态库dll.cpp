
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<math.h>
#include<time.h>
#include<thread>
#include<string>
#include<math.h>
using namespace std;
void print() {

	printf("���ǻ����!\n");

}
_declspec(dllexport)void whatAreYouWant() {


}


typedef	struct {

	int width; //��
	int flong; //��
	int area; //���
}Floor, Tiles;


int maindll() { //int argc, char *argv[]
	/*
	������
	ֻ�ܱ�1�ͱ������� i%i==0  i%1==0;
	*/
	/*while (1) {
		int  numb, count = 0;
		printf("����Ҫ�жϵ���:");
		scanf("%d", &numb);

		for (int i = 2; i < numb; i++) {

			if (!(numb%i)) {
				count++;
			}

		}
		cout << numb << "��1��" << numb << "�⣬��" << count << "����Լ��." << endl;
		if (count == 0) {
			printf("%4d������\n", numb);

		}
		else {
			printf("%4d��������\n", numb);
		}

		system("pause");*/
		/*	system("cls");

		}*/

		/*while (1) {
			char a;
			printf("�����д��ĸ");
			scanf("%c", &a);
			char b = a + 32;
			printf("%c��Сд��%c", a, b);
			if (a) {

			}
			else {

				return 1;
			}

			system("pause");

		}*/
	//printf("abcdef\r");
	////printf("hijklm\n");
	//char *hostName = "www.baidu.com";
	//string *name = (string*)"www.qq.com";
	//printf("%s\r\n",hostName);
	//printf("%s\r\n",name);
	
	//const int a = 10;
	////a = 5; ������
	//int *p = (int*)&a;
	//*p = 5;
	//cout << a << endl;


	//string n = "double";
	//string l = "test";
	//char str[] = "double1";
	//char arr[15][15];
	//memset(arr, '+', sizeof(arr));
	//for (int i = 0; i < 15;i++) {
	//	for (int j = 0; j < 15;j++) {
	//	
	//		printf("%c", arr[0][j]);
	//	}
	//}

	/*thread  myprintf(print);*/

	/*	printf("%d\n", sizeof("�Ұ��й�!"));
		printf("%d\n", sizeof("double1"));
		cout << sizeof(n)<<endl;
		cout << sizeof(str) << endl;
		cout << sizeof(l) << endl;*/


	//char choice[10] = {0};
	//scanf_s("%s", &choice,sizeof(choice));
	//printf("%s",choice);
	/*
	
	����Ŀ�Ϊ m ��Ϊn 
	�ó�Ϊ2 ��Ϊ1��שȥ��
	��ש�������� שֻ�������� 
	ʾ�� ���Ϊ7 שΪ3
		 ���Ϊ6שΪ3
	
	*/

	//Floor floor;
	////�õ���������
	//int m, n;
	//printf("����Ŀ�,����ĳ�:");
	//scanf("%d  %d", &m, &n);
	//floor.width = m;
	//floor.flong = n;
	//
	//floor.area = floor.width*floor.flong; 

	////��ש�����
	//Tiles tiles;
	//tiles.width = 1;
	//tiles.flong = 2;
	//tiles.area = tiles.width*tiles.flong;
	////���ճ���Ҫ��ש������
	//int count1,count2;
	//if (floor.width%tiles.width == 0) {
	//	count1 = floor.width / tiles.width;
	//}
	//else {
	//	count1 = (floor.width / tiles.width) + 1;
	//}


	//if (floor.flong%tiles.flong == 0) {
	//	count2 = floor.flong / tiles.flong;
	//}
	//else {
	//	count2 = (floor.flong /tiles.flong)+1 ;
	//}
	//printf("�������Ҫ%d\t�������Ҫ%d\n",count1,count2);
	//count1 = count1 * count2;
	//printf("����Ҫ%d��%d*%d�ĵذ�ש\n",count1,tiles.width,tiles.flong);

//int arr[100];
//    int n;//n�η�
//	int k;
//	int sum1=1;
//	scanf("%d", &k);
//	scanf("%d",&n);
//	
//	
////��n��k ��������
//	for (int i = 0; i < n;i++) {
//		//arr[i] = k;
//		sum1 *= k;
//	}
//	
//	printf("%d\n", sum1);
//
//	int sum2 = pow(k, n);
//	printf("%d\n", sum2);
//	
//
//
int a= 100;
while (a++<103) {


}
printf("%d",a);

	system("pause");
	return 0;
}


