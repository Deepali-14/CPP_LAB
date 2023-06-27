// Program on exception handling {rethrowing an exception}

#include<iostream>

using namespace std;

void divide(int x, int y, int z)
{
	cout<<"\n ------------------- DIVIDE FUNCTION WITH THROW ---------------------"<<endl;
	try
	{
		if(x==0)
			throw x;
		else
			cout<<"\n Division {(y+z)/x} = "<<(y+z)/x<<endl;
	}
	
	catch(int)  //parameter type is necessary variable is not
	{
		cout<<"\n CAUGHT INTEGER INSIDE FUNCTION "<<endl;
		throw;   //rethrowing exception
	}
	
	cout<<"\n ------------------- THE END OF FUNCTION ---------------------"<<endl;
}

int main()
{
	try
	{
		cout<<"\n ------------------- TRY ---------------------"<<endl;
		divide(2,3,4);
		divide(0,2,6);
	}
	
	catch(int i)
	{
		cout<<"\n !!!!! CAUGHT INTEGER INSIDE MAIN !!!!!"<<endl;
	}	
		
	cout<<"\n ------------------- THE END OF MAIN ---------------------"<<endl;
	
	return 0;
}
