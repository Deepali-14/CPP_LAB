#include<iostream>

#include<fstream>

#include<iomanip>

using namespace std;

#define max 20

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
			cin>>float;
			
			cout<<"\n Enter description of item : ";
			fflush(stdin);
			gets(desc);
		}
		
		void put()
		{
			cout<<"\n ID "<<setw(20)<<" NAME "<<setw(20)<<" DESCRIPTION "<<setw(20)<<" COST "<<endl;
			cout<<" "<<id<<setw(20)<<name<<setw(20)<<cost<<setw(20)<<desc<<endl;
		}
		
		int search(Item *a, int iid)
		{
			for(int i=0; i<n; i++)
				if(a[i].id=iid)
					return i;
		
			return -999;
		}
		
		void sort(Item *a)
		{
			Item temp;
			for(int i=0; i<n; i++)
				for(int j=0; j<n; j++)
					if(a[i].id==a[j]==id)
					{
						temp=z[i];
						z[i]=z[j];
						z[j]=temp;
					}
		}
		
};
int main()
{
	Item I;
	
	fstream o;
	
	o.open("e:/CPP LAB/project.txt", ios::app);
	
	for()
	return 0;
}
