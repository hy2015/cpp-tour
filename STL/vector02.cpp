#include <vector>
#include <algorithm>	
#include <iostream>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person> v;
	v.push_back(Person("张三", 20));
	v.push_back(Person("李四", 30));
	v.push_back(Person("王五", 40));
	// 使用迭代器访问容器中的元素
	vector<Person>::iterator itBegin = v.begin();
	vector<Person>::iterator itEnd = v.end();
	for(vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
	{
		//cout << "姓名：" << (*it).m_Name << "，年龄：" << (*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << "，年龄：" << it->m_Age << endl; // 迭代器是一个指针，可以使用箭头运算符访问成员
	}
	/*while (itBegin != itEnd)
	{
		cout << "姓名：" << itBegin->m_Name << "，年龄：" << itBegin->m_Age << endl;
		itBegin++;
	}*/
}

void test02_1()
{
	vector<Person*> v;
	Person p1("张三", 20);
	Person p2("李四", 30);
	Person p3("王五", 40);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	// 使用范围for循环访问容器中的元素
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "姓名：" << (*it)->m_Name << "，年龄：" << (*it)->m_Age << endl;
	}
}

int main02()
{
	test02();
	test02_1();
	return 0;
}