#include <iostream>
using namespace std;

void showValue(const int & ref)
{
	// ref = 1000; can not be changed
	cout << "ref = " << ref << endl;
}

int main()
{
	int a = 10;
	showValue(a);
	return 0;
}