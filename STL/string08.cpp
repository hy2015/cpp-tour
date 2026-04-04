#include <iostream>
#include <string>

using namespace std;

void test_str08()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "The substring of str starting from index 1 with length 3 is: " << subStr << endl;

	string email = "sample.sz@qq.com";

	int pos = email.find('@');
	cout << pos << endl;

	string username = email.substr(0,  pos);
	cout << "The username part of the email is: " << username << endl;
}

int main_str08()
{
	test_str08();

	return 0;
}