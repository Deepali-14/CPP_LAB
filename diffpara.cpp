#include<iostream>

using namespace std;

void swap(int,int);

void swap1(int *,int *);

void swap2(int &,int &);

int main()
{      
	int a=10,b=20;
	
	cout<<"\n Initially ->\n";
	cout<<" a : "<<a<<"\t b : "<<b<<endl;
	
	cout<<"\n After call by value ->\n";
	swap(a,b);
	cout<<" a : "<<a<<"\t b : "<<b<<endl;
	
	cout<<"\n After call by address ->\n";
	swap1(&a,&b);
	cout<<" a : "<<a<<"\t b : "<<b<<endl;
	
	cout<<"\n After call by reference ->\n";
	swap2(a,b);
	cout<<" a : "<<a<<"\t b : "<<b<<endl;
	
    return 0;
}

void swap(int x,int y)             
{
        int t;
        t=x;
        x=y;
        y=t;
}

void swap1(int *x,int *y)       
{
        int t;
        t=*x;
        *x=*y;
        *y=t;
       
}

void swap2(int &x,int &y) 
{
        int t;
        t=x;
        x=y;
        y=t;
}
