#include <iostream>
using namespace std;

int main() {
	
	int a[10];
	int n;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	int count=0;
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
		count++;
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			cout<<a[i]<<" "<<a[j]<<" ";
			cout<<endl;
			count++;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			for(int k=j+1; k<n; k++)
			{
				cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" ";
				count++;
				cout<<endl;
			}
		}
	}
	
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
	count=++count;
	cout<<count;
	
	return 0;
}

