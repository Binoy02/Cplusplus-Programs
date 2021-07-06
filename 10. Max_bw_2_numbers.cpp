/* 
  Binoy Das Gupta
  Finding maximum of 2 numbers
  06-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"Maimum number between "<<""<<a<<" and "<<b<<" is "<<a<<endl;
	}
	else
	{
		cout<<"Maimum number between "<<""<<a<<" and "<<b<<" is "<<b<<endl;
	}
	return 0;
}
