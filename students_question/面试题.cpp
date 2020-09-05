#ifndef  GRAPHICS_H
#define  GRAPHICS_H
#include <stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>
#include<graphics.h>
#include"student.h"

using namespace std;
typedef struct team {
	char country[21];
	int get;
	int lost;
	int  score;
}TEAM;


void fun(int a[])
{


	//printf("%d\n", strlen(a));
	printf("%d\n", sizeof(a)); //a为一个地址的大小 或4或8
	printf("%d\n", sizeof(*a));//*a 是什么类型 大小就是 几
	printf("%d\n",*a);

}
void Swap(TEAM *p1, TEAM *p2) {
	
	TEAM tem;
	tem = *p1;
	*p1 = *p2;
	*p2 = tem;
}
inline void forswitch() {


	for (int i = 0; i < 3;i++) {
	
		switch (i) {
		case 1:
			printf("%d",i);
		case 2:
			printf("%d", i);
		case 3:
			printf("%d", i);
		
		}
	}
}
inline void printStr() {

	printf("inline test");

}
//斐波那契数列 求和
void Fibonacci() {

	//1 1 2 3 5 8 13 21 34
	//p1 +p2 =psum  9个数

	unsigned long long sum,p1=1,p2=1;  //sum 和 
	int n;// n个数
	printf("斐波那契计算n个数的和");
	scanf("%d",&n);
	if (n > 0) {
		if (n == 1) {
			sum = 1;
			printf("%3d",1);
		}
		
		if (n == 2) {
			printf("%3d %3d", 1 ,1);
			sum = 2;
		}

		//先把前两个1输出
		printf("%3d %3d", 1, 1);
		//从3开始
		for (int i = 3; i <=n;i++) {
		
			sum = p1 + p2;//从第三个开始
			p1 = p2; //全部的值往前给
			p2 = sum;

			printf("%3lld   ",sum);
		
		}
	}
	else {
		cout << "n需要为正整数。" << endl;
	
	}
}
//获取字符串长度
void getStrSize() {
	/*
	分析: 声明一个字符串数组表示字符串   下标i 表示第几个字符
		 先跳过连续的空格

		 跳过连续的非空格
		 单词个数加 1
		 跳过连续的空格
		 以上为一个操作 继续循环 直到遇到 字符串结束符 '\0' 就退出循环
	*/
	char str[128];
	int count = 0, i = 0;
	printf("一句英语:");
	gets_s(str);
	while (str[i] == ' ')i++;
	while (str[i]) {

		while (str[i]!='\0' && str[i] != ' ')i++;
		count++;
		while (str[i] == ' ')i++;
		
	}
	printf("共有%d个单词\n",count);
}
	

	
	
int  mainmianshi()

{
	

	int arr[5]{1,2,3,4,5};
	int &parr = arr[0];
	*(&parr+1) = 7;
	
	printf("%d\n",arr[2]);
	printf("%d\n", parr);
	putchar('\n');
	cout << arr[2]<<'\n' << parr << endl;
	for (int i = 0; i < 5;i++) {
		printf("%3d  ",*(&parr+i));
		
	}
	putchar('\n');
	for (int i = 0; i < 5;i++) {
	
		printf("%3d", arr[i]);
	
	}
	system("pause");


	stu s1;
	s1.init(30);
	s1.description();
	system("pause");

	int a = 20;
	printf("%p",&a);

	system("pause");
	getStrSize();
	system("pause");






	Fibonacci();
	system("pause");
	TEAM *p1=new TEAM, *p2=new TEAM;
	char t[] = "fsdf";
	strcpy(p1->country, t);
	p1->get = 10;
	p1->lost = 11;
	p1->score = 96;

	char t2[] = "fsdffffdsf";
	strcpy(p2->country, t2);
	p2->get = 100;
	p2->lost = 110;
	p2->score = 98;

	printf("%d\n", p1->get);
	printf("%s\n", p1->country);
	printf("%d\n", p1->lost);
	printf("%d\n", p1->score);

	printf("%d\n", p2->get);
	printf("%s\n", p2->country);
	printf("%d\n", p2->lost);
	printf("%d\n", p2->score);
	
	

	Swap(p1,p2);
	printf("\n\n交换后\n\n");
	printf("%d\n", p1->get);
	printf("%s\n", p1->country);
	printf("%d\n", p1->lost);
	printf("%d\n", p1->score);

	printf("%d\n", p2->get);
	printf("%s\n", p2->country);
	printf("%d\n", p2->lost);
	printf("%d\n", p2->score);


	for (int i = 0; i < 8;i++) {
	
		for (int j = 0; j <= i;j++) {
		
			printf("*");
		
		} 
		printf("\n");
	}
	string line(9,'*');
	cout << line << endl;
	for (int i = 0; i < 8;i++) {
		for (int j = 0; j < 8 - i;j++) {
			printf("*");
		
		}
		printf("\n");
	}
	

	system("pause");
	return 0;
}
#endif // ! GRAPHICS_H
