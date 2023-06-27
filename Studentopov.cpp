//Program on student class with at least one or more static data members and member function 

#include<iostream>

#include<cstring>

#include<iomanip>

using namespace std;

class Student
{
	char name[20];
	int rollno;
	
		public:
			Student()
			{
				strcpy(name,"\0");
			}
			
			Student(char nm[20], int rn)
			{
				strcpy(name,nm);
				rollno=rn;
			}
//			friend void operator >>(istream &din, Student &s)
//			{	
//				cout<<"\n Enter student's roll number : ";
//				din>>s.rollno;
//				
//				cout<<"\n Enter student's name : ";
//				fflush(stdin);
//				gets(s.name);
//				
//				cout<<"\n Enter student's marks in 5 subjects : ";
//		        for(int i=1; i<=5 ; i++)
//		        	din>>s.marks[i];
//			}
			
			friend void operator <<(ostream &dout, Student s)
			{
				dout<<"\n Roll no. "<<"\t"<<"Name";
				dout<<"\n "<<s.name<<setw(10)<<s.rollno;
		        dout<<endl;
			}
};

int main()
{
	Student a[100];
	int ch,n,i;
	
	cout<<"\n Enter number of records : ";
	cin>>n;
	
	do
	{
		cout<<"\n 1. INPUT"<<"\n 2. OUTPUT"<<"\n 3. DISPLAY PARTICULAR RECORD"<<"\n 0. EXIT";
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		char nm[20];
		int rn;
		switch(ch)
		{
			case 1:
				for(int i=0; i<n; i++)
				{
					cout<<"\n Enter name : ";
					fflush(stdin);
					gets(nm);
					
					cout<<"\n Enter roll number : ";
					cin>>rn;
					
					a[i]=Student(nm,rn);
				}
				break;
				
			case 2:
				for(int i=0; i<n; i++)
					cout<<a[i];	
				break;
				
			case 3:
				int m;
				
				cout<<"\n Enter index : ";
				cin>>m;
				
				cout<<a[m];
				break;
				
			case 0:
				cout<<"\n Exiting :)"<<endl;
				break;
				
			default:
				cout<<"\n Wrong choice :( Try again...!"<<endl;
		}
	}while(ch!=0);
	
	return 0;
}
