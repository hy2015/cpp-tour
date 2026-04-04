#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test02()
{
	ifstream ifs;

	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "Open file failed." << endl;
		return;
	}

	// First
	//char buf[1024] = { 0 };

	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	// Second
	//char buf[1024] = { 0 };

	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	// Third
	//string buf;

	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	// Forth

	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();
}

int main02()
{
	test02();
	return 0;
}