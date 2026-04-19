#include <iostream>
#include <set>

using namespace std;

void printSet02(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_set02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(20);

	printSet02(s1);

	if (s1.empty())
	{
		cout << "The set is empty." << endl;
	}
	else
	{
		cout << "The set is not empty." << endl;	
		cout << "The size of the set is: " << s1.size() << endl;
	}
}

void test_set02_1()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);
	
	cout << "Before swap: " << endl;
	printSet02(s1);
	printSet02(s2);

	s1.swap(s2);
	cout << "After swap: " << endl;
	printSet02(s1);
	printSet02(s2);
	
}

int main_set02()
{
	test_set02_1();
	cout << endl;
	return 0;
}