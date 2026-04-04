#include <iostream>
#include <string>

using namespace std;

void test_str05()
{
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 and str2 are equal" << endl;
	}
	else if(str1.compare(str2) < 0)
	{
		cout << "str1 is less than str2" << endl;
	}
	else 
	{
		cout << "str1 is greater than str2" << endl;
	}
}

int main_str05()
{
	test_str05();
	
	return 0;
}