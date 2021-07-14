/*
  Binoy Das Gupta
  Pointer arithmetic
  11-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int A[5] = {2,4,6,8,10};
	int *p=A;
	p++;
	cout<<*p<<endl;
	p--;
	cout<<*p<<endl;
	p=p+2;
	cout<<*p<<endl;
	p=p-2;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<p+2<<endl;
	return 0;
}
