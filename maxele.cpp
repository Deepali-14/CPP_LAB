//Program on finding maximum element from an array

#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"\n Enter size of array : ";
	cin>>n;
	
	int a[n];
	
	cout<<"\n Enter elements of array : "<<endl;
	
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"\n Elements of array : "<<endl;
	
	for(int i=0; i<n; i++)
		cout<<a[i]<<"\t";
		
	int max_element=-1;
		
	for(int i=0; i<n; i++)
//		if(a[i]>max_element)
//			max_element=a[i];
		max_element=max(a[i],max_element);
		
	int sum=0;
	
	sum=accumulate(a,a+n,sum);

	cout<<"\n Maximum element = "<<max_element<<endl;
	
	cout<<"\n Sum = "<<sum<<endl;
	
	reverse(a,a+n);
	
	cout<<"\n Elements of array : "<<endl;
	
	for(int i=0; i<n; i++)
		cout<<a[i]<<"\t";
		
	int x,c;
	
	cout<<"\n Enter element whose count you want to get : ";
	cin>>x;
	
	c=count(a,a+n,x);
	
	cout<<"\n Count of "<<x<<" = "<<c<<endl;
	
	int y;
	cout<<"\n Enter element to find : ";
	cin>>y;
		
	bool ls=find(a,a+n,y);
		
	if(ls==true)
		cout<<"\n Element found"<<endl;
			
	else
		cout<<"\n Element not found"<<endl;
	
	return 0;
}
