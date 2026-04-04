#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func() = 0;
};

class Son: public Base
{
public:
	void func()
	{
		cout << "Invoke func()" << endl;
	}
};

void test04()
{
	Base* s = new Son;

	s->func();

}

int main03()
{
	test04();
	return 0;
}