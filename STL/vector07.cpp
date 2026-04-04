#include<iostream>
#include<vector>

using namespace std;


void printVec7(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_vec07()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	printVec7(v1);

	v1.pop_back(); // removes the last element (50)
	printVec7(v1);

	v1.insert(v1.begin(), 100); // inserts 100 at the beginning of the vector
	printVec7(v1);

	v1.insert(v1.begin(), 2, 200); // inserts 200 at the end of the vector
	printVec7(v1);

	v1.erase(v1.begin()); // removes the first element (100)
	printVec7(v1);

	v1.erase(v1.begin(), v1.end()); // removes all elements from the vector
	printVec7(v1);

	v1.push_back(10);
	v1.clear(); // clears the vector, removing all elements
	printVec7(v1);
}

int main_vec07()
{
	test_vec07();
	return 0;
}