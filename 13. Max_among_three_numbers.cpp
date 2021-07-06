/*
  Binoy Das Gupta
  Find maximum among three numbers
  06-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<""<<a<<" is maximum."<<endl;
	}
	else
	{
		if(b>c)
		{
			cout<<""<<b<<" is maximum."<<endl;
		}
		else
		{
			cout<<""<<c<<" is maximum."<<endl;
		}
	}
	return 0;
}
