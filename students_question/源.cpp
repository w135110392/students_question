//pdf 格式复制需要先转换成Word格式
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

			cout << a[i % 4][j % 5] << " "; //除不了的都是余数 比如 0/4 余0  1/4 余1   
		}
		cout << "\n";
	}
}
void point(){
	int a[5] = { 1, 10, 3, 4, 6 };
	int *ptr = (int*)(&a+1); //取地址加1 代表加了一个 同样的数组地址
	cout << *(a + 1) << endl;
	cout << *(ptr-1) << endl;  //指针减1 是减一个元素地址 不是一个数组
}

void dll(){
	char c[16] = "test";  //new 完后 的过程中 指针另有所指 不能使用delete 释放
	char *a = new char;
	a = c;
	for (int i = 0; i < sizeof(c) / sizeof(char);i++){
		cout << *(a + i);
	}
	cout << "\n";
	delete a;  //此处不能释放

}
int main(){
	
	dll();
	cout << "nice to meet you,Chinese.";
	system("pause");
	
	return 0;
}