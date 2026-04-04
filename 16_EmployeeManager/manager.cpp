#include "manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Manager::showInfo()
{
	cout << "Staff Id: " << this->m_Id
		<< "\t Staff Name: " << this->m_Name
		<< "\t Position: " << this->getDeptName()
		<< "\t Responsibility: Complete the tasks from Boss, and dispatch tasks to Employee"
		<< endl;
}

string Manager::getDeptName()
{
	return string("Manager");
}
