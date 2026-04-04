#include <iostream>

using namespace std;

template <class T1, class T2>
class Person;

template <class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "Outside class ---> Name: " << p.m_Name << ", Age: " << p.m_Age << endl;
}

template <class T1, class T2>
class Person
{
	// Global Function
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "Name: " << p.m_Name << ", Age: " << p.m_Age << endl;
	}

	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


void test14()
{
	Person<string, int> p1("Mion", 18);
	printPerson(p1);


	Person<string, int> p2("Yuna", 19);
	printPerson2(p2);
}

int main14()
{
	test14();
	system("pause");
	return 0;
}