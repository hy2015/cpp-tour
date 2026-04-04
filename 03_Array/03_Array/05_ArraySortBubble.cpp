#include <iostream>
using namespace std;

int main05()
{
	int arr[] = { 2, 4, 8, 0, 5, 7, 1, 3, 9 };

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 1; j < size - i; j++) 
		{
			if (arr[j - 1] > arr[j]) 
			{
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
	system("pause");
	return 0;
}