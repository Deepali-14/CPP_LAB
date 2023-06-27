#include<iostream>

#include<cstring>

using namespace std;

#define max 20

class student
{
	protected:
		char name[max];
		int rn;
		
	public:
		void get()
		{
			cout<<"\n Enter name : ";
			gets(name);
			
			cout<<"\n Enter roll number : ";
			cin>>rn;
		}
	
		void show()
		{
			cout<<"\n Name : "<<name<<endl;
			
			cout<<"\n Roll Number : "<<rn<<endl;
		}
};

class test : private student
{
	protected:
		int M[5];
	
	public:
		void getm()
		{
			get();
				
			cout<<"\n Enter marks in 5 subjects out of 10 : ";
			
			for(int i=0; i<5; i++)
				cin>>M[i];
		}
		
		void showm()
		{
			show();
			
			cout<<"\n Marks in 5 subjects out of 10 : ";
			
			for(int i=0; i<5; i++)
				cout<<M[i]<<"\t";
				
			cout<<endl;
		}
};

class result : private test
{
	protected:
		int total;
	
	public:
		void get_total()
		{
	
			getm();
			
			showm();
			
			total=0;
			
			for(int i=0; i<5; i++)
				total=total+M[i];
				
			cout<<"\n Total Marks = "<<total<<endl;
		}
};

int main()
{
	result r;
	
	r.get_total();
	
	return 0;
}
