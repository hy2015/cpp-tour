#include <iostream>
#include <string>

// import <iostream>;  // >=20
using namespace std;


int main12()
{
	char str[] = "hello world";
	cout << str << endl;

	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");
	return 0;
}

template <typename T>
auto value(T t) {
	return t;
}