// Program of ios functions and manipulators

#include<iostream>

#include<iomanip>

#include<cmath>

using namespace std;

int main()
{
	float a=10.35;

	cout<<setw(20)<<setfill('$')<<a<<endl;
	
	cout<<setprecision(10)<<sqrt(6)<<endl;  //one less printed
	
	cout<<setiosflags(ios::scientific)<<setprecision(2)<<sqrt(2)<<"\n"<<resetiosflags(ios::scientific)<<sqrt(3)<<endl;
	//precision even remains active for sqrt(3)
	cout<<setw(10)<<setprecision(3)<<setiosflags(ios::left)<<sqrt(2)<<endl;
	cout<<setw(10)<<setprecision(4)<<setiosflags(ios::right)<<sqrt(2)<<endl;
	cout<<sqrt(5)<<endl;   //right and left do not retain
	
	return 0;
}
