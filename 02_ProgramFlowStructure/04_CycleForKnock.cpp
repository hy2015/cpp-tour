#include <iostream>;
using namespace std;

int main04()
{
	for (int i = 1; i < 100; i++) 
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) 
		{
			cout << "Knocking" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}