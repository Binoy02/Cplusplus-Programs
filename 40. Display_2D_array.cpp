/*
  Binoy Das Gupta
  Display a 2D array.
  10-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[100][100];
	int i,j,row,col;
	cout<<"Enter rows and columns : ";
	cin>>row>>col;
	cout<<"Input elements of two-dimensional array : "<<endl;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<endl;
	cout<<row<<" X "<<col<<" matrix : "<<endl;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
