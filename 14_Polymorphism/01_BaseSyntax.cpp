#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "The animal is speaking." << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "The cat is speaking." << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "The dog is speaking." << endl;
	}
};

void doSpeak(Animal & animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main01()
{
	test01();
	return 0;
}