#pragma once
#include "person.h"

class CStudent : public CPerson
{
private:
	float m_GPA = 0;

public:

	float getGPA()
	{
		return m_GPA;
	}

	void setGPA(float GPA)
	{
		cin >> GPA;
		m_GPA = GPA;
	}



	void inputData();
	void outputData();
};