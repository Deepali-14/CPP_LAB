#include<iostream>

using namespace std;

class B
{
	int a;
	public:
		int b;
		void get_ab()
		{
			cout<<"\n Enter value of a and b : ";
			cin>>a>>b;
		}
		
		void show_ab()
		{
			cout<<"\n a = "<<a<<"\t"<<"b = "<<b<<endl;
		}
		
		int get_a()
		{
			return a;
		}	
};

class D : private B
{
	int c;
	public:
		void mul()
		{
			get_ab();
			c=b*get_a();
		}
		
		void display()
		{
			show_ab();
			cout<<"\n Value of c after multiplication of "<<b<<" and "<<get_a()<<" = "<<c<<endl;
		}
};


int main()
{
	D d;
	
	d.mul();
	d.display();
	
	return 0;
}
