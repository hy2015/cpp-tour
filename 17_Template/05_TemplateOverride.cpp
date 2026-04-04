#include <iostream>

using namespace std;

void myPrint(int a, int b)
{
	cout << "Invoke normal function" << endl;
}

template <class T>
void myPrint(T a, T b)
{
	cout << "Invoke function template" << endl;
}

template <class T>
void myPrint(T a, T b, T c)
{
	cout << "Invoke function template(a, b, c)" << endl;
}


void test05()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);  // 1. Invoke normal function in priority

	// 2. Call empty paramter template will mandatorily invoke function template
	myPrint<>(a, b);

	// 3. Call the override function template
	myPrint(a, b, 30);

	// 4. Better match, will call function template
	char c = 'c';
	char d = 'd';
	myPrint(c, d);
}

int main05()
{
	test05();

	system("pause");
	return 0;
}