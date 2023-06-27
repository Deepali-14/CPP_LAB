//Program on string class

#include<iostream>

#include<cstring>

using namespace std;

class String
{
	char *name;
	int length;
	
	public :
		String()
		{
			length=0;
			name=new char[length+1];
			strcpy(name, "\0");
		}
		
		String(const char *s)
		{
			length=strlen(s);
			name=new char[length+1];
			strcpy(name, s);
		}
		
		void display()
		{
			cout<<endl<<" Name : "<<name<<endl;
		}
		
		void join(String &a, String &b);
};

void String :: join(String &a, String &b)
{
	length=a.length+b.length;
	name=new char[length+1];
	strcpy(name, a.name);
	strcat(name, b.name);
}

int main()
{
	const char *first="Deepali ";
	
	String name1(first), name2("Singh "), name3("Rajput"), s1, s2; //Default and Parameterized constructor
	
	name1.display();
	
	name2.display();
	
	name3.display();
	
	cout<<"\n After concatenating name1 and name2"<<endl;
	s1.join(name1, name2);
	s1.display();
	
	cout<<"\n After concatenating object s1 and name3"<<endl;
	s2.join(s1, name3);
	s2.display();
	
	cout<<"\n After copying content of s2 object in s3 using copy constructor"<<endl;
	String s3=s2; //Copy constructor
	s3.display();
	
	return 0;
}
