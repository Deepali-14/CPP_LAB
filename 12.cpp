#include<iostream>

using namespace std;

inline int large(int p,int q)
{
	return ((p>q) ? p : q);
}

int main()
{
	cout<<"\n Larger of 100 and 40 is : "<<large(100,40)<<endl;
	
	return 0;
}
