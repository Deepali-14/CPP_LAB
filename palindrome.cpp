//Program on pallindrom number check 
 
#include<iostream>

using namespace std;

class Number
{
	int n;
	
	public:
		void getdata(void);
		void palindrome(void);
};

void Number :: getdata(void)
{
	cout<<"Enter number : ";
	cin>>n;
}

void Number :: palindrome(void)
{
	int c,k,s=0;
	
    for(int i=n,j=1;i!=0;i/=10,j=j*10)
    	c=j;
	
	for(int i=n;i!=0;i/=10)
	{
		k=i%10;
		
		s=s+k*c;
		
		c=c/10;
	}
	
	if(s==n)
	cout<<n<<" is a palindromic number";
	
	else
	cout<<n<<" is not a palindromic number";
}

int main()
{
	Number num;
	
	num.getdata();
	
	num.palindrome();
	
	return 0;
}
