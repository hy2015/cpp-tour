#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void putInCup() = 0;
	virtual void addSomething() = 0;

	void doMake()
	{
		boil();
		brew();
		putInCup();
		addSomething();
	}
};

class Coffee : public AbstractDrinking
{
public:
	virtual void boil() 
	{
		cout << "boil with mineral water" << endl;
	};
	virtual void brew()
	{
		cout << "brew coffee" << endl;
	}
	virtual void putInCup()
	{
		cout << "put into cup" << endl;
	}
	virtual void addSomething()
	{
		cout << "add milk and suger" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	virtual void boil()
	{
		cout << "boil with distilled water" << endl;
	};
	virtual void brew()
	{
		cout << "brew tea" << endl;
	}
	virtual void putInCup()
	{
		cout << "put into cup" << endl;
	}
	virtual void addSomething()
	{
		cout << "add lemon" << endl;
	}
};

void doMake(AbstractDrinking* abd)
{
	abd->doMake();
	delete abd;
}

void test05()
{
	doMake(new Coffee);

	cout << "------------------" << endl;

	doMake(new Tea);
}

int main04()
{
	test05();
	return 0;
}