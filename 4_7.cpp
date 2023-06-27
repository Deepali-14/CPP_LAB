#include<iostream>

#include<cmath>

using namespace std;

double power(double m,int n=2)
{
	return pow(m,n);
}

int main()
{
	int n;
	double m;
	
	cout<<"\n Enter value of m : ";
	cin>>m;
	
	cout<<"\n Enter value of n : ";
	cin>>n;
	
	cout<<"\n "<<m<<" raised to power "<<n<<" is "<<power(m,n)<<endl;
	
	cout<<"\n When using default argument of n=2\n";
	
	cout<<"\n "<<m<<" raised to power"<<" 2 is "<<power(m)<<endl;
	
	return 0;
}
