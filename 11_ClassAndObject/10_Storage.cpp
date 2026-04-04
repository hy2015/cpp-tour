#include <iostream>
using namespace std;

class Demain
{
	int m_A;  //非静态成员变量 属于类的对象上
	static int m_B; //静态成员变量 不属于类对象上
	void func() {} //非静态成员函数 不属于类对象上
};

void test10()
{
	Demain d;
	cout << "size of d = " << sizeof(d) << endl;
}

int main10()
{
	test10();
	system("pause");
	return 0;
}