/*
  Binoy Das Gupta
  Use of string functions
  21-07-2021
*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	int length;
	cout<<"Enter a string : ";
	cin.getline(s,50);
	cout<<"String : "<<s<<endl;
	length = strlen(s);
	cout<<"The length of the string is = "<<length<<endl;
	return 0;
}
