#include<iostream>
#include<windows.h>
using namespace std;


int main(){
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

	system("pause");
	return 0;
}