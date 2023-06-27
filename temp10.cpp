//Program on page no. 363 chapter Templates

#include<iostream>

using namespace std;

template <class T>

void display(T x)
{
	cout<<"\n Displaying overloaded template function 1 : "<<x<<endl;
}

template <class T, class T1>

void display(T x, T1 y)
{
	cout<<"\n Displaying overloaded template function 2 : "<<x<<" and "<<y<<endl;
}

void display(int x)
{
	cout<<"\n Explicit display : "<<x<<endl;
}

int main()
{
	display('C');
	
	display(100);
		
	display(100.33);
			
	display(3,55);
	
	display(3,'f');
	
	return 0;
}
