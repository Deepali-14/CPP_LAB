//Program on sorting array and search element using binary bool check search

#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"\n Enter n : ";
	cin>>n;
	
	int a[n];
	
	cout<<"\n Enter "<<n<<" elements : "<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	sort(a,a+n);
	
	cout<<"\n Sorted array : "<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<"\t";
	
	int x;
	cout<<"\n Enter x : ";
	cin>>x;
	
	while(x--)
	{
		int element;
		cout<<"\n Enter element : ";
		cin>>element;
		
		bool check=binary_search(a,a+n,element);
		
		if(check==true)
			cout<<"\n Element found"<<endl;
			
		else
			cout<<"\n Element not found"<<endl;
	}
	
	return 0;
}
