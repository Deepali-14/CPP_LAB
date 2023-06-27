#include<iostream>

using namespace std;

float max(float a,float b,float c)
{
	if(a>b)
	{
		if(c>a)
			return c;
		
		else 
			return a;
	}
	
	else
	{
		if(c>b)
			return c;
		
		else
			return b;
	}
}

int main()
{
	float a,b,c;
	
	cout<<"\n Enter three numbers : ";
	cin>>a>>b>>c;
	
	float r=max(a,b,c);
	
	cout<<"\n Largest of "<<a<<", "<<b<<" and "<<c<<" is "<<r<<endl;
	
	return 0;
}
