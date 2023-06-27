//WAP for class item to handle a file 

#include<iostream>

#include<fstream>

#include<iomanip>

using namespace std;

#define max 50

class Item
{
	char name[max];
	int id;
	float cost;
	char desc[max];
	
	public:
		void get()
		{
			cout<<"\n Enter name of item : ";
			fflush(stdin);
			gets(name);
			
			cout<<"\n Enter id of item : ";
			fflush(stdin);
			cin>>id;
			
			cout<<"\n Enter cost of item : ";
			fflush(stdin);
			cin>>cost;
			
			cout<<"\n Enter description of item : ";
			fflush(stdin);
			gets(desc);
		}
		
		void put()
		{
			cout<<"\n Name "<<setw(20)<<"\n Id "<<setw(20)<<"\n Cost "<<setw(20)<<"\n Description"<<endl;
			
		}
}

int main()
{
	return 0;
}
