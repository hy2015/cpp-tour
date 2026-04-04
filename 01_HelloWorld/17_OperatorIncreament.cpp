#include <iostream>
using namespace std;


int main17()
{
	int a1 = 2;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << ", b1 = " << b1 << endl;


	int a2 = 2;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << ", b2 = " << b2 << endl;
	system("pause");
	return 0;
}