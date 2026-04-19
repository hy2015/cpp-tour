#include <iostream>
#include <list>

using namespace std;

void printList05(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_list05()
{
	// This function is a placeholder for testing list operations.
	// You can implement list operations here using std::list or your own list implementation.

	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0]; // This will cause a compilation error because std::list does not support operator[].
	//L1.at(0); // This will also cause a compilation error because std::list does not have an at() member function.

	cout << "The first element of the list is: " << L1.front() << endl; // Accessing the first element using front()
	cout << "The last element of the list is: " << L1.back() << endl; // Accessing the last element using back()

	list<int>::iterator it = L1.begin();
	it++; // Move the iterator to the second element
	it--; // Move the iterator back to the first element
		
	//it = it + 1; // This will cause a compilation error because std::list iterators do not support random access (operator+).
}



int main_lst05()
{
	test_list05();
	return 0;
}