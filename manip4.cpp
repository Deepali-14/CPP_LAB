// Program of ios functions and manipulators

#include<iostream>

#include<iomanip>

#include<cstring>

#include<cmath>

using namespace std;

int main()
{
	float a;
	
	cout<<endl<<"----------------------1-------------------------"<<endl;
	cout.width(15); //do not retain on next input, has to be initialised again
	cout.precision(9);  //includes 1 less, it retains even on next input
	cout.fill('*'); //do not retain on next input, has to be initialised again
	cout<<sqrt(2)<<endl;
	
	cout<<endl<<"----------------------2-------------------------"<<endl;
	int b=10;
	cout.width(15);
	cout.setf(ios::right, ios::adjustfield);
	cout<<b<<endl;
	cout.width(15);
	cout.setf(ios::left, ios::adjustfield);
	cout<<b<<endl;
	
	cout<<endl<<"----------------------3-------------------------"<<endl;
	float c=10.45;
	cout.width(15);
	cout.precision(2);
	cout.setf(ios::internal, ios::adjustfield);
	cout.setf(ios::scientific, ios::floatfield);
	//cout.setf(ios::fixed, ios::floatfield);
	cout<<c<<endl;
	
	cout<<endl<<"----------------------4-------------------------"<<endl;
	int d=92;
	cout.setf(ios::hex, ios::basefield);
	cout<<"\nHexadecimal equivalent is "<<d<<endl;
	cout.setf(ios::oct, ios::basefield);
	cout<<"\nOctal equivalent is "<<d<<endl;
	cout.setf(ios::dec, ios::basefield);
	cout<<"\nDecimal equivalent is "<<d<<endl;
	
	cout<<endl<<"----------------------5-------------------------"<<endl;
	float e=9;
	cout.width(20);
	cout.precision(3);
	cout.fill('#');
	cout.setf(ios::showpos);
	cout.setf(ios::showpoint);
	cout<<e<<endl;
	cout.unsetf(ios::showpos);
	cout.unsetf(ios::showpoint);
	cout.unsetf(ios::scientific);
	cout.width(20); //fill also retains like precision and scientific
	//cout.precision(4);
	cout.fill('*');
	float f=10.45;
	cout<<f<<endl;
	
	cout<<endl<<"----------------------6-------------------------"<<endl;
	char g='c';
	cout.setf(ios::showbase);
	cout<<g<<endl;
	
	return 0;
}
