// Program on file handling {reading from two files simultaneously}

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	const int max=100;
	char line[max];
	
	ifstream in1, in2;
	
	in1.open("country");
	in2.open("capital");
	
	//while(in1.eof()==0 && in2.eof()==0)
	for(int i=1; i<=3; i++)
	{
		
		if(in1.eof()!=0)
		{
			cout<<"\n Country's file cannot be open"<<endl;
			exit(1);
		}
	
		else
		{
			in1.getline(line,max);
			cout<<"\n Capital of "<<line;
		}
		
		if(in2.eof()!=0)
		{
			cout<<"\n Capital's file cannot be open"<<endl;
			exit(1);
		}
		
		else
		{
			in2.getline(line,max);
			cout<<" is "<<line<<endl;
		}
	}
	
	in1.close();
	in2.close();
	
	return 0;
}
