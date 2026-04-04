#include <iostream>
using namespace std;

void test01()
{
	int* p = new int(10);
	cout << *p << endl;
	cout << *p << endl;

	delete p;
	cout << *p << endl;
}

void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
}

int main()
{
	test02();
	system("pause");
	return 0;
}