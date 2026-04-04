#include <iostream>
#include <string>

using namespace std;

void test_str07()
{
	string str = "hello";

	str.insert(1, "111");

	cout << "After inserting \"111\" at index 1, str = " << str << endl;

	str.erase(1, 3);
	cout << "After erasing 3 characters starting from index 1, str = " << str << endl;
}

int main_str07()
{
	test_str07();

	return 0;
}