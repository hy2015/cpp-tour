#include <iostream>
#include <list>

using namespace std;

void printList04(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_list04()
{
	// This function is a placeholder for testing list operations.
	// You can implement list operations here using std::list or your own list implementation.

	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	L1.push_front(400);

	printList04(L1);

	L1.pop_back();
	printList04(L1);

	L1.pop_front();
	printList04(L1);

	list<int>::iterator it = L1.begin();
	L1.insert(++it, 1000);
	printList04(L1);

	it = L1.begin();
	L1.erase(++it);
	printList04(L1);

	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	printList04(L1);
	L1.remove(10000);
	printList04(L1);

	L1.clear();
	printList04(L1);
}



int main_lst04()
{
	test_list04();
	return 0;
}