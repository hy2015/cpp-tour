#include<iostream>
#include<vector>

using namespace std;


void printVec10(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test_vec10()
{
	vector<int> v;
	v.reserve(100000);
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0])
		{
			p = &v[0];
			num++;
			cout << "Vector resized at size: " << v.size() << endl;
		}
	}

	cout << "Total number of resizes: " << num << endl;
}


int main_vec10()
{
	test_vec10();
	return 0;
}