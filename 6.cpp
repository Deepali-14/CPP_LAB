#include<iostream>

using namespace std;

class Number
{
    float f;
	
	public :
		void read()
		{
			cout<<" Enter temperature in Fahrenheit : ";
			cin>>f;
		}
		
		void tocelsius(void);
};

void Number :: tocelsius()
{
	float c=(f-32)*5/9;
	
	cout<<" Temperature in Celsius : "<<c;
}

int main()
{
	Number o;
	
	o.read();
	
	o.tocelsius();
	
	return 0;
}
