/*
  Binoy Das Gupta
  Function to add two numbers 
  22-07-2021
*/

#include<iostream>
using namespace std;

int add(int a, int b)
{
	int c;
	c = a+b;
	return c;
}

int main()
{
	int x,y,z;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	z=add(x,y);
	cout<<"Sum of two numbers = "<<z<<endl;
	return 0;
}
