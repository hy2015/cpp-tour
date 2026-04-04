#include <iostream>
#include <deque>

using namespace std;

void printDeq03(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;// error: assignment of read-only location '* it'
		cout << *it << " ";
	}
	cout << endl;
}

void test_deq03()
{
	deque<int> d1;

	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeq03(d1);

	if(d1.empty())
	{
		cout << "d1 is empty" << endl;
	}
	else
	{
		cout << "d1 is not empty" << endl;
		cout << "d1 size: " << d1.size() << endl;
		// deque does not have capacity() function, so we cannot check its capacity
		
		d1.resize(15);
		printDeq03(d1);

		d1.resize(20 , 1);
		printDeq03(d1);

		d1.resize(5);
		printDeq03(d1);
	}
}

int main_deq03()
{
	test_deq03();
	return 0;
}