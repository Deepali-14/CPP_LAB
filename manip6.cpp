// Program of ios functions and manipulators

#include<iostream>

#include<iomanip>

using namespace std;

ostream & currency(ostream & out)
{
	out<<"Rs. ";
	return out;
}

ostream & form(ostream & out)
{
	out.setf(ios::left, ios::adjustfield);
	out.precision(4);
	out<<setw(7)<<setfill('&');  //setfill used in banks
	return out;
}

int main()
{
	cout<<"\n "<<currency<<form<<89.55;
	
	return 0;
}
