#include <iostream>
#include <list>

using namespace std;

void printList03(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_list03()
{
	// This function is a placeholder for testing list operations.
	// You can implement list operations here using std::list or your own list implementation.

	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList03(L1);

	if (L1.empty())
	{
		cout << "List is empty." << endl;
	}
	else
	{
		cout << "List is not empty." << endl;
		cout << "List size: " << L1.size() << endl;
	}

	L1.resize(10, 100); // Resize to 10 elements, new elements initialized to 100	
	printList03(L1);

	L1.resize(2); // Resize to 2 elements, extra elements will be removed
	printList03(L1);
}



int main_lst03()
{
	test_list03();
	return 0;
}