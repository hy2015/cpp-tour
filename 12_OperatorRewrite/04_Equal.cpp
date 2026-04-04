#include <iostream>
using namespace std;

class Man
{
public:
	Man(int age)
	{
		m_Age = new int(age);
	}
	~Man()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	Man& operator=(Man& m)
	{
		//±àÒëÆ÷Ìá¹©µÄÇ³¿½±´
		//m_Age = m.m_Age;

		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*m.m_Age);

		return *this;
	}

	int* m_Age;
};

void test04()
{
	Man m1(10);
	Man m2(20);
	Man m3(30);

	m3 = m2 = m1;

	cout << "m1's age is: " << m1.m_Age << endl;
	cout << "m2's age is: " << m2.m_Age << endl;
	cout << "m2's age is: " << m3.m_Age << endl;
	cout << "m1's age is: " << *m1.m_Age << endl;
	cout << "m2's age is: " << *m2.m_Age << endl;
	cout << "m2's age is: " << *m3.m_Age << endl;
}

int main04()
{
	test04();
	return 0;
}