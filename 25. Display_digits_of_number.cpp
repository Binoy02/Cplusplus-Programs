/*
  Binoy Das Gupta
  Display digits of a number.
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int num,r,temp;
	cout<<"Enter a number = ";
	cin>>num;
	cout<<"Digits of the entered number are = ";
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		cout<<" "<<r;
		temp=temp/10;
	}
	return 0;
}
