#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class student
{
  protected:
            int roll_no;
            char name[40];
            int age;
           
  public:
            void read()
            {
            	
            	cout<<"\nEnter Rollno : ";
            	cin>>roll_no;
            	cout<<"\nEnter Name : ";
            	fflush(stdin);
            	gets(name);
            	cout<<"\nEnter Age : ";
            	cin>>age;
            }
            void show()
            {
              	cout<<"\nRollno : "<<roll_no;
            	cout<<"\nName : "<<name;
            	cout<<"\nAge : "<<age;
            }
};

class UGstudent:public virtual student
{
	
  protected:
			int semester;
			int fee;
  public:
          void readu()
          {
            cout<<"\nEnter Semester :";
            cin>>semester;
            cout<<"\nEnter Fee :";
            cin>>fee;
          }
          void showu()
          {
            cout<<"\nSemester : "<<semester;
            cout<<"\nFee : "<<fee;
          }
          
    void average_age(UGstudent *u,int nu)
	{
		int s1=0,s2=0,s3=0,s4=0,c1=0,c2=0,c3=0,c4=0;
	
		for(int i=0;i<nu;i++)
		{
			if(u[i].semester==1)
			{
				c1++;
				s1=s1+u[i].age;
			}

			if(u[i].semester==2)
			{
				c2++;
				s2=s2+u[i].age;
			}	
				
			if(u[i].semester==3)
			{
				c3++;
				s3=s3+u[i].age;
			}
				
			if(u[i].semester==4)
			{
				c4++;
			    s4=s4+u[i].age;
			}	
		}
		cout<<"\nAverage age is "<<(s1/c1)<<endl;
		cout<<"Average age is "<<(s2/c2)<<endl;
		cout<<"Average age is "<<(s3/c3)<<endl;
		cout<<"Average age is "<<(s4/c4)<<endl;
	}
};

class PGstudent:virtual public student
{
  protected:
            int semester;
            int stipend;
  public:
            void readp()
            {
              cout<<"Enter semeste : ";
              cin>>semester;
              cout<<"Enter stipend : ";
              cin>>semester;
            }
            void showp()
            {
              cout<<"semester : "<<semester;
              cout<<"stipend : "<<stipend;
            }
  			
			void highest_stipend(PGstudent *p,int np)
			{
				int m=0;
				for(int i=0;i<np;i++)
					m=max(m,p[i].stipend);
				
				cout<<"\nMaximum stipend is "<<m;
			}          
};

int main()
{
	int nu,np;
	
	UGstudent U[10];
  	cout<<"\n Enter no. of Under Graduate students: ";
  	cin>>nu;
	
  	PGstudent P[10];
  	cout<<"\n Enter no. of Post Graduate students: ";
  	cin>>np;
	
	cout<<"\nEnter the data for Undergraduate students";
	for(int i=0;i<nu;i++)
	{
		U[i].read();
  		U[i].readu();
  		cout<<endl;
	}
	
	cout<<"\nEnter the data for Postgraduate students";
  	for(int i=0;i<np;i++)
  	{
  		P[i].read();
  		P[i].readp();
  		cout<<endl;
	}
  	
  	cout<<"\n----------Data of Undergraduate students----------";
  	for(int i=0;i<nu;i++)
	{
		U[i].show();
		U[i].showu();
		cout<<endl;
	}
  	
  	U[1].average_age(U,nu);//finds average age of undergraduate student
  
  	cout<<"\n----------Data of Postgraduate students---------";
  	for(int i=0;i<np;i++)
  	{
  	  	P[i].show();
  		P[i].showp();
  		cout<<endl;
	}
  	
  	P[1].highest_stipend(P,np);//finds highest stipend of post graduate student

	return 0;
}
