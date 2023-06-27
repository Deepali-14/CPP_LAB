#include<iostream>

using namespace std;

void read(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}

void display(int a[][100],int m,int n)
{
	cout<<"\n "<<m<<"*"<<n<<" matrix : "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<" "<<a[i][j]<<" ";
			
		cout<<"\n";
	}
}

void read(int a[][100],int m,long int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}

void display(int a[][100],int m,long int n)
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
	int m,n;
	
	void read(int a[][100],int m,int n=3);
	
	void display(int a[][100],int m,int n=3);
	
	cout<<"\n Enter size of matrix : ";
	cin>>m>>n;
	
	cout<<"\n After default argument \n";
	
	cout<<"\n Enter elements : \n";
	read(a,m);
	
	display(a,m);
	
	cout<<"\n After function overloading \n";
	
	cout<<"\n Enter elements : \n";
	read(a,m,n);
	
	display(a,m,n);
	
	return 0;
}
