	#include<stdio.h>
	#include<iostream>
	#include<string>
	#include "a.h"
	using namespace std;
	typedef struct node {
	int data;
	char *name= nullptr;
	
	}NODE;

	void change(char* *str);

	int  maindd(void){
	////��С�˼��
	//int a = 1;
	//char *p =(char *) &a;
	//if (*p) {
	//	printf("���Ϊ:%d,�˻�����С��ģʽ�洢\n",*p);
	//}
	//else {
	//	printf("���Ϊ:%d,�˻����Ǵ��ģʽ�洢\n",*p);
	//}



	//NODE *node = (NODE *)malloc(sizeof(NODE));
	//(*node).data = 98;
	////(*node).name = (char*)malloc(sizeof(char));
	//node->name = (char*)malloc(sizeof(char)*128);//  0x1000 - 0x1100
	////(*node).name = "����һ���ַ���";  //  0x200 - 0x210
	//
	//strcpy((*node).name,"����һ���ַ���");
	//
	//
	//printf("%d\n,%s\n,%p\n",(*node).data,(*node).name,((*node).name));
	//printf(",%p\n", &((*node).name));
	//
	//char * tmp = node->name;
	//node->name++; //0x1001
	////free(node->name);
	//free(tmp);
	//free(node);
	//node->name = nullptr;
	//node = nullptr;
	
	//int a[] = {1,2,3,4,5,6};
	//
	//int *p = a;
	////printf("%d %d\n",*p,*p++);
	//cout << *p << endl;
	//int *p1 = p++;
	//cout << *p1 << endl;

	//
	
	/*	char *p = "notepad";
		change(&p);
		
		for (int i = 0; i < strlen(p);i++) {
		
			printf("%c", *(p+i));
		}
		putchar('\n');
		system(p);
		p = nullptr;
*/
		while (1) {
			int n = 0,sum=0,step=0;
	printf("�ӵ����٣�");
	scanf("%d",&n);
	printf("�������٣�");
	scanf("%d", &step);
	
	int m=add(n, step,sum = 0 );
	printf("��%d����,�ܺ���%d\n",m,sum);
		system("pause");
		system("cls");
		}
	
		return 0;
	}







	void change(char* *p) {
				
		*p = "tasklist";

	}