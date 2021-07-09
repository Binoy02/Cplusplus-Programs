/*
  Binoy Das Gupta
  Find GCD of two numbers
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	int n1,n2,rem,gcd;
	cout<<"Enter two numbers : ";
	cin>>num1>>num2;
	n1 = num1;
	n2 = num2;
	while(n2!=0)
	{
		rem = n1 % n2;
		n1 = n2;
		n2 = rem;
	}
	gcd = n1;
	cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<"."<<endl;
	return 0;
}
