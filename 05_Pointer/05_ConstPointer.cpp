#include <iostream>
using namespace std;

int main05()
{
	// const pointer
	int a = 10;
	int b = 20;
	const int* p = &a;
	// *p = b; //ilegal
	p = &b;

	// pointer const
	int* const p2 = &a;
	*p2 = b;
	// p2 = &b;  //ilegal

	// const pointer const
	const int* const p3 = &a;
	// *p3 = b;
	// p3 = &b;

	cout << *p << endl;

	system("pause");
	return 0;
}