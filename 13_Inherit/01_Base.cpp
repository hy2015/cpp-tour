#include <iostream>
using namespace std;

class BasePage
{
public:
	void header() 
	{
		cout << "This is a header" << endl;
	}
	void footer() 
	{
		cout << "This is a footer" << endl;
	}
	void leftMenu() 
	{
		cout << "This is left menu" << endl;
	}
};

class Java : public BasePage
{
public:
	void content()
	{
		cout << "These are Java Videos" << endl;
	}
};

class Cpp : public BasePage
{
public:
	void content()
	{
		cout << "These are Cpp Videos" << endl;
	}
};

class Python : public BasePage
{
public:
	void content()
	{
		cout << "These are Python Videos" << endl;
	}
};

void test01()
{
	cout << "This is Java Page" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.leftMenu();
	ja.content();

	cout << "--------------------" << endl;

	cout << "This is Cpp Page" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.leftMenu();
	cpp.content();

	cout << "--------------------" << endl;

	cout << "This is Python Page" << endl;
	Python py;
	py.header();
	py.footer();
	py.leftMenu();
	py.content();

	cout << "--------------------" << endl;
}


int main01()
{
	test01();
	return 0;
}