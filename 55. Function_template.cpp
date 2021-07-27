/*
  Binoy Das Gupta
  Find max between two numbers using Function template
  27-07-2021
*/

#include<iostream>
using namespace std;

template<class T>
T maxim(T x, T y)
{
	return x>y?x:y;
}

int main()
{
	int a,b;
	float d,e;
	cout<<"Enter two integer numbers : ";
	cin>>a>>b;
	cout<<"Maximum between "<<a<<" and "<<b<<" = "<<maxim(a, b)<<endl; 
	
		
	cout<<"Enter two float numbers : ";
	cin>>d>>e;
	cout<<"Maximum between "<<d<<" and "<<e<<" = "<<maxim(d,e)<<endl;	

	return 0;
}
