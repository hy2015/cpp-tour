#include <iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class A : public Base
{
public:
	void func()
	{

	}
};

class B : protected Base
{
public:
	void func()
	{

	}
};

class C : private Base
{
public:
	void func()
	{

	}
};

int main02()
{
	return 0;
}