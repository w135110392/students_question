//pdf ��ʽ������Ҫ��ת����Word��ʽ
#include<iostream>
#include<windows.h>
using namespace std;
void for_out(){
	int a[4][5] = {
		{ 1 },
		{ 2 },
		{ 2, 3, 5, 6, 7 },
		{ 0 }
	};
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){

			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "--------------------------\n";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j< 5; j++){

			cout << a[i % 4][j % 5] << " "; //�����˵Ķ������� ���� 0/4 ��0  1/4 ��1   
		}
		cout << "\n";
	}
}
void point(){
	int a[5] = { 1, 10, 3, 4, 6 };
	int *ptr = (int*)(&a+1); //ȡ��ַ��1 �������һ�� ͬ���������ַ
	cout << *(a + 1) << endl;
	cout << *(ptr-1) << endl;  //ָ���1 �Ǽ�һ��Ԫ�ص�ַ ����һ������
}

void dll(){
	char c[16] = "test";  //new ��� �Ĺ����� ָ��������ָ ����ʹ��delete �ͷ�
	char *a = new char;
	a = c;
	for (int i = 0; i < sizeof(c) / sizeof(char);i++){
		cout << *(a + i);
	}
	cout << "\n";
	delete a;  //�˴������ͷ�

}
int main(){
	
	dll();
	cout << "nice to meet you,Chinese.";
	system("pause");
	
	return 0;
}