#include<iostream>

using namespace std;

class B
{
	protected:
		int m;
		
	public:
		void get()
		{
			cout<<"\n Enter value of m : ";
			cin>>m;
		}	
};

class C
{
	protected:
		int n;
		
	public:
		void getn()
		{
			cout<<"\n Enter value of n : ";
			cin>>n;
		}	
};

class D : public B, public C
{
	protected:
		int a;
		
	public:
		void display()
		{
			cout<<"\n m = "<<m<<endl;
			cout<<"\n n = "<<n<<endl;
			cout<<"\n m*n = "<<m*n<<endl;
		}
};

int main()
{
	D d;
	
	d.get();
	
	d.getn();
	
	d.display();
	
	return 0;
}
