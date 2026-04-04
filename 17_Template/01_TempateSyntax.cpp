#include <iostream>

using namespace std;

void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main01()
{
	int a = 1;
	int b = 2;
	swapInt(a, b);
	//printf("a: %d, b: %d.", a, b);
	
	//cout << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	//printf("c: %f, d: %f.", c, d);

	int e = 3;
	int f = 4;
	//mySwap(e, f);
	mySwap<int>(e, f);
	cout << "e: " << e << ", f: " << f << endl;

	return 0;
}