//WAP to have 1 int, 1 char and 1 float in a file and display its content

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	ofstream O;
	
	O.open("E:/CPP LAB/file1.txt");
	
	int a;
	char b;
	float c;
	
	cout<<"\n Enter data : "<<endl;
	
	cout<<"\n Enter value of a, b and c : ";
	cin>>a>>b>>c;
	
	O<<a<<" "<<b<<" "<<c<<" "; // Here O.put() or << can be used
	
	O.close();
	
	ifstream I;
	
	I.open("E:/CPP LAB/file1.txt");
	
	if(I.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		cout<<"\n Data : "<<endl;
	
		I>>a>>b>>c; //Here read(), get(), >> or getline operator can be used
	
		cout<<" "<<a<<" "<<b<<" "<<c<<" "<<endl; 
	
		I.close();
		
	}
	
	return 0;
}
