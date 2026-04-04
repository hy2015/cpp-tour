#include <iostream>
using namespace std;

class Parent
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Parent
{
public:
	int m_D;
};

int main03()
{
	Son s1;
	cout << sizeof(s1) << endl;
	return 0;
}