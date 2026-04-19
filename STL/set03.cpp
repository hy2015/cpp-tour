#include <iostream>
#include <set>

using namespace std;

void printSet03(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_set03()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(10);

	printSet03(s1);

	s1.erase(s1.begin()); // Erase the first element (smallest element in the set)
	printSet03(s1);

	s1.erase(30);
	printSet03(s1);

	//s1.erase(s1.begin(), s1.end()); // Erase all elements using iterators
	s1.clear(); // Clear the set using the clear() member function
	printSet03(s1);
}


int main()
{
	test_set03();
	cout << endl;
	return 0;
}