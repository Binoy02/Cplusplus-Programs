/*
  Binoy Das Gupta
  Default argument function - 02(Main)
  01-08-2021
*/

#include<iostream>
using namespace std;
int add(int a, int b, int c=0)
{
	return a+b+c;
}

int main()
{
	cout<<add(2,10)<<endl;
	cout<<add(25,30,35)<<endl;
	return 0;
}
