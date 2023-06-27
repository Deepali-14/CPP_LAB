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

class D : public B
{
	int c;
	public:
		void mul()
		{
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
	
	d.get_ab();
	d.mul();
	d.display();
	
	return 0;
}
