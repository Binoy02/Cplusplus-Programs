/*
  Binoy Das Gupta
  Reverse a number
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	int temp,r;
	cout<<"Enter a number = ";
	cin>>num;
	temp = num;
	sum = 0;
	while(temp!=0)
	{
		r = temp%10;
		sum = sum*10 + r;
		temp = temp/10;
	}
	cout<<"Reverse of "<<num<<" is = "<<sum<<endl;
	return 0;
}
