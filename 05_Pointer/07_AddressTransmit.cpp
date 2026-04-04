#include <iostream>
using namespace std;

void swap01(int a, int b);
void swap02(int* p1, int* p2);

int main()
{
	int a = 10;
	int b = 20;

	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}

void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}