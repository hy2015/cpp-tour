#include <iostream>

using namespace std;

template<class NameType, class AgeType>
class Person
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void show()
	{
		cout << "name: " << this->m_Name << ", age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

int main07()
{
	Person<string, int> p1("Mion", 18);
	p1.show();
	

	system("pause");

	return 0;
}