#include <iostream>

using namespace std;

template <class NameType, class AgeType = int>
class Person
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name << ", age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test08()
{
	// Person p1("Mion", 18); //Wrong must implict the Type
	Person<string, int> p1("Mion", 18);
	p1.showPerson();


	Person<string> p2("Yuma", 20);
	p2.showPerson();
}

int main08()
{
	test08();
	system("pause");
	return 0;
}