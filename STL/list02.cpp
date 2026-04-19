#include <iostream>
#include <list>

using namespace std;

void printList02(const list<int>& lst)
{
	for(list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_list02()
{
	// This function is a placeholder for testing list operations.
	// You can implement list operations here using std::list or your own list implementation.

	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList02(L1);

	list<int> L2;
	L2 = L1;
	printList02(L2);

	list<int> L3;
	L3.assign(L1.begin(), L1.end()); // Assign using iterators
	printList02(L3);

	list<int> L4;
	L4.assign(10, 100); // Assign with size and default value
	printList02(L4);
}

void test_list02_1()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;
	L2.assign(10, 100);

	cout << "Before swap:" << endl;
	printList02(L1);
	printList02(L2);

	cout << "After swap:" << endl;
	L1.swap(L2);
	printList02(L1);
	printList02(L2);
}

int main_lst02()
{
	test_list02();
	test_list02_1();
	return 0;
}