/*
  Binoy Das Gupta
  Print a pattern  //       *
  					  	  *	*
  					    * * *
  					  * * * *  //
  10-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<=3;i++)
	{
		for(k=i;k<3;k++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
