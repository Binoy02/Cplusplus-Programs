/*
  Binoy Das Gupta
  Accessing array elements using "for each" loop.
  09-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[5] = {2,5,8,9,6};
	for(auto x:A) // auto keyword is smart enough to check the data type of the declared array
	{
		cout<<x<<endl;
	}
	return 0;
}
