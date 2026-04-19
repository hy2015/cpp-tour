#include <iostream>
using namespace std;

void test01()
{
	cout << "test01" << endl;
}

void test02(int a)
{
	cout << "test02: " << a << endl;
}

int test03() {
	cout << "test03 " << endl;
	return 1000;
}

int test04(int a)
{
	cout << "test04: " << a << endl;
	return a;
}

int main02()
{
	test01();
	test02(150);
	cout << test03() << endl;
	cout << test04(120) << endl;
	
	system("pause");
	return 0;
}