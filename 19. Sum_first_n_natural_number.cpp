/*
  Binoy Das Gupta
  Print sum of first n natural numbers
  08-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,sum;
	cout<<"Enter last natural number : ";
	cin>>n;
	sum = 0;
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	cout<<"Summation = "<<sum<<endl;
	return 0;
}
