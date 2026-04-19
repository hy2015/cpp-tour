#include <iostream>
using namespace std;

int main()
{
	int arr[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	cout << "The memory size of 2D array: " << sizeof(arr) << endl;
	cout << "The memory size of 2D array's first row: " << sizeof(arr[0]) << endl;
	cout << "The memory size of 2D array' element: " << sizeof(arr[0][0]) << endl;

	cout << "The row size: " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "The column size: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "The address of 2D array element: " << arr << endl;
	cout << "The address of 2D array element's first row: " << arr[0] << endl;
	cout << "The address of 2D array element's first element: " << &arr[0][0] << endl;

	system("pause");
	return 0;
}