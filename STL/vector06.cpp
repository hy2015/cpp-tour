#include<iostream>
#include<vector>

using namespace std;


void printVec6(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_vec06()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}	
	printVec6(v1);

	if(v1.empty())
	{
		cout << "v1 is empty" << endl;
	}
	else
	{
		cout << "v1 is not empty" << endl;
		cout << "v1 capacity: " << v1.capacity() << endl;
		cout << "v1 size: " << v1.size() << endl;
	}

	v1.resize(15, 100); // resize the vector to 15 elements, new elements initialized to 100
	printVec6(v1);

	v1.resize(5); // resize the vector to 5 elements, excess elements are removed
	printVec6(v1);
}

int main_06()
{
	test_vec06();
	return 0;
}