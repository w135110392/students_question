#include<iostream>
using namespace std;

//1.





/*
		2.��дһ������ʹ��cin �ӱ�׼��������3�����֣�
		���浽һ�ζ�̬������ڴ��У�ÿһ����������󣬱���Ҫ��ʹ���浽��̬�ڴ���
*/
void input(char *str,char **result) {
	scanf("%s", &(*str));
	
	*result = str;

}



//3.




//ͨ���ⲿָ�� �޸� �ֲ�static 
int * add(int number1,int  number2) {
	static int sum = 0;
	printf("%d\n", sum);
	sum = number1 + number2;
	return &sum;
}







//A B C D E     E A D C B ���ݹ�ϵ��ֵ  ����ֵ������
//E  A D  C B
void ranking() {
	char arr[5] = { 'A', 'B','C', 'D', 'E' };
	char *p=arr;

	//���� EΪ��һ��
	arr[0] = 'E';
	if (arr[0] == 'E') {
		arr[2] = 'D';
		arr[0] != 'A';
		arr[4] != 'A';
		arr[1] = 'A';
		//����B Ϊ������
		arr[4] = 'B';
		if (arr[4] == 'B') {
		
			arr[3] = 'C';
		}
	}

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++) {
	
		printf("��%d����%2c  ",i+1,arr[i]);
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