#include "employee.h"

void CEmployee::inputData()
{
	int ID = 0;
	string name;
	string address;
	int time = 0;
	cout << "Enter ID: ";
	setID(ID);
	cout << "Enter name: ";
	setName(name);
	cout << "Enter address: ";
	setAddress(address);
	cout << "Enter work time(sec): ";
	setTime(time);

}

void CEmployee::outputData()
{
	recalTime(getTime());

	int hour = getHour();
	int min = getMin();
	int sec = getSec();

	cout << "[" << getID() << "] " << getName() << "(";

	cout.width(2);
	cout.fill('0');
	cout << right << hour;
	cout << ":";

	cout.width(2);
	cout.fill('0');
	cout << right << min;
	cout << ":";

	cout.width(2);
	cout.fill('0');
	cout << right << sec;
		
	cout << "), " << getAddress() << endl;

}