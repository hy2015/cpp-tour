#include "boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Boss::showInfo()
{
	cout << "Staff Id: " << this->m_Id
		<< "\t Staff Name: " << this->m_Name
		<< "\t Position: " << this->getDeptName()
		<< "\t Responsibility: Manage all the stuffs of the company"
		<< endl;
}

string Boss::getDeptName()
{
	return string("Boss");
}
