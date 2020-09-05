#include"student.h"
#include<iostream>
using namespace std;




void stu::init(int age)
{
	this->age = age;
}

void stu::description() const
{
	cout << age << endl;
}
