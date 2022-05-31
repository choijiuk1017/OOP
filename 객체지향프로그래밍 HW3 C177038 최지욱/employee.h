#pragma once
#include"person.h"
#include"mytime.h"


class CEmployee : public CPerson , public CMytime
{
private:
	int m_time = 0;
public:

	int getTime()
	{
		return m_time;
	}
	void setTime(int time)
	{
		cin >> time;
		m_time = time;
	}

	void inputData();
	void outputData();
};