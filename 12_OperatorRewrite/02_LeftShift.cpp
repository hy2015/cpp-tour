#include <iostream>
using namespace std;

class People
{
	friend ostream& operator<<(ostream& cout, People& p);

public:
	People(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream& cout, People& p)
{
	cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
	return cout;
}

void test02()
{
	People p(10, 20);
	
	cout << p << " hello world" << endl;
}

int main02()
{
	test02();

	return 0;
}