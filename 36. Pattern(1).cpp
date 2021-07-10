/*
  Binoy Das Gupta
  Print a pattern  // 1 2 3 4 
  					  5 6 7 8
  					  9 10 11 12
  					  13 14 15 16  //
  10-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	k=1;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
	
}
