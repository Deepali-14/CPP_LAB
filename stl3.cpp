// Program on STL - (Standard Template Library)

#include<iostream>

#include<algorithm>

#include<functional>

using namespace std;

int main()
{
	int x[] = {10,50,30,20,90};
	int y[] = {70,90,60,80};
	
	sort(x,x+5,greater<int>());
	sort(y,y+4);
	
	cout<<"\n --------------------------- x ------------------------------"<<endl;
	for(int i=0; i<5; i++)
		cout<<" "<<x[i]<<" ";
	cout<<endl;
	
	cout<<"\n --------------------------- y ------------------------------"<<endl;
	for(int i=0; i<4; i++)
		cout<<" "<<y[i]<<" ";
	cout<<endl;
		
	int z[9];
	
	merge(x,x+5,y,y+4,z);
	
	cout<<"\n --------------------------- z ------------------------------"<<endl;
	for(int i=0; i<9; i++)
		cout<<" "<<z[i]<<" ";
	cout<<endl;
	
	return 0;
}
