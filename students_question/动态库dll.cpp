
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

	printf("我们会结婚的!\n");

}
_declspec(dllexport)void whatAreYouWant() {


}


typedef	struct {

	int width; //宽
	int flong; //长
	int area; //面积
}Floor, Tiles;


int maindll() { //int argc, char *argv[]
	/*
	素数：
	只能被1和本身整除 i%i==0  i%1==0;
	*/
	/*while (1) {
		int  numb, count = 0;
		printf("输入要判断的数:");
		scanf("%d", &numb);

		for (int i = 2; i < numb; i++) {

			if (!(numb%i)) {
				count++;
			}

		}
		cout << numb << "除1和" << numb << "外，有" << count << "个公约数." << endl;
		if (count == 0) {
			printf("%4d是质数\n", numb);

		}
		else {
			printf("%4d不是质数\n", numb);
		}

		system("pause");*/
		/*	system("cls");

		}*/

		/*while (1) {
			char a;
			printf("输入大写字母");
			scanf("%c", &a);
			char b = a + 32;
			printf("%c的小写是%c", a, b);
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
	////a = 5; 不可以
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

	/*	printf("%d\n", sizeof("我爱中国!"));
		printf("%d\n", sizeof("double1"));
		cout << sizeof(n)<<endl;
		cout << sizeof(str) << endl;
		cout << sizeof(l) << endl;*/


	//char choice[10] = {0};
	//scanf_s("%s", &choice,sizeof(choice));
	//printf("%s",choice);
	/*
	
	地面的宽为 m 长为n 
	用长为2 宽为1的砖去铺
	球砖的最大块数 砖只能是整数 
	示例 面积为7 砖为3
		 面积为6砖为3
	
	*/

	//Floor floor;
	////得到地面的面积
	//int m, n;
	//printf("地面的宽,地面的长:");
	//scanf("%d  %d", &m, &n);
	//floor.width = m;
	//floor.flong = n;
	//
	//floor.area = floor.width*floor.flong; 

	////瓷砖的面积
	//Tiles tiles;
	//tiles.width = 1;
	//tiles.flong = 2;
	//tiles.area = tiles.width*tiles.flong;
	////按照长需要的砖的数量
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
	//printf("宽最大需要%d\t长最大需要%d\n",count1,count2);
	//count1 = count1 * count2;
	//printf("共需要%d块%d*%d的地板砖\n",count1,tiles.width,tiles.flong);

//int arr[100];
//    int n;//n次方
//	int k;
//	int sum1=1;
//	scanf("%d", &k);
//	scanf("%d",&n);
//	
//	
////将n个k 放入数组
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


