#include <iostream>
#include <fstream>

using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test03()
{
	ofstream ofs("person.txt", ios::out | ios::binary);

	Person p = { "Ria", 21 };

	ofs.write((const char*)&p, sizeof(p));

	ofs.close();
}

int main03()
{
	test03();
	return 0;
}