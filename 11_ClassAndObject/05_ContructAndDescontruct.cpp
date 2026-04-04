#include <iostream>
using namespace std;

class Person2
{
public:
	Person2()
	{
		cout << "Person2 构造函数的调用" << endl;
	}

	~Person2()
	{
		cout << "Person2 析构函数的调用" << endl;
	}
};

void test()
{
	Person2 p;
}

int main05()
{
	test();

	system("pause");
	return 0;
}