/*
  Binoy Das Gupta
  Default argument function - 01(Basic)
  01-08-2021
*/

#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}

int main()
{
	cout<<add(2,10)<<endl;
	cout<<add(25,30,35)<<endl;
	return 0;
}
