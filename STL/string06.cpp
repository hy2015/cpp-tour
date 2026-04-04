#include <iostream>
#include <string>

using namespace std;

void test_str06()
{
	string str = "hello";

	for (size_t i = 0; i < str.size(); ++i)
	{
		cout << "str1[" << i << "] = " << str[i] << endl;
	}

	cout << endl;

	for (size_t i = 0; i < str.size(); ++i)
	{
		cout << "str1.at(" << i << ") = " << str.at(i) << endl;
	}

	str[0] = 'H';
	cout << "After modifying str1[0], str1 = " << str << endl;
	str.at(1) = 'A';
	cout << "After modifying str1.at(1), str1 = " << str << endl;
}

int main_str06()
{
	test_str06();

	return 0;
}