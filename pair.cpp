//Program on pairs 

#include<bits/stdc++.h>

#include<iostream>

#include<utility>

using namespace std;

int main()
{
	pair<int,int>p1=make_pair(3,4);
	
	pair<int,int>p2=make_pair(1,5);
	
	cout<<"\n After swapping"<<endl;
	cout<<"\n P1 VALUES : "<<endl;
	cout<<p1.first<<endl;
	cout<<p1.second<<endl;
	
	cout<<"\n P2 VALUES : "<<endl;
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	
	swap(p1,p2);
	
	cout<<"\n After swapping"<<endl;
	cout<<"\n P1 VALUES : "<<endl;
	cout<<p1.first<<endl;
	cout<<p1.second<<endl;
	
	cout<<"\n P2 VALUES : "<<endl;
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	
	int a,b;
	
	tie(a,b)=p1;
	
	cout<<"\n a = "<<a<<endl;
	
	cout<<"\n b = "<<b<<endl;

	pair<int, pair<int,int> >p;
	
	p.first=5;
	
	p.second.first=2;
	
	p.second.second=3;
	
	cout<<"\n ***** P VALUES : ***** "<<endl;
	cout<<p.first<<endl;
	cout<<p.second.first<<endl;
	cout<<p.second.second<<endl;
	
	return 0;
}
