#include <iostream>
using namespace std;

class MyInteger
{

	friend ostream& operator<<(ostream& cout, MyInteger myinteger);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	MyInteger operator++(int)
	{
		MyInteger temp=*this;
		m_Num++;
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger myinteger)
{
	cout << myinteger.m_Num;
	return cout;
}

void test031()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test032()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main03()
{
	test031();
	test032();
	system("pause");
	return 0;
}