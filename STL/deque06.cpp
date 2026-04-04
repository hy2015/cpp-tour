#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

void printDeq06(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;// error: assignment of read-only location '* it'
		cout << *it << " ";
	}
	cout << endl;
}

void test_deq06()
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

	printDeq06(d1);

	sort(d1.begin(), d1.end());

	printDeq06(d1);


	vector<int> v1;
	v1.push_back(3);
	v1.push_back(1);
	v1.push_back(4);
	v1.push_back(2);

	sort(v1.begin(), v1.end());
	for (vector<int>::const_iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



int main()
{
	test_deq06();
	return 0;
}