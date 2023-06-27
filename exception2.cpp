// Program on exception handling {invoking functions that generate exception}

#include<iostream>

using namespace std;

void divide(int x, int y, int z)
{
	cout<<"\n ------------------- DIVIDE FUNCTION WITH THROW ---------------------"<<endl;
	if((x-y)!=0)
		cout<<"\n Result = "<<(z/(x-y));
	else
		throw(x-y);
}

int main()
{
	try
	{
		cout<<"\n ------------------- TRY ---------------------"<<endl;
		divide(2,3,4);
		divide(2,2,6);
	}
	
	catch(int i)
	{
		cout<<"\n !!!!! EXCEPTION CAUGHT !!!!!"<<endl;
	}	
		
	cout<<"\n ------------------- THE END ---------------------"<<endl;
	return 0;
}
