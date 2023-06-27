//Program on prime number check

#include<iostream>

using namespace std;

class Number
{
	int n;
	
	public:
		void getdata(void);
		void checkprime(void);
};
 
void Number :: getdata(void)
{
	cout<<"Enter number : ";
	cin>>n;
} 

void Number :: checkprime(void)
{
	if(n==1)
	{
		cout<<n<<" is neither prime nor composite";
		return;
	}
	
	else
	{
		int flag=0;
		
		for(int i=2;i<=(n/2);i++)
		{
			if(n%i==0)
			{
				flag++;
		        break;
			}
		}
		
		if(flag==0)
		cout<<n<<" is prime";
		
		else
		cout<<n<<" is not prime";
	}
}


int main()
{
	Number num;
	
	num.getdata();
	
	num.checkprime();
	
	return 0;
}
