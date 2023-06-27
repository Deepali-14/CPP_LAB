//Program on page no. 362 chapter Templates

#include<iostream>

#include<cstring>

using namespace std;

template <class T1, class T2>

void display(T1 a, T2 b)
{
	cout<<"\n a = "<<a<<" and "<<" b = "<<b<<endl;
}

int main()
{
	cout<<"\n Calling template function with one int and one string type parameters"<<endl;
	display(1,"abc");
	
	cout<<"\n Calling template function with one float and one character type parameters"<<endl;
	display(2.3,'a');
	
	return 0;
}
