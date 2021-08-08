/*
  Binoy Das Gupta
  Call by address-01
  08-08-2021
*/

#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x=10, y=20;
	cout<<"Before swapping : ";
	cout<<"x = "<<x<<", y = "<<y<<endl;
	swap(&x,&y);
	cout<<"After swapping : ";
	cout<<"x = "<<x<<", y = "<<y<<endl;
	return 0;
}
