#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void printList06(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)
{
	return v1 > v2; // Sort in descending order
}

void test_list06()
{


	list<int> L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "Before reverse: " << endl;
	printList06(L1);

	L1.reverse();
	cout << "After reverse: " << endl;
	printList06(L1);

	cout << "Before sort: " << endl;
	printList06(L1);

	// The sort() function is not a member of std::list, but it can be used with std::list by including the <algorithm> header and using the sort() function from the algorithm library.
	//sort(L1.begin(), L1.end());
	L1.sort(); // This is the correct way to sort a std::list, as it has its own sort member function.
	cout << "After sort: " << endl;
	printList06(L1);
	L1.sort(myCompare); // Sorting in descending order using a custom comparison function
	printList06(L1);
}



int main_lst06()
{
	test_list06();
	return 0;
}