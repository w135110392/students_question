#include "a.h"
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
//等差数列求和 从1加到n 个数刚好为n个
void add(int  n, int &sum) {

	sum = ((1 + n)*n) / 2;

}
//等差数列求和 从1加到n 
int add(int  n, int step, int &sum) {
	////1 -5
	////个数为m个 步长为 step
	/*
	等差通项公式 ：an = a1 + (n - 1)d
		an - a1 =
		（n - 1）d
		*/
	int m = 0;
	if (!((n-1)%step)) {
	
	m = (n / step) + 1;
	sum = ((1 + n)*m) / 2;
	}
	
	
	/*for (int i = 1; i <= 5;) {

		sum += i;
		i += step;
	}*/
	return m;
}
int  sum(int m,int n) {
	int sum=0;
	if (m <= 0&&n>0) {
		int sum1 = 0, sum2 = 0;
		for (int i = m; i <0;i++) {
			sum1 += i;
			
		}
		for (int i = 0; i <= n;i++) {
		
			sum2 += i;
		}
	
		sum = sum1 + sum2;
	}
	//都是负数
	if (m<0&&n<0) {
		sum = n;
		do{
		
			sum += m;
			m++;
		
		
		} while (m!= n);
	
	}

	if (m > 0) {
		for (int i = 1; i <= n;i++) {
		
			sum += i;
		}
	}	
	return sum;
}
int main(void) {
	/*
 *   *   *   *

   *   *   *

     *   *

       *
		   
	
	*/
	for (int i = 0; i < 4;i++) {

		for (int j = 0; j < 4;j++) {
		
			int n = 1;
			cout << setw(n) << "*";
			n += 2;
		
		}
		printf("\n");
	
	}


	system("pause");

	int m, n;
	scanf("%d %d",&m,&n);
	system("pause");
	printf("sum=%d\n",sum(m,n));
	system("pause");
	return 0;
}