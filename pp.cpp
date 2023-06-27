#include<iostream>

#include<fstream>

#include<cstring>

#include<iomanip>

using namespace std;

#define max 50

int n;

class Employee
{
    char emp_name[max], designation[max], department[max];
    int emp_id, phone_no, salary;
    
    public:
        void Read()
        {
            cout<<"\n Enter id : ";
            fflush(stdin);
            cin>>emp_id;
            
            cout<<"\n Enter name : ";
            fflush(stdin);
            gets(emp_name);
            
            cout<<"\n Enter designation : ";
            fflush(stdin);
            gets(designation);
            
            cout<<"\n Enter department : ";
            gets(department);
            
            cout<<"\n Enter salary : ";
            fflush(stdin);
            cin>>salary;
            
            cout<<"\n Enter phone number : ";
            cin>>phone_no;    
        }
        
        void Show()
        {
            cout<<"\n ID "<<setw(20)<<" NAME "<<setw(20)<<" DESIGNATION "<<setw(20)<<" DEPARTMENT "<<setw(20);
            cout<<" SALARY "<<setw(20)<<" PHONE NUMBER "<<endl;
            cout<<" "<<emp_id<<setw(20)<<emp_name<<setw(20)<<designation<<setw(20)<<department<<setw(20)<<salary<<setw(20)<<phone_no<<endl;
        }
       
        void sort(Employee *z)
        {
            Employee temp;
            
            for(int i=0;i<n-1;i++)
                for(int j=i+1;j<n;j++)
                if (strcmp(z[i].emp_name, z[j].emp_name)>0)
                {
                    temp=z[i];
                    z[i]=z[j];
                    z[j]=temp;
                }
        }

        friend int search(Employee *z,int id)
        {
            for(int i=0;i<n;i++)
            	if (z[i].emp_id==id)
                    return i;
            return -1;            
        }
};


int main()
{
    Employee e[50];

    fstream obj;
    cout<<"\n Enter the number of items you want to handle : ";
    cin>>n;
    obj.open("Employee.txt",ios::out);
    for(int i=0;i<n;i++)
    {
        e[i].Read();
        obj.write((char *)&e[i],sizeof(e[i]));
    }
    obj.close();
    
    e[0].sort(e);
    
    cout<<"\n------------EMPLOYEE DETAILS IN ASCENDING ORDER BY NAME------------"<<endl;
    obj.open("Employee.txt",ios::out);
    for(int i=0;i<n;i++)
    {
        obj.write((char *)&e[i],sizeof(e[i])); 
    }
    obj.close();
    
    obj.open("Employee.txt",ios::in);
    obj.seekg(0);
    for(int i=0;i<n;i++)
    {
        obj.read((char *)&e[i],sizeof(e[i]));
        e[i].Show();    
    }
    obj.close();
    
    int id,r;
    
    cout<<"\n ------------Enter employee id to search------------"<<endl;
    cin>>id;
    
    r=search(e,id);
    if(r!=-1)
    {
    	cout<<"\n Employee found..!"<<endl;
	    e[r].Show();    	
	}
    	
    else
    	cout<<"\n Employee not found..!"<<endl;
    	
    return 0;
}
