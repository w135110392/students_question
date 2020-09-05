#include<iostream>
using namespace std;

//1.





/*
		2.编写一个程序，使用cin 从标准输入输入3段文字，
		保存到一段动态分配的内存中，每一段文字输入后，必须要即使保存到动态内存中
*/
void input(char *str,char **result) {
	scanf("%s", &(*str));
	
	*result = str;

}



//3.




//通过外部指针 修改 局部static 
int * add(int number1,int  number2) {
	static int sum = 0;
	printf("%d\n", sum);
	sum = number1 + number2;
	return &sum;
}







//A B C D E     E A D C B 根据关系赋值  根据值来排名
//E  A D  C B
void ranking() {
	char arr[5] = { 'A', 'B','C', 'D', 'E' };
	char *p=arr;

	//假设 E为第一名
	arr[0] = 'E';
	if (arr[0] == 'E') {
		arr[2] = 'D';
		arr[0] != 'A';
		arr[4] != 'A';
		arr[1] = 'A';
		//假设B 为第五名
		arr[4] = 'B';
		if (arr[4] == 'B') {
		
			arr[3] = 'C';
		}
	}

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++) {
	
		printf("第%d名是%2c  ",i+1,arr[i]);
	}
}

int main9(void) {

	
	/*char*str = new char[sizeof(char) * 128];
	char **result=new char*[128];
	input(str,result);
	int count = strlen(*result);
	printf("count=%3d\n%3s\n",count, *result);
	putchar('\n');
	*/


	//
	//int *sum = NULL;
	//sum = add(8, 4);
	//*sum = 18888;
	//sum = add(8, 4);




	ranking();



	system("pause");
	return 0;
}