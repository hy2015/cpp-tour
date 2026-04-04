#include <iostream>
#include <deque>

using namespace std;

void printDeq01(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;// error: assignment of read-only location '* it'
		cout << *it << " ";
	}
	cout << endl;
}

void test_deq01()
{
	deque<int> d;
	
	for(int i=0; i<10; i++)
	{
		d.push_back(i);
	}

	printDeq01(d);
	
	deque<int> d2(d.begin(), d.end());
	printDeq01(d2);

	deque<int> d3(10, 100);
	printDeq01(d3);

	deque<int> d4(d3);
	printDeq01(d4);
}

int main_deq01()
{
	test_deq01();
	return 0;
}