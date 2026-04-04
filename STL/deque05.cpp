#include <iostream>
#include <deque>

using namespace std;


void test_deq05()
{
	deque<int> d1;

	// push_back() adds an element to the end of the deque
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);

	// push_front() adds an element to the front of the deque
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " "; // access elements using operator[]
	}
	cout << endl;
	
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " "; // access elements using at() function	
	}

	cout << endl;

	cout << "Front element: " << d1.front() << endl; // access the first element
	cout << "Back element: " << d1.back() << endl; // access the last element
}



int main_deq05()
{
	test_deq05();
	return 0;
}