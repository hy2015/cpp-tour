#include <iostream>
using namespace std;

int main04()
{
	int arr[] = { 1, 3, 2, 5, 4, 8 };

	int size = sizeof(arr) / sizeof(arr[0]);
	int start = 0;
	int end = size - 1;

	while (start < end) {
		int tmp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = tmp;
	}

	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;

	system("pause");
	return 0;
}