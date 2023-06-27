#include<iostream>

using namespace std;

#define max 50

class Employee
{
	protected:
		char name[max];
		int id;
		
	public:
		void get()
		{
			cout<<"\n Enter name : ";
			fflush(stdin);
			gets(name);
			
			cout<<"\n Enter id : ";
			fflush(stdin);
			cin>>id;
		}
		
		void show()
		{
			cout<<"\n Name : "<<name<<endl;
			cout<<"\n Id : "<<id<<endl;
		}
};

class Manager : public Employee
{
	protected:
		char qual[max];
		float basesal;
		
	public:
		void get()
		{
			cout<<"\n Enter qualification : ";
			fflush(stdin);
			gets(qual);
			
			cout<<"\n Enter base salary : ";
			fflush(stdin);
			cin>>basesal;
		}
		
		void show()
		{
			cout<<"\n Qualification : "<<qual<<endl;
			cout<<"\n Base salary : "<<basesal<<endl;
		}
		
		void calsal()
		{
			float sal;
			
			sal=basesal + basesal*0.34 + basesal*0.05;
			
			cout<<"\n Total salary = "<<sal<<endl;
		}
};

class Worker : public Employee
{
	protected:
		float workhr;
		float wages;
		
	public:
		void get()
		{
			cout<<"\n Enter work hour : ";
			cin>>workhr;
			
			cout<<"\n Enter wages : ";
			cin>>wages;
		}
		
		void show()
		{
			cout<<"\n Work hour : "<<workhr<<endl;
			cout<<"\n Wages : "<<wages<<endl;
		}
		
		void calwages()
		{
			float total_wage;
			
			total_wage=wages + 30*workhr;
			
			cout<<"\n Total wage = "<<total_wage<<endl;
		}
};

int main()
{
	Manager M;
	Worker W;
	
	cout<<"\n *********** MANAGER DETAILS ***********"<<endl;
	M.Employee::get();
	M.Manager::get();
	M.Employee::show();
	M.Manager::show();
	M.Manager::calsal();
	
	cout<<"\n *********** WORKER DETAILS ***********"<<endl;
	W.Employee::get();
	W.Worker::get();
	W.Employee::show();
	W.Worker::show();
	W.Worker::calwages();
	
	return 0;
}
