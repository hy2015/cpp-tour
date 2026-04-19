#include <iostream>
#include <list>

using namespace std;

void printList(const list<int>& lst)
{
	for (const auto& elem : lst)
	{
		cout << elem << " ";
	}
	cout << endl;
}

void test_list01()
{
	// This function is a placeholder for testing list operations.
	// You can implement list operations here using std::list or your own list implementation.

	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int> L2(L1.begin(), L1.end()); // Copy constructor using iterators
	printList(L2);

	list<int> L3(L1); // Copy constructor using another list
	printList(L3);

	list<int> L4(10, 100); // Constructor with size and default value
	printList(L4);
}

int main_lst01()
{
	test_list01();
	return 0;
}