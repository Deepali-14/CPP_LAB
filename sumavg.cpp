//Program on sum and average of two numbers

#include<iostream>

using namespace std;

int main()
{
	float n1,n2;
	
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	
	float sum=n1+n2;
	cout<<"Sum of "<<n1<<" and "<<n2<<" is "<<sum<<endl;
	
	float avg=sum/2;
	cout<<"Average of "<<n1<<" and "<<n2<<" is "<<avg<<endl;
	
	return 0;
}
