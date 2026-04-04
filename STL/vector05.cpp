#include<iostream>
#include<vector>

using namespace std;


void printVec2(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_vec05()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVec2(v1);

	vector<int> v2;
	v2 = v1;
	printVec2(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVec2(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printVec2(v4);
}

int main_vec05()
{
	test_vec05();
	return 0;
}