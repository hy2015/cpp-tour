#include <iostream>
#include <deque>

using namespace std;

void printDeq04(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;// error: assignment of read-only location '* it'
		cout << *it << " ";
	}
	cout << endl;
}

void test_deq04()
{
	deque<int> d1;

	// push_back() adds an element to the end of the deque
	d1.push_back(10);
	d1.push_back(20);

	// push_front() adds an element to the front of the deque
	d1.push_front(100);
	d1.push_front(200);

	printDeq04(d1);

	d1.pop_back(); // removes the last element (20)
	printDeq04(d1);
	d1.pop_front(); // removes the first element (200)
	printDeq04(d1);
}

void test_deq04_2()
{
	deque<int> d1;
	
	d1.push_back(10);
	d1.push_back(20);

	// push_front() adds an element to the front of the deque
	d1.push_front(100);
	d1.push_front(200);

	printDeq04(d1);

	d1.insert(d1.begin(), 1000); // inserts 1000 at the beginning of the deque
	printDeq04(d1);

	d1.insert(d1.begin(), 2, 2000); // inserts two elements with the value 2000 at the beginning of the deque
	printDeq04(d1);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end()); // inserts the elements of d2 at the beginning of d1
	printDeq04(d1);
}


void test_deq04_3()
{
	deque<int> d1;

	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printDeq04(d1);

	deque<int>::iterator it = d1.begin();
	it++;// move the iterator to the second element (100)
	d1.erase(it); // removes the element at the position of the iterator (100)
	printDeq04(d1);

	//d1.erase(d1.begin(), d1.end()); 
	d1.clear(); // removes all elements from the deque
	printDeq04(d1);
}
	
int main_deq04()
{
	//test_deq04();
	//test_deq04_2();
	test_deq04_3();
	return 0;
}