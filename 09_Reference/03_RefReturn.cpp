#include <iostream>
using namespace std;

int& test01()
{
	int a = 20;
	return a;
}

int& test02()
{
	static int a = 10;
	return a;
}

int main03()
{
	int& ref = test01();

	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	int& ref2 = test02();

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	return 0;
}