/*
  Binoy Das Gupta
  Find maximum element from an array.
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int i,size;
	cout<<"Enter array size = ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	int max = A[0];
	for(i=0;i<size;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
		}
	}
	cout<<"Maximum element of the array is = "<<max<<endl;
	return 0;
}
