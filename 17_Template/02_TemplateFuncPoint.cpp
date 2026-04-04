#include <iostream>

using namespace std;

template<class T>
void func()
{
	cout << "Invoke func()" << endl;
}

void test()
{
	func<int>();
}

int main02()
{
	test();
	return 0;
}