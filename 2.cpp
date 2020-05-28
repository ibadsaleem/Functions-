#include <iostream>									//libraries used 
#include <conio.h>
#include <cmath>
using namespace std;
void showchoices();														//prototypes
void FeetAndInchesToMetersAndCent(float,float);
void metersAndCentTofeetAndInches(float*,float*);
int main()														//Main Function
{
	system("COLOR F0");				
	showchoices();
}

void showchoices()											//Function 1
{
	char a;
	float feet,inch,met,cm;
	cout<<"Welcome To Unit Converter\n";
	cout<<"Kindly Choose from the following options\n\n";
	cout<<"1)Feet and Inches into Meter and Cent";
	cout<<"\n2)Meter and Cent to Feet and Inches\n";
	a=getch();
	if (a=='1')
	{
		cout<<"\n\nEnter Length in Feet and Inches\n";
		cout<<"Feet: ";
		cin>>feet;
		cout<<"Inches: ";
		cin>>inch;
		FeetAndInchesToMetersAndCent(feet,inch);
	}
	else if (a=='2')
	{
	cout<<"\n\nEnter Length in Meters and Centimeter\n";
	cout<<"Meters: ";
	cin>>met;
	cout<<"Centimeter: ";
	cin>>cm;
	metersAndCentTofeetAndInches(&met,&cm);
	}
	else{
		cout<<"Wrong choice";
	}
	
}


void FeetAndInchesToMetersAndCent(float ft,float in)						//Function 2		//by value using variables
{
	system("cls");
	cout<<"Lenth in Metres and Centimeters is";
	cout<<"\nMetres: "<<ceil(ft*0.3048)<<" Centimeters: "<<floor(in*2.54);
	getch();
	system("cls");
	while(1){
		system("cls");
	cout<<"Press any key to continue. Press E to exit";
	
	char b=getch();
	if (toupper(b)=='E')
	{
		exit(1);
	}
	else{
		showchoices();
	}
	
}}

void metersAndCentTofeetAndInches(float *m, float *cm)								//Function 3	//by reference using pointers
{
	
	system("cls");
	cout<<"Lenth in Feet and Inches is\n";
	cout<<"\nFeet: "<<ceil(*(m)*3.28)<<" Inches: "<<floor(*(cm)*0.393);
	getch();
	system("cls");
	while(1)
	{
		
	cout<<"Press any key to continue. Press E to exit";
	
	char b=getch();
	if (toupper(b)=='E')
	{
		exit(1);
	}
	else{
		showchoices();
	}
}
}
