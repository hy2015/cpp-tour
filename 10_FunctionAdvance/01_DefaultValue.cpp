#include <iostream>
using namespace std;

int func(int a = 10, int b = 20, int c = 30)
{
	return a + b + c;
}

int main01()
{
	cout << func() << endl;
	return 0;
}