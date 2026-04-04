#include <iostream>
using namespace std;

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test06()
{
	MyPrint myPrint;
	myPrint("hello world");

	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	test06();
	return 0;
}