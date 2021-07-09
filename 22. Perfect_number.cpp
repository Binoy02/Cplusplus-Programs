/*
  Binoy Das Gupta
  Check if a number is a perfect number or not. 
  09-07-2021
*/

//Perfect number = sum of the factors of the entered number is equal to the double of the number

#include<iostream>
using namespace std;
int main()
{
	int num,i,sum;
	cout<<"Enter a number = ";
	cin>>num;
	sum = 0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum==2*num)
	{
		cout<<num<<" is a perfect number."<<endl;
	}
	else
	{
		cout<<num<<" is not a perfect number."<<endl;
	}
	return 0;
}
