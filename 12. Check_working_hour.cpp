/*
  Binoy Das Gupta
  Check if the entered hour is in between working hour or not.
  06-07-2021
*/

#include<iostream>   
using namespace std;
int main()
{
	int hour;
	cout<<"Enter time in hour : ";
	cin>>hour;
	if(hour>=9 && hour<=18) //a whole day in the time format of 24 hours
	{
		cout<<"It is working hour"<<endl;
	}
	else
	{
		cout<<"It is leisure hour"<<endl;
	}
	return 0;
}
