#include<iostream>

using namespace std;

void read(int [][100],int,int);

void display(int [][100],int,int);

int main()
{
	int a[100][100];
	int m,n;
	
	cout<<"\n Enter size of matrix : ";
	cin>>m>>n;
	
	read(a,m,n);
	
	cout<<m<<"*"<<n<<"matrix : "<<endl;
	
	display(a,m,n);
	
	return 0;
}

void read(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}

void display(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
