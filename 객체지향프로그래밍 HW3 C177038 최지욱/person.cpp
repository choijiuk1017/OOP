#include <iostream>
#include "person.h"
#include <string>
using namespace std;



int CPerson::getID()
{
	return m_ID;
}

string CPerson::getName()
{
	return m_name;
}

string CPerson::getAddress()
{
	return m_address;
}

void CPerson::setID(int ID)
{
	cin >> ID;
	m_ID = ID;
}

void CPerson::setName(string name)
{
	cin >> name;
	m_name = name;
}

void CPerson::setAddress(string address)
{	
	cin.ignore();
	getline(cin, address);
	m_address = address;
}

void CPerson::inputData()
{
	int ID = 0;
	string name;
	string address;
	
	cout << "Enter ID: ";
	setID(ID);
	cout << "Enter name: ";
	setName(name);
	cout << "Enter address: ";
	setAddress(address);


}

void CPerson::outputData()
{
	cout << "[" << getID() << "] " << getName() << ", " << getAddress() << endl;
}


