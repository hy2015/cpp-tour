#include <iostream>
using namespace std;

int main02()
{
	int a = 10;
	int* p = &a;

	cout << "sizeof (int *) = " << sizeof(p) << endl;
	cout << "sizeof (int *) = " << sizeof(float *) << endl;
	cout << "sizeof (int *) = " << sizeof(double *) << endl;
	cout << "sizeof (int *) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}