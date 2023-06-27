#include<iostream>

using namespace std;

class B
{
	protected:
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
};

class D : private B
{
	int c;
	public:
		void mul()
		{
			get_ab();
			c=b*a;
		}
		
		void display()
		{
			show_ab();
			cout<<"\n Value of c after multiplication of "<<b<<" and "<<a<<" = "<<c<<endl;
		}
};


int main()
{
	D d;
	
	d.mul();
	d.display();
	
	return 0;
}
