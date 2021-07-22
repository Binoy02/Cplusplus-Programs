/*
  Binoy Das Gupta
  Function to find maximum between three numbers
  22-07-2021
*/

#include<iostream>
using namespace std;

int max(int a, int b, int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}

int main()
{
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	cout<<"Maximum number is : "<<max(a,b,c)<<endl;
	return 0;
}
