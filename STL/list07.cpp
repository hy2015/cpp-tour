#include <iostream>
#include <list>

using namespace std;

class Person07
{
public:

	Person07(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

void printPerson07(const list<Person07>& L)
{
	for (list<Person07>::const_iterator it = L.begin(); it != L.end(); ++it)
	{
		cout << "Name: " << it->m_Name << ", Age: " << it->m_Age << ", Height: " << it->m_Height << endl;
	}
}

void test07()
{
	list<Person07> L;

	Person07 p1("aaa", 35, 175);
	Person07 p2("bbb", 45, 180);
	Person07 p3("ccc", 50, 170);
	Person07 p4("ddd", 40, 165);
	Person07 p5("eee", 30, 160);
	Person07 p6("fff", 25, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	printPerson07(L);

	cout << "------------------------------" << endl;
	cout << "After sort" << endl;
	L.sort(); // This will cause a compilation error because std::list does not know how to compare Person07 objects by default.
	printPerson07(L);
}

int main()
{
	test07();
	return 0;
}