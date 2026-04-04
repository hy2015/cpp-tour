#include <iostream>
using namespace std;

int* func2()
{
	int* p = new int(10);
	return p;
}

int main03()
{
	int* p = func2();
	cout << *p << endl;
	cout << *p << endl;
	return 0;
}