#include <iostream>
#include <set>

using namespace std;

void printSet01(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_set01()
{
	set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(20);
	
	printSet01(s);

	set<int> s2(s);
	printSet01(s2);

	set<int> s3;
	s3 = s2;
	printSet01(s3);
}

int main_set01()
{
	test_set01();
	cout << endl;
	return 0;
}