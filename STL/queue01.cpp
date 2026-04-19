#include <iostream>
#include <queue>

using namespace std;


class Person
{
public:
	string name;
	int age;
	Person(string n, int a) : name(n), age(a) {}
};

void test_que01()
{
	queue<Person> q;

	Person p1("Alice", 30);
	Person p2("Bob", 25);
	Person p3("Charlie", 35);
	Person p4("David", 28);
	Person p5("Eve", 22);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "Queue size: " << q.size() << endl;
	while (!q.empty())
	{
		Person f = q.front();
		Person b = q.back();
		cout << "Front -> Name: " << f.name << ", Age: " << f.age << endl;
		cout << "Back -> Name: " << b.name << ", Age:" << b.age << endl;
		q.pop();
	}
	cout << "Queue size: " << q.size() << endl;
}


int main_que01()
{
	test_que01();
	return 0;
}