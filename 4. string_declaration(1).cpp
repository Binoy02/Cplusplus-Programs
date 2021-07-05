/*
  Binoy Das Gupta
  String declaration as data type
  03-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	string str;
	
	cout<<"Can you please write your full name?"<<endl;
	getline(cin,str);
	
	cout<<"My full name is "<<str<<"."<<endl;
	return 0;	
}
