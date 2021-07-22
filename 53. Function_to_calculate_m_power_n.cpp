/*
  Binoy Das Gupta
  Function to calculate m power n
  22-07-2021
*/

#include<iostream>
using namespace std;

int pow(int m, int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*m;
	}
	return result;
}

int main()
{
	int m,n,result;
	cout<<"Enter base and power = ";
	cin>>m>>n;
	result = pow(m,n);
	cout<<m<<" to the power "<<n<<" = "<<result<<endl;
	return 0;
}
