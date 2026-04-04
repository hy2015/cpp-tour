#include<iostream>
#include<vector>

using namespace std;


void printVec(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_vec04()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVec(v1);

	// Create a new vector v2 by copying the elements of v1 using the range constructor
	vector<int> v2(v1.begin(), v1.end());
	printVec(v2);

	// Create a new vector v3 with 10 elements, each initialized to 100 using the fill constructor
	vector<int> v3(10, 100);
	printVec(v3);

	// Create a new vector v4 by copying the elements of v3 using the copy constructor
	vector<int> v4(v3);
	printVec(v4);
}

int main_vec04()
{
	test_vec04();
	return 0;
}