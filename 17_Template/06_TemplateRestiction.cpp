#include <iostream>

using namespace std;

class Person
{
public:

	Person(int age,string name)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	int m_Age;
	string m_Name;
};

template <class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<> bool myCompare(Person& p1, Person& p2)
{
	return p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name;
}

void test01()
{
	int a = 10;
	int b = 10;
	bool ret = myCompare(a, b);
	
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	Person p1(20, "Mion");
	Person p2(30, "Mion");
	bool ret = myCompare(p1, p2);

	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main06()
{
	test01();
	test02();

	system("pause");
	return 0;
}