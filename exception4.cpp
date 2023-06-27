// Program on exception handling {catching all exceptions}

#include<iostream>

using namespace std;

void test(int x)
{
	cout<<"\n ------------------- IN TEST FUNCTION ---------------------"<<endl;
	try
	{
		if(x==-1)
			throw x;
			
		else if(x==0)
			throw 'x';
			
		else if(x==1)
			throw 1.0;
	}
	
	catch(...)
	{
		cout<<"\n !!!!!! EXCEPTION CAUGHT WITH CATCHING ALL EXCEPTIONS !!!!!! "<<endl;
	}
	
	cout<<"\n ------------------- END OF TRY-CATCH SYSTEM ---------------------"<<endl;
}

int main()
{
	cout<<"\n x==1 "<<endl;
	test(1);
	
	cout<<"\n x==0 "<<endl;
	test(0);
		
	cout<<"\n x==-1 "<<endl;
	test(-1);
		
	cout<<"\n x==2 "<<endl;
	test(2);
		
	cout<<"\n ------------------- END OF MAIN ---------------------"<<endl;
	return 0;
}
