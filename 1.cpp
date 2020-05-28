#include <iostream>
#include <conio.h>
using namespace std;
void Bus();
void Res();
int main()
{
	char type;
	cout<<"Kindly Enter Type of Customer You Are: ";
	cin>>type;
	cout<<endl;
	if (toupper(type)=='B')
	{
		Bus();
	}
	else if (toupper(type)=='R')
	{
		Res();
	}
	else 
	{
	cout<<"Please Enter Correct type of Customer";
	exit(1);
	}
	
}



void Res()
{
	int AC,CC,SC;
	float BA;
	cout<<"Kindly Enter Your Account Number(XXXXXXXX)): ";
	cin>>AC;
	if (AC>99999999 || AC<0)
	{
		cout<<"Kindly Enter Correct A/C Number";
		exit(1);
	}
	cout<<"\nKindly Enter Your Customer Code (XXXX): ";
	cin>>CC;
	if (CC>9999 || CC<0)
	{
			cout<<"Kindly Enter Correct Code";
			exit(1);
	}
	cout<<"\nKindly Enter Number Of Subscribed Channels: ";
	cin>>SC;
	
	BA=4.50+20.50+SC*(7.50);
	system("cls");
	cout<<"Customer`s Account Number: "<<AC<<endl;
	cout<<"Billing Amount = $"<<BA;
	getch();
}

void Bus(){
	int AC,CC,SC;
	float BA;
	cout<<"Kindly Enter Your Account Number(XXXXXXXX)): ";
	cin>>AC;
	if (AC>99999999 || AC<0)
	{
		cout<<"Kindly Enter Correct A/C Number";
		exit(1);
	}
	cout<<"\nKindly Enter Your Customer Code (XXXX): ";
	cin>>CC;
	if (CC>9999 || CC<0)
	{
			cout<<"Kindly Enter Correct Code";
			exit(1);
	}
	int addc;
	cout<<"\nKindly Enter Number Of Subscribed Channels: ";
	cin>>SC;
	cout<<"\nKindly Enter Number of Additional Channels: ";
	cin>>addc;
	
	BA=15.00+75.00+SC*(50.00)+addc*(5.00);
	system("cls");
	cout<<"Customer`s Account Number: "<<AC<<endl;
	cout<<"Billing Amount = $"<<BA;
	getch();
}
