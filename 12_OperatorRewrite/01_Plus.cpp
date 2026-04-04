#include <iostream>
using namespace std;

class Person
{
public:
	
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
	int m_A;
	int m_B;
};

Person operator+(Person& p1, Person p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

int main01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person p2;
	p2.m_A = 20;
	p2.m_B = 30;

	Person p3 = p1 + p2;
	//Person p3 = p1.operator+(p2);
	//Person p3 = operator+(p1, p2);


	cout << "p3's m_A is: " << p3.m_A << endl;
	cout << "p3's m_B is: " << p3.m_B << endl;

	return 0;
}