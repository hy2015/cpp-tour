#include<iostream>
#include<vector>

using namespace std;


void printVec9(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_vec09()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	cout << "Before swap: " << endl;

	printVec9(v1);
	printVec9(v2);

	v1.swap(v2); // swaps the contents of v1 and v2
	cout << "After swap: " << endl;
	printVec9(v1);
	printVec9(v2);
}

void test_vec09_2()
{
	vector<int> v1;
	for (int i = 0; i < 10000; i++)
	{
		v1.push_back(i);
	}

	cout << "v1 capacity: " << v1.capacity() << endl;
	cout << "v1 size: " << v1.size() << endl;

	v1.resize(3);

	cout << "v1 capacity: " << v1.capacity() << endl;
	cout << "v1 size: " << v1.size() << endl;

	// use swap to reduce capacity to fit size
	vector<int>(v1).swap(v1); // creates a temporary vector with the contents of v1 and swaps it with v1
	cout << "v1 capacity: " << v1.capacity() << endl;
	cout << "v1 size: " << v1.size() << endl;
}


int main_vec09()
{
	//test_vec09();
	test_vec09_2();
	return 0;
}