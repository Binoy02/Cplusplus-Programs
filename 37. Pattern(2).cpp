/*
  Binoy Das Gupta
  Print a pattern  // *
  					  * *
  					  * * *
  					  * * * *  //
  10-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
