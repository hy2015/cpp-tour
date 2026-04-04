#include <iostream>
#include "workerManager.h"

using namespace std;

int main()
{
	WorkerManager wm;
	
	int choice = 0;

	while (true)
	{
		wm.Show_Menu();
		cout << "Please input your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:   // Exit System
			wm.ExitSystem();
			break;
		case 1:   // Add Employee 
			wm.Add_Emp();
			break;
		case 2:   // Display Employee
			wm.Show_Emp();
			break;
		case 3:   // Delete Employee
			wm.Del_Emp();
			break;
		case 4:   // Modify Employee
			wm.Mod_Emp();
			break;
		case 5:   // Look up Employee
			wm.Find_Emp();
			break;
		case 6:   // Order by Employee Number
			wm.Sort_Emp();
			break;
		case 7:   // Truncate All Document
			wm.Clean_File();
			break; 
		default:
			system("cls");
		}
	}

	system("pause");
	return 0;
}