// If sum of pairs in an array equals given sum return true else false

#include<iostream>

#include<vector>

using namespace std;

int sum_check(vector<int> a, int i, int s) 
{
	int k,s2;
	
	cout<<"\n Size = "<<a.size()<<endl;
	
	if(i<a.size()-1)
	{
		k=i;
		
		s2=a[i]+a[++k];
		cout<<"\n Sum : "<<s2<<endl;
		if(s2==s)
			return 1;
			
				
		else 
			return 0;
	}

}

int main()
{
	vector<int> a;
	int n,s;
	
	cout<<"\n Enter size of vector : ";
	cin>>n;
	cout<<"\n Enter given sum : ";
	cin>>s;
	
	int x;
	
	cout<<"\n ---------------------------------- Enter vector ---------------------------------- "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"\n Enter value to insert : ";
		cin>>x;
		a.push_back(x);
	}
		
	cout<<"\n ---------------------------------- Entered vector ---------------------------------- "<<endl;
	cout<<"\n ";
	for(int i=0; i<n; i++)
		cout<<a.at(i)<<" ";
			
	cout<<endl;
	
	int b;
	
	for(int i=0; i<n-1; i++)
	{
		b=sum_check(a,i,s);
		if(b==1)
			cout<<"\n "<<i<<"->>>"<<"True"<<endl;
		else
			cout<<"\n "<<i<<"->>>"<<"False"<<endl;
	}
	
	return 0;
}
