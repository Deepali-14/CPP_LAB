// Program on exception handling {class type as an exception}

#include<iostream>

#include<cstring>

using namespace std;

class Error
{
	int err_code;
	char *err_desc;
	
	public:
		Error(int c, const char * d)
		{
			err_code=c;
			err_desc=new char[strlen(d)];
			strcpy(err_desc, d);
		}
		
		void err_display()
		{
			cout<<"\n Error code = "<<err_code<<endl;
			cout<<"\n Error description = "<<err_desc<<endl;
		}
};

int main()
{
	try
	{
		cout<<"\n Press any key to throw a test exception :: ";
		cin.get();
		throw Error(99, "Test Exception");
	}
	
	catch(Error e)
	{
		cout<<"\n ---------------- EXCEPTION CAUGHT SUCCESSFULLY !!!! ----------------"<<endl;
		e.err_display();
	}
	
	cout<<"\n ---------------- END OF MAIN ----------------"<<endl;
	
	return 0;
}
