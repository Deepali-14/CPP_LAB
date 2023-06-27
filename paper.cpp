#include<iostream>

#include<iomanip>

using namespace std;

#define max 20

class Employee
{
	int emp_id;
	char emp_name[max], design[max];
	float salary;
	static int count;
	
	public:
		void getdata()
		{
			emp_id = count;
			count++;
			
			cout<<"\n Enter employee name : ";
			fflush(stdin);
			gets(emp_name);
			
			cout<<"\n Enter employee designation : ";
			gets(design);
			
			cout<<"\n Enter employee salary : ";
			fflush(stdin);
			cin>>salary;
		}
		
		void showdata()
		{
			cout<<"\n ID "<<setw(20)<<" NAME "<<setw(20)<<" DESIGNATION "<<setw(20)<<" SALARY "<<endl;
			cout<<" "<<emp_id<<setw(20)<<emp_name<<setw(20)<<design<<setw(20)<<salary<<endl;
		}
		
		void sortdata(Employee *, int);
};

int Employee :: count=1;

void Employee :: sortdata(Employee *Z, int n)
{
	Employee temp;
	int min;
	
	for(int i=0; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
	    {
	    	if(Z[i].salary>Z[j].salary)
	    	min=j;
		}
		
		if(min!=i)
		{
			temp=Z[i];
			Z[i]=Z[min];
			Z[min]=temp;
		}
	}
}

int main()
{
	Employee e[max];
	int n,ch;
	
	cout<<"\n Enter no. of employees : ";
	cin>>n;
	
	do
	{
		cout<<"\n ********** EMPLOYEE DETAILS **********"<<endl;
		cout<<"\n 1. INPUT \n 2. OUTPUT \n 3. SORT \n 0. EXIT"<<endl;
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				
				for(int i=0; i<n; i++)
					e[i].getdata();
	
				break;
			
			case 2:
				
				for(int i=0; i<n; i++)
					e[i].showdata();
				
				break;
				
			case 3:
				cout<<"\n Sorting data in ascending order of salary"<<endl;
				e[0].sortdata(e,n);
				break;
				
			case 0:
				cout<<"\n Exiting..:)"<<endl;
				break;
				
			default:
				cout<<"\n Wrong choice.. Try again..!"<<endl;
		}
		
	}while(ch!=0);

	return 0;
}
