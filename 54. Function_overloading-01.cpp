/*
  Binoy Das Gupta
  Function overloading
  24-07-2021
*/

#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x+y;
}

int add(int x, int y, int z)
{
	return x+y+z;
}

float add(float x, float y, float z)
{
	return x+y+z;
}

int main()
{
	int a,b,c,d;
	float f;
	
	c = add(10,8);
	d = add(10,8,18);
	f = add(9.5f,7.5f,17.5f);
	
	cout<<"Sum of two integers = "<<c<<endl;
	cout<<"Sum of three integers = "<<d<<endl;
	cout<<"Sum of three floats = "<<f<<endl;
	
	return 0;
}
