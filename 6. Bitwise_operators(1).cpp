/*
  Binoy Das Gupta
  Bitwise operators(AND,OR,XOR,Left shift,Right shift)
  05-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int x=11,y=5,z1,z2,z3,z4,z5;
	z1=x&y;
	z2=x|y;
	z3=x^y;
	z4=y<<1;
	z5=y>>1;
	cout<<"The value of X&Y ="<<z1<<endl;
	cout<<"The value of X|Y ="<<z2<<endl;
	cout<<"The value of X^Y ="<<z3<<endl;
	cout<<"The value of left shift of Y ="<<z4<<endl; //formula of left shift: if (variable<<i), left shift = (variable*2tothepowerofi)
	cout<<"The value of right shift of Y ="<<z5<<endl; //formula of right shift: if (variable>>i), right shift = (variable/2tothepowerofi)
	return 0;
}
