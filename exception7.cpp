//Program for testing throw restrictions

#include<iostream>

using namespace std;

void test(int x) throw(int, double)
{
	if(x==1) 
		throw x;
	else if(x==-1) 
		throw 'x';
	else if(x==0) 
		throw x;
	else if(x==2)
		throw 1.0;
		
	cout<<"\n --------------------- END OF FUNCTION -----------------------"<<endl;
}

int main()
{
	try
	{
		cout<<"\n ----------------------------- TRY BLOCK ---------------------------------"<<endl;
		cout<<"\n x==-1"<<endl;
		test(-1);
		cout<<"\n x==0"<<endl;
		test(0);
		cout<<"\n x==1"<<endl;
		test(1);
		cout<<"\n x==2"<<endl;
		test(2);
	}
	
	catch(int)
	{
		cout<<"\n --------------------- INTEGER EXCEPTION CAUGHT !!!!!! ---------------------";
	}
	
	catch(double)
	{
		cout<<"\n --------------------- DOUBLE EXCEPTION CAUGHT !!!!!! ---------------------";
	}
	
	catch(char)
	{
		cout<<"\n --------------------- CHARACTER EXCEPTION CAUGHT !!!!!! ---------------------";
	}
	
	cout<<"\n ------------------------------- END OF MAIN -------------------------------"<<endl;
	
	return 0;
}
