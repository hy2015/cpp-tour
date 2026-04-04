#include <iostream>;
using namespace std;

int main03()
{
	int num = 100;

	do {
		int p1 = num % 10;
		int p2 = (num / 10) % 10;
		int p3 = num / 100;

		if (p1 * p1 * p1 + p2 * p2 * p2 + p3 * p3 * p3 == num) {
			cout << "Find: " << num << endl;
		}
		num++;

	} while (num < 1000);
	

	system("pause");
	return 0;
}