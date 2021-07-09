/*
  Binoy Das Gupta
  Find minimum element of an array.
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int size,i;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	int min = A[0];
	for(i=0;i<size;i++)
	{
		if(A[i]<min)
		{
			min = A[i];
		}
	}
	cout<<"Minimum element of the array is = "<<min<<endl;
	return 0;
}
