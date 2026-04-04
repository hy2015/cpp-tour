#include <iostream>
#include <fstream>

using namespace std;

void test01()
{
	ofstream ofs;

	ofs.open("test.txt", ios::out);

	ofs << "Name: Mion" << endl;
	ofs << "Gender: Female" << endl;
	ofs << "Age: 18" << endl;

	ofs.close();
}

int main01()
{
	test01();
	return 0;
}