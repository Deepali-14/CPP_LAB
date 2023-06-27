//WAP to store a data upto the user's choice in the file afterward read and display the data

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	ofstream O;
	
	O.open("E:/CPP LAB/file2.txt");
	
	char c;
	
	cout<<"\n Program will terminate when '.' encountered"<<endl;
	
	cout<<"\n Enter data : "<<endl;
	
	int i=0;
	do
	{
		cout<<"\n Enter data "<<++i<<" : ";
		cin>>c;
		O.put(c);
	}while(c!='.');
	
	O.close();
	
	ifstream I;
	
	I.open("E:/CPP LAB/file2.txt");
	
	if(I.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		cout<<"\n Data : "<<endl;
		char ch;
		
		do
		{
			ch=I.get();
			cout<<" "<<ch<<" ";
		}while(ch!='.');
	}	
	
	I.close();
	
	return 0;
}
