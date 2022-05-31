
#include "student.h"


void CStudent::inputData()
{
	
	int ID = 0;
	string name;
	string address;
	float GPA = 0;

	cout << "Enter ID: ";
	setID(ID);
	cout << "Enter name: ";
	setName(name);
	cout << "Enter address: ";
	setAddress(address);
	cout << "Enter GPA: ";
	setGPA(GPA);

	
}

void CStudent::outputData()
{
	cout << "[" << getID() << "] " << getName() << "("<< getGPA() << "), " << getAddress() << endl;
}