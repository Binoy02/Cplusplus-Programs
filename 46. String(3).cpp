/*
  Binoy Das Gupta
  
  Reading and printing string
  3. Taking more than one string in multiple line(take one and print, then ... ....)

  19-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	char s1[100];
	char s2[100];
	//1st string
	cout<<"What is your full name : ";
	cin.get(s1,40);
	cout<<"My name is "<<s1<<"."<<endl;
	
	cin.ignore();
	
	//2nd string 
	cout<<"What is your birthplace : ";
	cin.get(s2,40);
	cout<<"My birthplace is "<<s2<<"."<<endl;
	
	return 0;
}
