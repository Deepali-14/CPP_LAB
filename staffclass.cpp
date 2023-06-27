#include<iostream>
#include<string.h>
using namespace std;

class Staff
{
	int Staff_id;
	char Name[50];
	static char Department[18];
	char Designation[20];
	float Salary;
	static int count;
	public:
		
		void Getdata();
        void Showdata();
		void Sort(Staff *S, int n);
		void Sum(Staff *S, int n);
};

char Staff::Department[]="Computer Science";
int Staff::count=1;

void Staff::Getdata()
{	
	Staff_id=count;
	count++;
    cout<<"\nName: ";
    fflush(stdin);
    gets(Name);
    cout<<"\nWrite Designation from: Assistant Professor OR Associate Professor OR Programmer OR Peon"<<endl;
    cout<<"\nDesignation: ";
	fflush(stdin);
   	gets(Designation);
    cout<<"\nSalary: ";
    cin>>Salary;
}

void Staff::Showdata()
{
	cout<<endl;
    cout<<"\nStaff_id: ";
    cout<<Staff_id;
    cout<<"\nName: ";
    cout<<Name;
    cout<<"\nDepartment: ";
   	cout<<Department;
    cout<<"\nDesignation: ";
    cout<<Designation;
    cout<<"\nSalary: ";
    cout<<Salary;
}

void Staff::Sort(Staff *S, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(S[i].Name,S[j].Name)>0)
			{
				Staff t;
				t=S[i];
				S[i]=S[i+1];
				S[i+1]=t;
			}
		}
	}
}

void Staff::Sum(Staff *S, int n)
{
	float assis=0.0f,assoc=0.0f,spr=0.0f,spe=0.0f;
	for(int i=0;i<n;i++)
	{
		if(strcmp(S[i].Designation,"Assistant Professor")==0)
		assis=assis+S[i].Salary;
		
		else if(strcmp(S[i].Designation,"Associate Professor")==0)
		assoc=assoc+S[i].Salary;
		
		else if(strcmp(S[i].Designation,"Programmer")==0)
		spr=spr+S[i].Salary;
		
		else if(strcmp(S[i].Designation,"Peon")==0)
		spe=spe+S[i].Salary;
	}
	cout<<"\n Sum of salary of Assistant Professor: "<<assis;
	cout<<"\n Sum of salary of Associate Professor: "<<assoc;
	cout<<"\n Sum of salary of Programmer: "<<spr;
	cout<<"\n Sum of salary of Peon: "<<spe;
}


int main()
{
	Staff S[10];
	int n,ch;
	cout<<"No. of objects to read: ";
	cin>>n;
	do
    {
        cout<<"\n1.Read \n2.Display \n3.Sort \n4.Sum of salary \n5.Exit";
        cout<<"\n Read choice: ";
        cin>>ch;
        switch(ch)
        {
        	case 1:
        		for(int i=0;i<n;i++)
        		{
        		cout<<"\n Enter Staff information for oject "<<i+1;
				S[i].Getdata();
				}
        		
        		break;
        		
        	case 2:
        		for(int i=0;i<n;i++)
        		{
        			cout<<endl<<"\n Displaying Staff information for oject "<<i+1;
        			S[i].Showdata();
				}
        		
        		break;
        		
        	case 3:
        		S[1].Sort(S,n);
        		cout<<"\nAfter sorting";
        		for(int i=0;i<n;i++)
        		S[i].Showdata();
        		break;
        	case 4:
        		S[1].Sum(S,n);
        		break;
        	case 5:
      			cout<<"\nExiting.....";
       			break;
    	}
	}while (ch!=5);
	
	return 0;
}

