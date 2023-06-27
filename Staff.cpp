#include<iostream>

#include<iomanip>

using namespace std;

#define max 100

class Staff
{
	int Staff_Id=1;
	char Name[max];
	char Department[max]="Computer Science";
	char Designation[max];
	int Salary;
	
	public:
		void getdata();
		void showdata();
};

void Staff :: getdata()
{
    cout<<"\n Enter Name : ";
    fflush(stdin);
    gets(Name);
    
    cout<<"\n Enter Designation : ";
    fflush(stdin);
    gets(Designation);
    
    cout<<"\n Enter Salary : ";
    fflush(stdin);
    cin>>Salary;
}

void Staff :: showdata()
{
    cout<<"\n Staff Id \t\t Name \t\t Department \t\t Designation \t\t Salary"<<endl;
    cout<<" "<<Staff_Id++<<Name<<setw(20)<<Department<<setw(20)<<Designation<<setw(20)<<Salary<<endl;
}

//void Student :: Searchdata(Student *Z, char t[], int n)
//{
//	    int i;
//	    
//        for(i=0; i<n; i++)
//        if (strcmp(Z[i].Sname,t)==0)
//        {       
//			cout<<"\n Student found \n"; 
//			Z[i].Showdata();        
//			break;
//		}
//       
//        if(i==n)
//        cout<<"\n Student not found \n";
//}

int main()
{
	Staff s[max];
	int ch,n;
	
	cout<<"\n Enter number of records you want to enter : ";
	cin>>n;
	
	do
	{
		cout<<"\n 1. Getdata \n 2. Showdata \n 0. Exit";
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				for(int i=0; i<n; i++)
				{
					s[i].getdata();
				}
				
				break;
				
			case 2:
				for(int i=0; i<n; i++)
				{
					s[i].showdata();
				}
				break;
				
			case 0:
				cout<<"\n We are exiting ..."<<endl;
				break;
				
			default:
				cout<<"\n Wrong choice entered ..."<<endl;
		}
	}while(ch!=0);
	
	return 0;
}
