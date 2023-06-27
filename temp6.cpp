//Problem of max chapter Templates

#include<iostream>

using namespace std;

template <class T>

int max(T x, T y)
{
	return (x>y ? x : y);
}

int main()
{
	cout<<"\n "<<max(3,4)<<endl;
	
	return 0;
}
