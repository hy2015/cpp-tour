#include <iostream>
using namespace std;

class Man
{
public:
	Man()
	{
		cout << "Man 无参构造函数的调用" << endl;
	}

	Man(int a)
	{
		age = a;
		cout << "Man 有参构造函数的调用" << endl;
	}

	Man(const Man& m)
	{
		age = m.age;
		cout << "Man 拷贝构造函数的调用" << endl;
	}

	~Man()
	{
		cout << "Man 析构函数的调用" << endl;
	}

	int age;
};

void test01()
{
	// 1、括号法
	Man m;
	Man m1(10);
	Man m2(m1);

	cout << "p1的年龄：" << m1.age << endl;
	cout << "p2的年龄：" << m2.age << endl;

	// 2、显示法
	Man m21 = Man(10);
	Man m31 = Man(m21);

	// 3、隐式转换法
	Man m4 = 10;
	Man m5 = m4;
}

void doWork(Man man) {

}

void test02()
{
	Man m;
	doWork(m);
}

int main06()
{
	//test01();
	test02();

	system("pause");
	return 0;
}