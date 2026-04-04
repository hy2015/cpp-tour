#include <iostream>
using namespace std;


class Quelquun
{
public:

	Quelquun() : m_A(10), m_B(20), m_C(30)
	{

	}

	Quelquun(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test08()
{
	Quelquun q;
	cout << "m_A = " << q.m_A << endl;
	cout << "m_B = " << q.m_B << endl;
	cout << "m_C = " << q.m_C << endl;

	Quelquun q2(30, 20, 10);
	cout << "m_A = " << q2.m_A << endl;
	cout << "m_B = " << q2.m_B << endl;
	cout << "m_C = " << q2.m_C << endl;
}

int main08()
{

	test08();

	system("pause");
	return 0;
}