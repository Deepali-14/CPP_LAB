#include <iostream>
using namespace std;

int main() {
	int a[20];
	
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int count=0;
	for(int i=0; i<n; i++)
	{
		int k=i;
		if(i==0 && a[0]==1)
		{
			if(a[++k]==0)
			count++;
		}
		
		if(a[i]==1 && a[--k]==0 && a[k++]==0)
		count++;
	}
	
	cout<<count;
	
	return 0;
}

