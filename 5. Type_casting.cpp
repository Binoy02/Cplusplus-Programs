/*
  Binoy Das Gupta
  Type casting example
  03-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
  int a,b;
  float c;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  c = (float)(a%b);
  cout<<"Remainder is ="<<c;
  return 0;
}
