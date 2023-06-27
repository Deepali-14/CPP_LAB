//Program on square of a number and positive and negative number check

#include<iostream>

using namespace std;

class Number
{
	int n;
	
	public:
		void getdata()
		{
			cout<<" Enter number : ";
			cin>>n;
		}
		void square(void);
		void check(void);
};

void Number :: square()
{
	cout<<" Square of "<<n<<" is "<<n*n<<endl;
}

void Number :: check()
{
	if(n<0)
	cout<<" "<<n<<" is odd";
	
	else if(n==0)
	cout<<" "<<n<<" is zero";
	
	else
	cout<<" "<<n<<" is even";
	
}

int main()
{
	Number a;
	
	a.getdata();
	
	a.square();
	
	a.check();
	
	return 0;
}
