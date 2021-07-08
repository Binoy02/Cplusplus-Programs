/*
  Binoy Das Gupta
  Find factorial of a number
  08-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int num,i,fact;
	cout<<"Enter a number : ";
	cin>>num;
	fact = 1;
	for(i=num;i>=1;i--)
	{
		fact = fact*i;
	}
	cout<<"Factorial of the number = "<<fact<<endl;
	return 0;
}
