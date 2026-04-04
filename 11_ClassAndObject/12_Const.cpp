#include <iostream>
using namespace std;


class Someone
{
public:

	void show() const
	{
		this->m_A = 1000;
		cout << this->m_A << endl;
	}

	mutable int m_A;
};

void test12()
{
	Someone s;
	s.show();

	const Someone s1;
}

int main12()
{
	test12();
	system("pause");
	return 0;
}