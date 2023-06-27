//Program on sum of two numbers

#include<iostream>

using namespace std;

class Number
{
	int m,n;
	
	public:
		void getdata(void);
		void sum(void);
};

void Number :: getdata(void)
{
	cout<<"Enter numbers : ";
	cin>>m>>n;
}

void Number :: sum(void)
{
	cout<<m+n;
}

int main()
{
	Number num;
	
	num.getdata();
	
	num.sum();
	
	return 0;
}
