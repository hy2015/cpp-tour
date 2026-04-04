#include <iostream>
using namespace std;

//int max(int a, int b);

int main03()
{
	cout << max(1, 2) << endl;
	system("pause");
	return 0;
}


int max(int a, int b)
{
	return a > b ? a : b;
}