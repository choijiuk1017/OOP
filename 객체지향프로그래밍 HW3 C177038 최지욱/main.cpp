#include <iostream>
#include <string>
#include "person.h"
#include "student.h"
#include "employee.h"
#include "mytime.h"


using namespace std;

int main()
{
	char input = ' ';
	int i = 0;

	CPerson *CP[100] = {NULL};

	CPerson* C = new CPerson;

	while(true)
	{
		cout << "MENU" << endl;
		cout << "Enter a command(q, s, e, p)" << endl;
		cin >> input;
		

		if (input == 'q')
		{
			break;
		}
		else if (input == 's')
		{
			CP[i] = new CStudent();

			CP[i]->inputData();

			i++;
		}
		else if (input == 'e')
		{
			CP[i] = new CEmployee();

			CP[i]->inputData();

			i++;
		}
		else if (input == 'p')
		{	
		
			
			for (int j = 0; j < i; j++)
			{
				for (int p = 0; p < i-1; p++)
				{
					if (CP[p]->getID() > CP[p+1]->getID())
					{
						C = CP[p];
						CP[p] = CP[p + 1];
						CP[p + 1] = C;
					}
				}
				
			}
			
			for (int j = 0; j < i; j++)
			{
				CP[j]->outputData();
			}	
		}
	}
	delete C;
	for (int i = 0; i < 100; i++)
	{
		delete CP[i];
		CP[i] = NULL;
	}


	
}

