// Program on exception handling 

#include<iostream>

using namespace std;

int main()
{
	int a,b;
	
	cout<<"\n Enter values of a and b :: ";
	cin>>a;
	cin>>b;
	
	int x=a-b;
	
	try
	{
		if(x!=0)
			cout<<"\n Result (a/x) = "<<a/x<<endl;
		else
		 	throw(x);
	}
	
	catch(int i)
	{
		cout<<"\n !!!!!!! EXCEPTION CAUGHT : DIVIDE BY ZERO !!!!!!!"<<endl;
	}
		
	cout<<"\n ------------------- THE END ---------------------"<<endl;
	return 0;
}
