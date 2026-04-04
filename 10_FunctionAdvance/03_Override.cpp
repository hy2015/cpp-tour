#include <iostream>
using namespace std;

void func3()
{
	cout << "func3 的调用" << endl;
}

void func3(int a)
{
	cout << "func3(int a) 的调用" << endl;
}

void func3(double a)
{
	cout << "func3(double a) 的调用" << endl;
}

void func3(int a, double b)
{
	cout << "func3(int a, double b) 的调用" << endl;
}

void func3(double a, int b)
{
	cout << "func3(double a, int b) 的调用" << endl;
}



int main()
{
	func3(3.14, 0);
	return 0;
}