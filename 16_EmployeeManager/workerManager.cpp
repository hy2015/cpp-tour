#include "workerManager.h"


WorkerManager::WorkerManager()
{
	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		//cout << "The file doesn't exist." << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//cout << "The file is empty." << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->get_EmpNum();
	//cout << "The number of staff is: " << num << endl;
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker*[this->m_EmpNum];
	this->init_Emp();

	// Test codes
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "Staff Number is: " << this->m_EmpArray[i]->m_Id
	//		<< " Name is: " << this->m_EmpArray[i]->m_Name
	//		<< " Department is: " << this->m_EmpArray[i]->m_DeptId
	//		<< endl;
	//}
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			delete this->m_EmpArray[i];
			this->m_EmpArray[i] == NULL;
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
		this->m_EmpNum = 0;
	}
}

void WorkerManager::Show_Menu()
{
	cout << "**************************************************" << endl;
	cout << "***** Welcome to use Employee Manager System *****" << endl;
	cout << "*********** 0. Exit Manager Program **************" << endl;
	cout << "*********** 1. Add Employee **********************" << endl;
	cout << "*********** 2. Display Employee ******************" << endl;
	cout << "*********** 3. Delete Resigned Employee **********" << endl;
	cout << "*********** 4. Modify Employee *******************" << endl;
	cout << "*********** 5. Look up Employee ******************" << endl;
	cout << "*********** 6. Order by Employee Number **********" << endl;
	cout << "*********** 7. Truncate All Document *************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "See you next time, bye-bye!" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::Add_Emp()
{
	int addNum = 0;

	cout << "Please input the number of employee that you want to add." << endl;
	cin >> addNum;

	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;
		Worker** newSpace = new Worker * [newSize];
		
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect; 

			cout << "Please input the new staff's id of No. " << i + 1 << endl;
			cin >> id;

			cout << "Please input the new staff's name of No. " << i + 1 << endl;
			cin >> name;

			cout << "Please input his position" << endl;
			cout << "1. Employee" << endl;
			cout << "2. Manager" << endl;
			cout << "3. Boss" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;

		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;

		cout << "Add " << addNum << " new staffs successfully." << endl;

		this->save();
	}
	else
	{
		cout << "Wrong input number" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< "\t" << this->m_EmpArray[i]->m_Name << " "
			<< "\t" << this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}

int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;
	
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}

	return num;
}

void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		if(dId == 1)
		{ 
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File doesn't exist or file is empty." << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File doesn't exist or file is empty." << endl;
	}
	else
	{
		int id;
		cout << "Please input the staff number that you want to delete." << endl;
		cin >> id;
		int index = this->IsExist(id);
		
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			this->save();

			cout << "Delete successfully." << endl;
		}
		else
		{
			cout << "Delete failed, the staff is not found." << endl;
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id) {
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File doesn't exist or file is empty." << endl;
	}
	else
	{
		int id;
		cout << "Please input the staff number that you want to modify." << endl;
		cin >> id;
		int index = this->IsExist(id);

		if (index != -1)
		{
			delete this->m_EmpArray[index];

			int newId = 0;
			string newName = "";
			int newDSelect = 0;

			cout << "Found the staff with number: " << id << ", please input the new number" << endl;
			cin >> newId;

			cout << "Please input his new name: " << endl;
			cin >> newName;

			cout << "Please input his new position" << endl;
			cout << "1. Employee" << endl;
			cout << "2. Manager" << endl;
			cout << "3. Boss" << endl;
			cin >> newDSelect;

			Worker* worker = NULL;
			switch (newDSelect)
			{
			case 1:
				worker = new Employee(newId, newName, newDSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, newDSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, newDSelect);
				break;
			default:
				break;
			}
			this->m_EmpArray[index] = worker;

			this->save();

			cout << "Modify successfully." << endl;
		}
		else
		{
			cout << "Modify failed, the staff is not found." << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File doesn't exist or file is empty." << endl;
	}
	else
	{
		int option = 0;
		cout << "Please select the option that you want to find by." << endl;
		cout << "1. Find by staff number" << endl;
		cout << "2. Find by staff name" << endl;
		cin >> option;

		if (option == 1)
		{
			int id = 0;
			cout << "Please input the staff number that you want to find" << endl;
			cin >> id;

			int index = this->IsExist(id);

			if (index != -1)
			{
				cout << "The staff is found." << endl;
				this->m_EmpArray[index]->showInfo();
			}
			else
			{
				cout << "Search failed, the staff is not found." << endl;
			}
		}
		else if (option == 2)
		{
			string name;
			cout << "Please input the staff name that you want to find" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "The staff is found." << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (!flag)
			{
				cout << "Search failed, the staff is not found." << endl;
			}

		}
		else
		{
			cout << "Wrong option!" << endl;
		}
		
	}

	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File doesn't exist or file is empty." << endl;
		system("pause");
		system("cls");
	}
	else
	{
		int option = 0;
		cout << "Please select your sort option." << endl;
		cout << "1. Sort by asc" << endl;
		cout << "2. Sort by desc" << endl;
		cin >> option;
		if (option != 1 && option != 2)
		{
			cout << "Wrong sort option" << endl;
			system("pause");
			system("cls");
		}
		else {
			
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				int maxOrMin = i;
				for (int j = i + 1; j < this->m_EmpNum; j++) {
					if (option == 1)
					{
						if (this->m_EmpArray[maxOrMin]->m_Id > this->m_EmpArray[j]->m_Id)
						{
							maxOrMin = j;
						}
					}
					else if (option == 2)
					{
						if (this->m_EmpArray[maxOrMin]->m_Id < this->m_EmpArray[j]->m_Id)
						{
							maxOrMin = j;
						}
					}

				}
				
				if (maxOrMin != i)
				{
					Worker* temp = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[maxOrMin];
					this->m_EmpArray[maxOrMin] = temp;
				}
			}

			cout << "Sort successfully!" << endl;
			this->save();
			this->Show_Emp();
		}
		
	}
}

void WorkerManager::Clean_File()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File doesn't exist or file is empty." << endl;
	}
	else
	{
		cout << "Are you sure to clean the file?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;

		int option = 0;
		cin >> option;

		if (option == 1)
		{
			ofstream ofs(FILENAME, ios::trunc);
			ofs.close();
			
			if (this->m_EmpArray != NULL)
			{
				for (int i = 0; i < m_EmpNum; i++)
				{
					delete this->m_EmpArray[i];
					this->m_EmpArray[i] = NULL;
				}

				delete[] this->m_EmpArray;
				this->m_EmpArray = NULL;
				this->m_EmpNum = 0;
				this->m_FileIsEmpty = true;
			}

			cout << "Clean successfully!" << endl;
		}
	}

	system("pause");
	system("cls");
}