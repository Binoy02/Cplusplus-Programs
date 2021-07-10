/*
  Binoy Das Gupta
  Calculate average of elements in an array.
  10-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int size,i,sum;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	sum=0.0;
	for(i=0;i<size;i++)
	{
		sum = sum + A[i];
	}
	float average = sum/size;
	cout<<"Average of the array is = "<<average<<endl;
	return 0;
}
