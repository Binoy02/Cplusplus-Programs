/*
  Binoy Das Gupta
  Student Exercise:02 - Write a program to calculate net salary.
  (Program should take following inputs that is basic salary, percentage of alliances, percentage of deductions)
  05-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int basic_salary,alliance_percentage,deduction_percentage,net_salary;
	cout<<"Enter basic salary = ";
	cin>>basic_salary;
	cout<<"Enter percentage of alliances = ";
	cin>>alliance_percentage;
	cout<<"Enter percentage of deduction = ";
	cin>>deduction_percentage;
	net_salary = basic_salary + ((basic_salary*alliance_percentage)/100) - ((basic_salary*deduction_percentage)/100);
	cout<<"Net salary = "<<net_salary<<" bucks"<<endl;
	return 0;
}
