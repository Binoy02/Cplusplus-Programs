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
	cout<<"What is your name? ";
	cin.getline(s1,40);
	cout<<"My name is "<<s1<<"."<<endl;
	
	//2nd string 
	cout<<"Where do you live? ";
	cin.getline(s2,40);
	cout<<"I live in "<<s2<<"."<<endl;
	
	return 0; 	
}
