/*
  Binoy Das Gupta
  Binary search
  10-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[10] = {6,8,13,17,20,22,25,28,30,35};
	int low=0,high=9,mid;
	int value;
	cout<<"Enter the value to be searched : ";
	cin>>value;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(value==A[mid])
		{
			cout<<value<<" is found at index "<<mid<<endl;
			return 0;
		}
		else if(value<A[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	cout<<value<<" is not found."<<endl;
	return 0;
}
