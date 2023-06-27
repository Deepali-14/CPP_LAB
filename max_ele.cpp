//Program on finding maximum element

#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main()
{
	int a=14, b=45, c=2, d=100;
	
//	int max_element=max(a,(max(b,max(c,d))));

	int max_element;

	max_element=max({a,b,c,d});
	
	cout<<"\n Maximum element = "<<max_element<<endl;
	
	return 0;
}
