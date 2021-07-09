/*
  Binoy Das Gupta
  Linear search
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int size,i,value,pos,loc;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the value to be searched : ";
	cin>>value;
	pos = 0;
	for(i=0;i<size;i++)
	{
		if(A[i]==value)
		{
			pos++;
			loc = i + 1;
			break;
		}
	}
	cout<<endl;
	if(pos == 1)
	{
		cout<<value<<" is found at position "<<loc<<endl;
	}
	else
	{
		cout<<value<<" is not found."<<endl;
	}
	return 0;
}
