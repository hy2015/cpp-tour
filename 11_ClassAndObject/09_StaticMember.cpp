#include <iostream>
using namespace std;

class Cai
{
public:
	static int m_A;

	static void func()
	{
		cout << "static void func µ÷ÓÃ" << endl;
	}
};

int Cai::m_A = 100;

void test09()
{
	Cai c;
	cout << c.m_A << endl;

	Cai c2;
	c2.m_A = 200;
	cout << c2.m_A << endl;

	Cai::func();
}

int main09()
{
	test09();
	system("pause");
	return 0;
}