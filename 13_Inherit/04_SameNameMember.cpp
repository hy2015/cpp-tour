#include <iostream>
using namespace std;

class Base
{
public:
	int m_A;

	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "invoke Base func()" << endl;
	}

	void func(int a)
	{
		cout << "invoke Base func(int a)" << endl;
	}
};

class Son : public Base
{
public:
	int m_A;

	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "invoke Son func()" << endl;
	}

	
};

void test()
{
	Son s1;
	cout << "Son m_A = " << s1.m_A << endl;
	cout << "Base m_A = " << s1.Base::m_A << endl;
}

void test2()
{
	Son s1;
	s1.func();
	s1.Base::func();
	s1.Base::func(100);
}


int main04()
{
	test2();
	return 0;
}