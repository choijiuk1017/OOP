#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class CCircle
{

private:
	int m_x;
	int m_y;
	int m_radius;
	

public:
	//원 생성자
	CCircle()
	{
		
		cout << "Enter x pos: ";
		cin >> m_x;
		cout << "Enter y pos: ";
		cin >> m_y;
		cout << "Enter radius: ";
		cin >> m_radius;

		cout << "Enter num.of circle: ";
		cin >> n_circle;

	}
	
	int n_circle;
	void draw();
	void generate();
	void calcArea();
	

};