#include"employee.h"

Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = dId;
}

void Employee::showInfo()
{
	cout << "ְ�����:" << this->m_Id
		<< "\t" << "ְ������:" << this->m_Name
		<< "\t" << "��������:" << this->getDeptName() << endl;
}

string Employee::getDeptName()
{
	return string("Ա��");
}