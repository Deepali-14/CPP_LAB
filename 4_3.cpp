#include<iostream>

using namespace std;

void read(int a[][100],int n,int m=3)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}

void display(int a[][100],int n,int m=3)
{
	cout<<"\n "<<m<<"*"<<n<<" matrix : "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<" "<<a[i][j]<<" ";
			
		cout<<"\n";
	}
}

int main()
{
	int a[100][100];
	int n;
	
	cout<<"\n Enter size of matrix : ";
	cin>>n;
	
	cout<<"\n Enter elements : \n";
	read(a,n);
	
	display(a,n);
	
	return 0;
}
