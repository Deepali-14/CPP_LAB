// Program of ios functions and manipulators

#include<iostream>

#include<iomanip>

#include<cstring>

using namespace std;

int main()
{
	const char * string1 = "C++ ";
	const char * string2 = "Programming";
	
	int m=strlen(string1);
	int n=strlen(string2);
	
	for(int i=1; i<n; i++)
	{
		cout.write(string2, i);
		cout<<"\n";
	}
	
	for(int i=n; i>0; i--)
	{
		cout.write(string2, i);
		cout<<"\n";
	}
	
	// Concatenating strings
	cout.write(string1, m).write(string2, n);
	cout<<"\n";
	
	// If crossed the boundary, excessed characters won't be printed
	cout.write(string2, 5);
	cout<<"\n";
	cout.write(string1, 10);
	
	return 0;
}
