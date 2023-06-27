#include<bits/stdc++.h>

#include<vector>

#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"\n Enter size of vector : ";
	cin>>n;
	
	vector<int>v;
		
	v.resize(n);
	
	cout<<"\n Enter elements in vector : \n";
	for(int i=0; i<n; i++)
		cin>>v[i];

	for(auto it=v.begin(); it!=v.end(); it++ )
		cout<<*it<<" ";
	cout<<"\n";
	
	return 0;
}
