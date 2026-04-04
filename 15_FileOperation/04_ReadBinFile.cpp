#include <iostream>
#include <fstream>

using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test04()
{
	ifstream ifs;

	ifs.open("person.txt", ios::in | ios::binary);
	
	if (!ifs.is_open())
	{
		cout << "Open file failed." << endl;
	}

	Person p;

	ifs.read((char*)&p, sizeof(p));

	cout << "The Name is: " << p.m_Name << ", the age is: " << p.m_Age << "." << endl;
}

int main()
{
	test04();
	return 0;
}