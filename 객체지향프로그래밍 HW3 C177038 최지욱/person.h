#pragma once
#include <iostream>
#include <string>
using namespace std;

class CPerson
{
private:
	int m_ID = 0;
	string m_name;
	string m_address;

public:
	int getID();
	string getName();
	string getAddress();

	void setID(int ID);
	void setName(string name);
	void setAddress(string address);


	virtual void inputData();
	virtual void outputData();
};