#include <iostream>
using namespace std;

int main01()
{
	int a = 10;
	int* p;
	p = &a;

	cout << "The address of a is: " << &a << endl;
	cout << "The pointer p is: " << p << endl;

	*p = 1000;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}