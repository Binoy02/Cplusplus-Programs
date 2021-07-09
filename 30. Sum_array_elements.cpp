/*
  Binoy Das Gupta
  Find sum of array elements.
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int i,size;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0;i<size;i++) //Input array elements
	{
		cin>>A[i];
	}
	int sum = 0;
	for(i=0;i<size;i++)
	{
		sum = sum + A[i];
	}
	cout<<"Sum of entered array elements is : "<<sum<<endl;
	return 0;
}
