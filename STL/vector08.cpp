#include<iostream>
#include<vector>

using namespace std;

void test_vec08()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}

	cout << endl;

	cout << "first element: " << v1.front() << endl;
	cout << "last element: " << v1.back() << endl;

	//printVec8(v1);
}

int main_vec08()
{
	test_vec08();
	return 0;
}