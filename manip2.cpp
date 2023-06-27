// Program of ios functions and manipulators

#include<iostream>

#include<iomanip>

using namespace std;

#define max 20

int main()
{
	char name[max];
	cout<<"\nEnter your full name :: "; //Here full name cannot be entered
	cin>>name;
	cout<<"\nName :: "<<name;
	
	cout<<"\nEnter your full name again :: ";  //Here last name is reflected from above
	cin.getline(name,max);
	cout<<"\nName :: "<<name;
	
	cout<<"\nEnter your full name again please :: ";  //Here full name can be entered
	cin.getline(name,max);
	cout<<"\nName :: "<<name;
	
	return 0;
}
