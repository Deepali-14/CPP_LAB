#include<iostream>

using namespace std;

class B
{
	int a;
	
	public:
		int b;
		void set_ab();
		int get_a(void);
		void show_a(void);
};

class D : public B
{
	int c;
	
	public:
		void mul(void);
		void display(void);
};

void B :: set_ab(void)
{
	a=5;
	b=10;
}

int B :: get_a()
{
	return a;
}

void B :: show_a()
{
	cout<<"\n a = "<<a<<endl;
}

void D :: mul()
{
	c=b*get_a();
}

void D :: display()
{
	cout<<"\n a = "<<get_a()<<endl;
	cout<<"\n b = "<<b<<endl;
	cout<<"\n c = "<<c<<"\n";
}

int main()
{
	D d;
	
	d.set_ab();
	d.mul();
	d.show_a();
	d.display();
	d.b=20;
	d.mul();
	d.display();
	
	return 0;
}
