#include <iostream>;
using namespace std;

int main02()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int your_num = 0;
	cout << "Please input a number (from 1 to 100): " << endl;
	while (true) 
	{
		cin >> your_num;
		
		if (your_num > num) 
		{
			cout << "Too big" << endl;
		}
		else if (your_num < num) 
		{
			cout << "Too small" << endl;
		}
		else
		{
			cout << "Congratulations!" << endl;
			break;
		}
	}
	
	
	system("pause");
	return 0;
}