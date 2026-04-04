#include <iostream>;
using namespace std;

int main()
{
	int version = __cplusplus;
	cout << version << endl;
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	cout << "c is " << c << endl;
	system("pause");
	return 0;
}