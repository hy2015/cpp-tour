#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal() 
	{
		cout << "Animal Contruct Function" << endl;
	}


	//virtual ~Animal()
	//{
	//	cout << "Animal Deconstruct Function" << endl;
	//}m 
	virtual ~Animal() = 0;
	virtual void speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal Pure Deconstruct Function" << endl;
}

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat Contruct Function" << endl;
		m_Name = new string(name);
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat Deconstruct Function" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	void speak()
	{
		cout << *m_Name << " Cat is speaking" << endl;
	}

	string *m_Name;
};

void test061()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;
}

int main05()
{
	test061();
	return 0;
}