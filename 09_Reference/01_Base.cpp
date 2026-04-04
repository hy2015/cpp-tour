#include <iostream>
using namespace std;

int main01()
{
	int a = 10;
	int c = 2;
	int& b = a;
	// int& d; wrong, must be initialized
	// &b = c; cannot be changed


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}