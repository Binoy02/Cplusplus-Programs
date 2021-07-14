/* 
  Binoy Das Gupta
  Reference example 
  14-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int x;
	int &y=x; //Reference;
	cout<<"Enter a value = ";
	cin>>x;
	cout<<"X = "<<x<<endl; 
	cout<<"Y = "<<y<<endl;
	y--;
	cout<<"Y = "<<y<<endl;
	x++;
	cout<<"X = "<<x<<endl;
	return 0;
}
