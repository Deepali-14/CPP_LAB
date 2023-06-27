// Program on file handling {counting objects in a file}

#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
using namespace std;

class Employee
{
	char ename[20];
	int ecode;
	public:
		Employee()
		{
			
		}
		
		Employee(const char *name, int id)
		{
			strcpy(ename, name);
			ecode=id;
		}
};

int main()
{
	Employee e[4];
	
	e[0]=Employee("Amit", 1);
	e[1]=Employee("Arun", 2);
	e[2]=Employee("Ram", 3);
	e[3]=Employee("Raj", 4);
	
	fstream file;
	
	file.open("Employee.txt", ios::trunc);
	file.open("Employee.txt", ios::in | ios::out);
	
	for(int i=0; i<4; i++)
	file.write((char *)&e[i], sizeof(e[i]));
	
	file.seekg(0, ios::end);
	int end=file.tellg();
//	cout<<" "<<end<<endl;
//	cout<<" "<<sizeof(Employee)<<endl;
	
	cout<<"\n Total no. of employees in the list :: "<<end/sizeof(Employee)<<endl;
	file.close();
	
	return 0;
}
