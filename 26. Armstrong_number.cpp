/*
  Binoy Das Gupta
  Check if a number is an armstrong number or not.
  09-07-2021
*/

// Armstrong number = sum of cube of the digits of a number is equal to the number

#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	int temp,rem;
	cout<<"Enter a number = ";
	cin>>num;
	temp = num;
	sum = 0;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum + rem*rem*rem;
		temp = temp/10;
	}
	if(num==sum)
	{
		cout<<num<<" is an armstrong number."<<endl;
	}
	else
	{
		cout<<num<<" is not an armstrong number."<<endl;
	}
	return 0;
}
