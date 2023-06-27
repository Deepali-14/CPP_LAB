#include<iostream>

using namespace std;

float area(int b,int h)
{
    return 0.5*b*h;
}

float area(int r)
{
	return 3.14*r*r;
}

int main()
{
	int b,h,r;
	
	cout<<"\n Enter value of base and height of triangle : ";
	cin>>b>>h;
	
    cout<<"\n Area of triangle : "<<area(b,h)<<endl;
	
	cout<<"\n Enter value of radius of circle : ";
	cin>>r;
	
	cout<<"\n Area of circle: "<<area(r)<<endl;
	
	return 0;
}
