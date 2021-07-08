/*
  Binoy Das Gupta
  Print multiplication table of a number 
  08-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter number : ";
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<""<<num<<" * "<<""<<i<<" = "<<""<<num*i<<endl;
	}
	return 0;
}
