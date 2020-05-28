#include <iostream>
using namespace std;
float bill(float,int,int);

int main()
{
	float hr;
	int time;
	int Inc;
	
	cout<<"Enter the hourly rate: ";
	cin>>hr;
	cout<<endl;
	cout<<"Enter Total Consulting Time in Minutes: ";
	cin>>time;
	cout<<endl;
	cout<<"Enter Income Of A person: ";
	cin>>Inc;
	float a=bill(hr,time,Inc);
	cout<<"Total Billing Amount =$"<<a;
}



float bill(float hr,int time, int Inc)
{
	float SC;
	if (Inc<=25000 && time<=30)
	{
		SC=0;
	}
	else if (Inc<=25000 && time>30)
	{
		SC= hr*0.40*((time-30)/60);
	}
	else if (Inc>25000 && time<=20)
	{
		SC=0;
	}
	else if (Inc>25000 && time > 20)
	{
		SC=hr*0.70*((time-20)/60);
	}
	
	return SC;
}
