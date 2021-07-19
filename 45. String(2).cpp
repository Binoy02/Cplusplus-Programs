/*
  Binoy Das Gupta
  
  Reading and printing string 
  2. Taking more than single name in a line and printing it
  
  19-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cout<<"Enter your name : ";
	cin.get(s,30);
	cout<<"Welcome "<<s<<". You have access to the system."<<endl;
	return 0;
}
