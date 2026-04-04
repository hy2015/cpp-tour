#include <iostream>

using namespace std;

template <class T1, class T2>
class Person
{
public:

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "Name: " << this->m_Name << ", Age: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

void printPerson(Person<string, int>& p)
{
	p.showPerson();
}

template <class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1's type is: " << typeid(T1).name() << endl;
	cout << "T2's type is: " << typeid(T2).name() << endl;
}

template <class T>
void printPerson3(T& t)
{
	t.showPerson();
	cout << "T's type is: " << typeid(T).name() << endl;
}

void test10()
{
	Person<string, int> p("Mion", 18);
	printPerson(p);

	Person<string, int> p2("Julia", 30);
	printPerson2(p2);	
	
	Person<string, int> p3("Yuma", 20);
	printPerson3(p3);
}


int main10()
{
	test10();
	system("pause");
	return 0;
}