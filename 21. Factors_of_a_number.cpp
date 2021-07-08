/*
  Binoy Das Gupta
  Find factors of a number
  08-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter a number = ";
	cin>>num;
	cout<<"Factors of the number are =";
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<" "<<i;
		}
	}
	return 0;
}
