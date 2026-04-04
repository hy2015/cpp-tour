#include <iostream>
using namespace std;

template <class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;

		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template <class T>
void printArr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main03()
{
	char a[] = "fasdce";
	int num = sizeof(a);
	mySort(a, num);
	printArr(a, num);

	int b[] = { 2, 1, 3, 5, 4, 6 };
	int len = sizeof(b) / sizeof(int);
	mySort(b, len);
	printArr(b, len);

	system("pause");
	return 0;
}