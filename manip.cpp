// Program of ios functions and manipulators

#include<iostream>

#include<iomanip>

using namespace std;

int main()
{
	char a;
	int count=0;
	
	cout<<"\nEnter input :: ";
	cin.get(a);
	
	while(a != '\n')
	{
		cout.put(a);
		count++;
		cin.get(a);
	}
	cout<<"\nLength of entered input : "<<count<<endl;
	
	return 0;
}
