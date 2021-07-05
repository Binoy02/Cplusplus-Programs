/*
  Binoy Das Gupta
  Student Exercise:01 - Write a program to calculate of Area of Circle, take radius as input
  05-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int r; //r=radius
	float area; 
	cout<<"Enter radius of a circle = ";
	cin>>r;
	area = 3.1416*r*r;
	cout<<"Area of the circle is = "<<area<<endl;
	return 0;
}
