#include <iostream>
#include <math.h>
using namespace std;
float distance(float, float , float ,float );
float radius(float, float , float ,float );
float circum(float);
float area(float);
int main()
{
	float x1,x2,y1,y2;
	cout<<"Enter Co ordintes of x: ";
	cin>>x1;
	cout<<endl;
	cin>>x2;
	cout<<"\nEnter Co ordinates of y: ";
	cin>>y1;
	cout<<endl;
	cin>>y2;
	//distance(x1,x2,y1,y2);
	float b =radius(x1,x2,y1,y2);
	float per=circum(b);
	float A=area(b);
	cout<<"Circumference= "<<per<<endl;
	cout<<"Area= "<<A<<endl;
}

float distance(float x1,float x2,float y1,float y2)
{
	float a=(x2-x1)*(x2-x1);
	float b=(y2-y1)*(y2-y1);
	float sum=a+b;
	float dist= sqrt(sum);
	return dist;
}

float radius(float x1,float x2,float y1,float y2)
{
	float a= distance(x1,x2,y1, y2);
	return a;
}

float area(float x)
{
	float ar=3.1416*x*x;
	return ar;
}
float circum(float y)
{
	float per=2*3.1416*y;
	return per;
}
