/*
  Binoy Das Gupta
  // Practice exercise : 
  Write a program to offer discounts on total bill amount. 
  Program should take total amount as input and calculate discount
  if bill amount<100, no discount
  if 100<=bill amount<500, 10% discount
  if bill amount>=500, 20% discount
  //
  08-07-2021
*/

#include<iostream>
using namespace std;
int main()
{
	int billAmount,disAmount,netAmount;
	cout<<"Enter bill amount : ";
	cin>>billAmount;
 	if(billAmount<100)
 	{
 		disAmount = 0;
 		cout<<"Bill amount = "<<billAmount<<endl;
 		cout<<"Discount = "<<disAmount<<endl;
 		cout<<"Net amount = "<<billAmount<<endl;
	}
	else if(billAmount>=100 && billAmount<500)
	{
		disAmount = (billAmount*10)/100;
		netAmount = billAmount - disAmount;
 		cout<<"Bill amount = "<<billAmount<<endl;;
 		cout<<"Discount = "<<disAmount<<endl;
		cout<<"Net amount = "<<netAmount<<endl;
	}
	else if(billAmount>=500)
	{
		disAmount = (billAmount*20)/100;
		netAmount = billAmount - disAmount;
 		cout<<"Bill amount = "<<billAmount<<endl;
 		cout<<"Discount = "<<disAmount<<endl;
		cout<<"Net amount = "<<netAmount<<endl;
	}
	return 0;
}
   
