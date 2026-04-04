#include<iostream>
using namespace std;

class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base::m_A = 100;

class Son: public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200;

void test02()
{
	Son s;
	cout << "Through Object -> " << endl;
	cout << "m_A of Son = " << s.m_A << endl;
	cout << "m_A of Base = " << s.Base::m_A << endl;

	cout << "Through Class Name -> " << endl;
	cout << "m_A of Son = " << Son::m_A << endl;
	cout << "m_A of Base = " << Son::Base::m_A << endl;
}

void test03()
{
	Son s;
	cout << "Through Object -> " << endl;
	s.func();
	s.Base::func();

	cout << "Through Class Name -> " << endl;
	Son::func();
	Son::Base::func();

	//s.func(100);
	Son::Base::func(100);
}


int main05() {
	//test02();
	test03();
	return 0;
}