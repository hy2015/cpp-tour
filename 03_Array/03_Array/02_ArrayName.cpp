#include <iostream>
using namespace std;

int main02()
{

	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	cout << "Memory size of arr: " << sizeof(arr) << endl;
	cout << "Memory size of arr[0]: " << sizeof(arr[0]) << endl;
	cout << "Arr size: " << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "First address of array: " << arr << endl;
	cout << "First address of array: " << (int) arr << endl;
	cout << "Address of first element: " << (int) & arr[0] << endl;
	cout << "Address of second element: " << (int) &arr[1] << endl;
	cout << "Address of third element: " << (int) &arr[2] << endl;

	system("pause");
	return 0;
}