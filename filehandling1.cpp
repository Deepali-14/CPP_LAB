// Program on file handling {working with single file}

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	ofstream outf("ITEM");
	
	cout<<"\n Enter name : ";
	int max=20;
	char name[max];
	cin.getline(name,max);
	outf<<name<<"\n";
	
	cout<<"\n Enter marks : ";
	float marks;
	cin>>marks;
	outf<<marks<<"\n"<<endl;
	
	outf.close();
	
	ifstream inf("ITEM");
	cout<<"\n Name : ";
	inf>>name;
	cout<<name<<endl;
	
	cout<<"\n Marks : ";
	inf>>marks;
	cout<<marks<<endl;
	
	return 0;
}
