//Program on person data

#include<iostream>

using namespace std;

class Person
{
	char name[50];
	int age;
	
	public:
		void getdata(void);
		void display(void);
};

void Person :: getdata(void)
{
	cout<<"Enter name : ";
	cin>>name;
	
	cout<<"Enter age : ";
	cin>>age;
}
void Person :: display(void)
{
	cout<<"Name : ";
	cout<<name<<endl;
	
	cout<<"Age : ";
	cout<<age<<endl;
}

int main()
{
	Person p;
	
	p.getdata();
	
	p.display();
	
	return 0;
}
