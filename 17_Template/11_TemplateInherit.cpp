#include <iostream>

using namespace std;

template <class T>
class Base
{
public:
	T m;
};

class Son : public Base<int>
{

};

template <class T1, class T2>
class Son2 : public Base<T2>
{
public:
	Son2() 
	{
		cout << "T1's type is: " << typeid(T1).name() << endl;
		cout << "T2's type is: " << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test11()
{
	Son s1;

	Son2<int, char> s2;
}

int main11()
{
	test11();
	system("pause");
	return 0;
}