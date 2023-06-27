//Program on area of circle, rectangle and cube

#include<iostream>

using namespace std;

class Shape
{
	public :
		
		float area(float);
		
		int area(int, int);
		
		int area(int);
};

float Shape :: area(float r)
{
	return 3.14*r*r;
}

int Shape :: area(int l, int b)
{
	return l*b;
}

int Shape :: area(int e)
{
	return 6*e*e;
}

int main()
{
	Shape s;
	int ch,l,b,e;
	float r;
	
	do
	{
		cout<<"\n ***** AREAS OF DIFFERENT SHAPES *****\n";
		cout<<"\n 1. Area of circle \n 2. Area of rectangle \n 3. Area of cube \n 0. Exit";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1: 
				cout<<"\n Enter value of radius of circle : ";
				cin>>r;
				cout<<"\n Area of circle : "<<s.area(r)<<endl;
				break;
				
			case 2:
				cout<<"\n Enter value of length and breadth of rectangle : ";
				cin>>l>>b;
			    cout<<"\n Area of rectangle : "<<s.area(l,b)<<endl;
				break;
				
			case 3:
				cout<<"\n Enter value of edge of cube : ";
				cin>>e;
				cout<<"\n Area of cube : "<<s.area(e)<<endl;
				break;
				
			case 0: 
				cout<<"\n We are exiting :)\n";
				break;
				
			default:
				cout<<"\n Wrong choice entered..\n";
		}
	}while(ch!=0);
	
	return 0;
}
