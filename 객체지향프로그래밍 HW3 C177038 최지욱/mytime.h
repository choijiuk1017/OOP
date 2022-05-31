#pragma once

class CMytime 
{
private:
	int m_hour;
	int m_min;
	int m_sec;

public:
	int getHour();
	int getMin();
	int getSec();

	

	void setHour(int hour);
	void setMin(int min);
	void setSec(int sec);

	void recalTime(int time);

};