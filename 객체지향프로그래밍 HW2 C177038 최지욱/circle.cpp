#include <iostream>
#include <windows.h>
#include <random>
#include "circle.h"
using namespace std;

//원 그리는 함수
void CCircle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);
}

//원 랜덤 생성 함수
void CCircle::generate()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());

	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<int> x(150, 500);
	uniform_int_distribution<int> y(150, 500);
	uniform_int_distribution<int> radius(20, 100);

	m_x = x(gen);
	m_y = y(gen);
	m_radius = radius(gen);

	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);

}

void CCircle::calcArea()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());

	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<int> x(150, 1000);
	uniform_int_distribution<int> y(150, 500);
	uniform_int_distribution<int> radius(20, 100);

	m_x = x(gen);
	m_y = y(gen);
	m_radius = radius(gen);

	cout << "Circle radius = " << m_radius * m_radius * 3.14 << endl;
	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);
	

}