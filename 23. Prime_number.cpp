/*
  Binoy Das Gupta
  Check if a number is prime number or not.
  09-07-2021
*/

// Prime number = a number which is divisible by 1 and the number itself(means a number having 2 factors)

#include<iostream>
using namespace std;
int main()
{
	int num,i,count;
	cout<<"Enter a number = ";
	cin>>num;
	count = 0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		cout<<num<<" is a prime number."<<endl;
	}
	else 
	{
		cout<<num<<" is not a prime number."<<endl;
	}
	return 0;
}
