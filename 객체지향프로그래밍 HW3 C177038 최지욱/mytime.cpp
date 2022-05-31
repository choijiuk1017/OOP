#include"mytime.h"
#include <iomanip>

int CMytime::getHour()
{
	return m_hour;
}
int CMytime::getMin()
{
	return m_min;
}
int CMytime::getSec()
{
	return m_sec;
}

void CMytime::setHour(int hour)
{
	m_hour = hour;
}

void CMytime::setMin(int min)
{
	m_min = min;
}

void CMytime::setSec(int sec)
{
	m_sec = sec;
}

void CMytime::recalTime(int time)
{
	int h = time/3600;
	int m = time %3600/60;
	int s = time %3600%60;

	setHour(h);
	setMin(m);
	setSec(s);
}
