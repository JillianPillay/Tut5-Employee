#include "Employee.h"
#include<iostream>
#include <string>

using namespace std;


Employee::Employee()
{
	numberofemployees = 1;
}


Employee::~Employee()
{
	numberofemployees = 0;
}

	void Employee::name(string)
	{
		string identity;
		cout << "name of employee is " << identity  << endl;


	}

	void Employee::staffnumber(int)

	{
		int number;
		cout << "the staff number of the employee is " << number << endl;
	}

	void salaryemployee::setsalary(float)
	{
		
		float figure;
		cout << "salary is R" << figure << endl;
	}

	void hourlyemployee::sethoursworked(int)

	{
		int hrs;
		cout << "number of hours worked =" << hrs << endl;
	}


	void hourlyemployee::sethourlyrate(int,float)
	{
		float pay;
		float hrs;
		float x;
		pay = hrs * x;
		cout << "the hourly employee earns " << pay << endl;
	}
