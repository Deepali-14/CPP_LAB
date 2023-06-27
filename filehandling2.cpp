// Program on file handling {working with multiple files}

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	ofstream o;
	o.open("country");
	
	o<<"India"<<endl;
	o<<"United States Of America"<<endl;
	o<<"United Kingdom"<<endl;
	o.close();
	
	o.open("capital");
	o<<"New Delhi"<<endl;
	o<<"Washington"<<endl;
	o<<"London"<<endl;
	o.close();
	
	ifstream in;
	char line[100];
	in.open("country");
	
	cout<<"\nContent of country file"<<endl;
	while(in)
	{
		in.getline(line, 100);
		cout<<line<<endl;
	}
	in.close();
	
	in.open("capital");
	
	cout<<"\nContent of capital file"<<endl;
	while(in)
	{
		in.getline(line, 100);
		cout<<line<<endl;
	}
	in.close();
	
	return 0;
}
