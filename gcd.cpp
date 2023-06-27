//Program on gcd or hcf

#include<iostream>

using namespace std;

class Number
{
    int a,b;
    
    public:
    	void getdata(void);
    	void gcd(void);	   	
    	void greater(void);
};

void Number :: getdata(void)
{
	cout<<"\n Enter two numbers : ";
	cin>>a>>b;
}

void Number :: gcd(void)
{
	int gcd;
	
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
	}
	
	cout<<"\n GCD of "<<a<<" and "<<b<<" is "<<gcd;
}

void Number :: greater(void)
{
	if(a>b)
		cout<<"\n "<<a<<" is greater";
		
	else
		cout<<"\n "<<b<<" is greater";
}

int main()
{
	Number n;
	
	n.getdata();
	
	n.gcd();
	
	n.greater();
	
	return 0;
}
