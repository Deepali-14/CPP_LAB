//Program on abstract class

#include<iostream>

using namespace std;

class Shape
{
	protected:
		int a;
	public:
		void get()
		{
			cout<<"\n Enter dimension : ";
			cin>>a;
		}
		virtual void area()=0;
};

class Circle : public Shape
{
	public:
		void area()
		{
			cout<<"\n Area of circe = "<<3.14*a*a<<endl;
		}
};

class Square : public Shape
{
	public:
	void area()
		{
			cout<<"\n Area of square = "<<a*a<<endl;
		}
};

int main()
{
	Circle c;
	Square s;
	
	cout<<"\n ****** CIRCLE ****** "<<endl;
	c.get();
	c.area();
	
	cout<<"\n ****** SQUARE ****** "<<endl;
	s.get();
	s.area();
	
	return 0;
}
