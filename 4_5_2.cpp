#include<iostream>

using namespace std;

#define largest(a,b,c) (a>b ? (a>c ? a : c) : (b>c ? b : c))

int main()
{
	float a,b,c;
	
	cout<<"\n Enter three numbers : ";
	cin>>a>>b>>c;
	
	int r=largest(a,b,c);
	
	cout<<"\n Largest of "<<a<<", "<<b<<" and "<<c<<" is "<<r<<endl;
	
	return 0;
}
