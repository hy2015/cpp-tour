#include <iostream>

using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template <class T>
class MyClass
{
public:
	void func1() 
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}

	T obj;
};


int main09()
{
	MyClass<Person1> p1;
	MyClass<Person2> p2;

	p1.func1();

	p2.func2();

	system("pause");
	return 0;
}