#include <iostream>
using namespace std;

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main01() 
{
	cout << add(1, 2) << endl;
	system("pause");
	return 0;
}