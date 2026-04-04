#include <iostream>

using namespace std;

int myAdd01(int a, int b)
{
	return a + b;
}

template <class T>
T myAdd02(T a, T b)
{
	return a + b;
}

int main04()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, b) << endl;
	cout << myAdd01(a, c) << endl;

	//cout << myAdd02(a, c) << endl;  // Wrong
	cout << myAdd02<int>(a, c) << endl;
	
	system("pause");

	return 0;
}