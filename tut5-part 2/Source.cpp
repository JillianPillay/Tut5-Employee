#include<iostream>
#include "Employee.h"
#include <string>

using namespace std;
Employee input()
{
	Employee identity ;
	string temp;
	cout << "enter name of employee" << endl;
	cin >> temp;
	identity.name(temp);


	Employee staffno;
	int number;
	cout << "enter staff number of employee" << endl;
	cin >> number;
	staffno.staffnumber(number);

	salaryemployee salaryfig;
	float figure;
	cout << "enter the monthly fixed salary" << endl;
		cin >> figure;
		salaryfig.setsalary(figure);

	hourlyemployee hours;
	int hrs;
	float rate;
	cout << "enter the number of hours worked" << endl;
	cin >> hrs;
	cout << "enter the salary rate per hour" << endl;
	cin >> rate;
	hours.sethourlyrate(hrs, rate);
	hours.sethoursworked(hrs);


	commissionemployee salarybase;
	float base;
	cout << "enter the salary base" << endl;
	cin >> base;
	salarybase.setsalarybase(base);

	commissionemployee set_rate;
	float comm;
	cout << "enter the rate of commission" << endl;
	cin >>comm;
	set_rate.setrate(comm);


	commissionemployee set_revenue;
	float revenue;
	cout << "enter revenue amount" << endl;
	cin >> revenue;
	set_revenue.setrevenue(revenue);

};






