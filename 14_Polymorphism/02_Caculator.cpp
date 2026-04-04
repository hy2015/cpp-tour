#include <iostream>
#include <string>

using namespace std;

class Caculator
{
public:

	int getResult(string opr) {
		if (opr == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (opr == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (opr == "*")
		{
			return m_Num1 * m_Num2;
		}
	}

	int m_Num1;
	int m_Num2;
};

class AbstractCaculator
{
public:
	virtual int getReuslt() 
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

class AddCaculator : public AbstractCaculator
{
	int getReuslt()
	{
		return m_Num1 + m_Num2;
	}
};

class SubstractCaculator : public AbstractCaculator
{
	int getReuslt()
	{
		return m_Num1 - m_Num2;
	}
};

class MultipleCaculator : public AbstractCaculator
{
	int getReuslt()
	{
		return m_Num1 * m_Num2;
	}
};

void test02() 
{
	Caculator cal;
	cal.m_Num1 = 10;
	cal.m_Num2 = 10;

	cout << cal.m_Num1 << " + " << cal.m_Num2 << " = " << cal.getResult("+") << endl;
	cout << cal.m_Num1 << " - " << cal.m_Num2 << " = " << cal.getResult("-") << endl;
	cout << cal.m_Num1 << " * " << cal.m_Num2 << " = " << cal.getResult("*") << endl;
}

void test03()
{
	AbstractCaculator* abc = new AddCaculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getReuslt() << endl;
	delete abc;

	abc = new SubstractCaculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getReuslt() << endl;
	delete abc;

	abc = new MultipleCaculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getReuslt() << endl;
	delete abc;
}

int main02()
{
	test03();
	return 0;
}