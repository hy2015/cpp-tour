#include <iostream>
using namespace std;

class Gens
{
public:

	Gens() 
	{
		cout << "Gens 无参构造函数调用" << endl;
	}

	Gens(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Gens 有参构造函数调用" << endl;
	}

	Gens(const Gens& g)
	{
		cout << "Gens 拷贝构造函数调用" << endl;
		m_Age = g.m_Age;
		m_Height = new int( * g.m_Height); // Deep Copy
	}

	~Gens()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Gens 析构函数调用" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test07()
{
	Gens g1 = Gens(10, 162);

	cout << "g1 的年龄是：" << g1.m_Age << "，身高是：" << *g1.m_Height << endl;

	Gens g2 = Gens(g1);
	
	cout << "g2 的年龄是：" << g2.m_Age << "，身高是：" << *g2.m_Height << endl;
}

int main07()
{

	test07();
	system("pause");
	return 0;
}