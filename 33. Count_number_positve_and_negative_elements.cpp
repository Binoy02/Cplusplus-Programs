/*
  Binoy Das Gupta
  Count total number of positive and negative elements in an array.
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int size,i,pcount,ncount;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	pcount = 0;
	ncount = 0;
	for(i=0;i<size;i++)
	{
		if(A[i]>0)
		{
			pcount++;
		}
		else
		{
			ncount++;
		}
	}
	cout<<endl;
	cout<<"The number of positive elements is = "<<pcount<<endl;
	cout<<"The number of negative elements is = "<<ncount<<endl;
	return 0;
}
