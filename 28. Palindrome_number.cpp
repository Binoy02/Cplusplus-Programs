/*
  Binoy Das Gupta
  Check if a number is palindrome or not.
  09-07-2021
*/

//Palindrome number = Reverse of a number is equal to the entered number.

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
	if(num==sum)
	{
		cout<<num<<" is a palindrome number."<<endl;
	}
	else
	{
		cout<<num<<" is not a palindrome number."<<endl;
	}
	return 0;
}
