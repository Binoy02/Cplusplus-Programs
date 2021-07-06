/*
  Binoy Das Gupta
  Find the nature of roots of a qudratic equation
  06-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Enter a,b,c : ";
	cin>>a>>b>>c;
	d = (b*b)-(4*a*c);
	if(d==0)
	{
		cout<<"Roots are equal."<<endl;
	}
	else if(d>0)
	{
		cout<<"Roots are real and unequal."<<endl;
	}
	else
	{
		cout<<"Roots are imaginary."<<endl;
	}
	return 0;
}
