#include<iostream>
using namespace std;

class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_B = 100;
	}
	int m_B;
};

class Son: public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test04()
{
	Son s;
	cout << "sizeof(Son) -> " << sizeof(s) << endl;
}

int main06()
{
	test04();
	return 0;
}