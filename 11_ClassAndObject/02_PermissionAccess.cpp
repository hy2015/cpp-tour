#include <iostream>
using namespace std;

class Person
{
public:
	string name;
protected:
	string car;
private:
	string password;

public: 
	void func() 
	{
		name = "zhangsan";
		car = "posche";
		password = "123456";
	}
};

int main02()
{
	Person p;
	p.name = "aaa";
    // p.car = "bbb";
	// p.password = "ccc";
	p.func();
	return 0;
}