#include "employee.h"

Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Employee::showInfo()
{
	cout << "Staff Id: " << this->m_Id
		<< "\t Staff Name: " << this->m_Name
		<< "\t Position: " << this->getDeptName()
		<< "\t Responsibility: Complete the tasks from Manager"
		<< endl;
}

string Employee::getDeptName()
{
	return string("Employee");
}
