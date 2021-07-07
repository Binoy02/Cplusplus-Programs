/*
  Binoy Das Gupta
  Nested if(2) : Find nature of qudratic roots and also the value of roots
  07-07-2021
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c; // co-efficients of respectively x^2,x,constant.
	float d,r1,r2; // d = discriminant; r1,r2 = roots
	cout<<"Enter a,b,c : ";
	cin>>a>>b>>c;
	d = (b*b) - (4*a*c);
	if(d==0)
	{
		r1 = -b/(2*a);
		cout<<"Roots are real and equal."<<endl;
		cout<<"The values of roots are = "<<r1<<" "<<r1<<endl;
	}
	else if(d>0)
	{
		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		cout<<"Roots are real but unequal."<<endl;
		cout<<"The values of roots are = "<<r1<<", "<<r2<<endl;
	}
	else
	{
		cout<<"Roots are imaginary."<<endl;
	}
	return 0;
}
