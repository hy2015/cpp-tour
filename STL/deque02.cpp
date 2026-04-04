#include <iostream>
#include <deque>

using namespace std;

void printDeq02(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;// error: assignment of read-only location '* it'
		cout << *it << " ";
	}
	cout << endl;
}

void test_deq02()
{
	deque<int> d1;

	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeq02(d1);

	deque<int> d2;
	d2 = d1; // assignment operator, copies the contents of d1 to d2
	printDeq02(d2);

	deque<int> d3;
	d3.assign(d1.begin(), d1.end()); // assigns the contents of d1 to d3
	printDeq02(d3);

	deque<int> d4;
	d4.assign(10, 100); // assigns 10 elements with the value 100 to d4
	printDeq02(d4);


}

int main_deq02()
{
	test_deq02();
	return 0;
}