#include <iostream>
using namespace std;

int main03()
{

	int arr[] = { 300, 350, 200, 400, 250 };

	int max = 0;

	for (int i = 0; i < 5; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
		}
	}
	cout << max << endl;
	system("pause");
	return 0;
}