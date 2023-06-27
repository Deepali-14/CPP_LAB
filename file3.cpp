//WAP to copy one file and paste it to another

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	ifstream I;
	ofstream O;
	
	I.open("E:/CPP LAB/file2.txt");
	O.open("E:/CPP LAB/file3.txt");
	
	cout<<"\n Entering data : "<<endl;
	char c;
	do
	{
		c=I.get();
		O.put(c);
	}while(c!='.');
	
	I.close();
	O.close();
	
	ifstream In;
	
	In.open("E:/CPP LAB/file3.txt");
	
	if(In.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		char d[50];
		
		cout<<"\n Data : ";
		
		In.getline(d,20);
		
		cout<<d;
		
		In.close();
		
		cout<<"\n Data copied successfully..!"<<endl;
	}
	
	return 0;
}
