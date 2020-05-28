#include <iostream>
using namespace std;
void Reg(int,char,float,char);
void Pre(int,char,float,char);
int main()
{
	int AC;
	float N;
	char SC,type;
	cout<<"Kindly Enter Account Number: ";
	cin>>AC;
	cout<<"\nKindly Enter Service Code: ";
	cin>>SC;
	cout<<"\nKindly Enter Number Of Minutes Used: ";
	cin>>N;
	cout<<"\nKindly Enter Type of Subscription: ";
	cin>>type;
	if (toupper(type)=='R')
	{
		Reg(AC,SC,N,type);
	}
	else if (toupper(type)=='P')
	{
		Pre(AC,SC,N,type);
	}
	else{
		cout<<"Wrong Type of Subscription";
	}

}

void Reg(int AC,char SC,float N,char type)
{
	float Amt;
	if (N>0 && N<50)
	{
		Amt=10.00;
	}
	else if (N>50)
	{
		Amt=10.00+(N-50)*0.20;
	}
	system("cls");
	cout<<"Account Number: "<<AC<<endl;
	cout<<"Service Used: "<<type<<endl;
	cout<<"Number Of Minutes Used: "<<N<<endl;
	cout<<"Amount Due: "<<Amt<<endl;
	
	
}
void Pre(int AC,char SC,float N,char type)
{
	float dt,dn,Amt;
	cout<<"Kindly Enter Minutes Used in Day from 6:00am to 6:00pm: ";
	cin>>dt;
	cout<<"Kindly Enter Minutes Used in Night from 6:00pm to 6:00am: ";
	cin>>dn;
	if (dt>75)
	{
		Amt=25.00+(dt-75)*0.10;
	}
	else if(dt>0 && dt<75)
	{
		Amt=25.00;
	}
	if (dn>100)
	{
		Amt=Amt+(dn-100)*0.05;
	}
	else if(dt>0 && dt<100)
	{
		Amt=25.00;
	}
	system("cls");
	cout<<"Account Number: "<<AC<<endl;
	cout<<"Service Used: "<<type<<endl;
	cout<<"Number Of Minutes Used: "<<N<<endl;
	cout<<"Amount Due: "<<Amt<<endl;	
}

