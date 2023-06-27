#include<iostream>

using namespace std;

void arith(int,int,int &,int &,int &,int &);

int main()
{
	int a,b,add,sub,mul,div;
	
	cout<<"\n Enter two numbers : ";
	cin>>a>>b;
	
	arith(a,b,add,sub,mul,div);
	
	cout<<"\n Addition : "<<add<<"\n Subtraction : "<<sub<<"\n Multiplication : "<<mul<<"\n Division : "<<div<<endl;
	
	return 0;
}

void arith(int a,int b,int &ad,int &s,int &m,int &d)
{
	ad=a+b;
	
	s=a-b;
	
	m=a*b;
	
	d=a/b;
}
