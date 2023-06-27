#include <iostream>
using namespace std;

int main() {
	int a[20];
	int t,n;
	
	cin>>t;
	cin>>n;
		
	for(int i=0; i<t; i++)
	{
		
		int count=0;
		
		for(int j=0; j<(2*n); j++)
			cin>>a[j];
		
		for(int j=0; j<(2*n); j++)
		{
			int k=j;
			
			if((a[j]+a[++k])%2==0)
			{
				count++;
			}
			
			j++;
		}
		
		if(count==n)
			cout<<"YES"<<endl;
				
		else
			cout<<"NO"<<endl;
				
	}

	return 0;
}

