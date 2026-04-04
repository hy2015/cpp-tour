#include <iostream>
using namespace std;

class Certains
{
public:
	Certains(int age)
	{
		this->age = age;
	}
	
	Certains& CertainsAddAge(Certains c)
	{
		this->age += c.age;
		return *this;
	}

	int age;
};

void test11()
{
	Certains c(30);
	cout << "c's age is " << c.age << endl;

}

void test11_2()
{
	Certains c1(10);
	Certains c2(10);

	c2.CertainsAddAge(c1).CertainsAddAge(c1).CertainsAddAge(c1);
	cout << "c's age is " << c2.age << endl;

}

int main11()
{
	test11();
	test11_2();
	system("pause");
	return 0;
}