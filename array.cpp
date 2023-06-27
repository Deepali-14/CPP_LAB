//Program on array functions

#include<iostream>

using namespace std;

class Array
{
	int a[50];
	int n;
	
	public:
		
		void getdata(void);

		void display(void);
		
		void sum(void);
		
		void reverse(void);
		
		void lsearch(int);
	    
		int bsearch(int);
	    
		void sort(void);
		
		void dupremoval(void);
};

void Array :: getdata()
{
	cout<<" Enter size of array : ";
	cin>>n;
	
	cout<<" Enter array : \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
	
void Array :: display()
{
	
	cout<<" Array : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	
	cout<<endl;
} 

void Array :: sum()
{
	int sum=0;
	
	for(int i=0;i<n;i++)
	sum=sum+a[i];
	
	cout<<" Sum of array elements is "<<sum<<endl;
}

void Array :: reverse()
{
	int temp;
	
	for(int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}

void Array :: lsearch(int x)
{
	int c=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
	    {
	    	cout<<x<<" found at location "<<i<<endl;
	    	c++;
		}
	}
	
	if(c==0)
	cout<<x<<" not found"<<endl;
	
	else
	cout<<x<<" found "<<c<<" times "<<endl;
}

int Array :: bsearch(int x)
{
	int s=1,e=n-1,m;
	
	while(s<=e)
	{
		m=(s+e)/2;
		
		if(x<a[m])
		e=m-1;
		
		else if(x>a[m])
		s=m+1;
		
		else
		return m;
	}
	
	return -999;
}

void Array :: sort()
{
	int min,temp;
	
	for(int i=0;i<n-1;i++)
	{
		min=i;
		
		for(int j=i+1;j<n;j++)
		if(a[j]<a[min])
		min=j;
		
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

void Array ::  dupremoval()
{
	int temp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			temp=j;
			
			if(a[temp]==a[i])
			{
				for(int k=temp;k<n;k++)
					a[k]=a[k+1];
				n--;
				j--;
			}
		}
	}
}

int main()
{
	Array A;
	int ch,x,y;
	
	A.getdata();
	
	do
	{
		cout<<"\n 1. INPUT ARRAY \n 2. OUTPUT ARRAY \n 3. SUM OF ARRAY ELEMENTS \n 4. REVERSE ARRAY ";
		cout<<"\n 5. LINEAR SEARCH \n 6. BINARY SEARCH \n 7. SORTING \n 8. DUPLICATE REMOVAL \n 0. EXIT \n";
		
		cout<<" Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				A.getdata();
				break;
			
			case 2:
				A.display();
				break;
			
			case 3:
				A.sum();
				break;
			
			case 4:
				A.reverse();
				break;
			
			case 5:
				cout<<" Enter element to search : ";
				cin>>x;
				
				A.lsearch(x);
				break;
			
			case 6:
				cout<<" Enter element to search : ";
				cin>>x;
				
				y=A.bsearch(x);
				
				if(y!=-999)
				cout<<x<<" found at location "<<y<<endl;
				
				else
				cout<<x<<" not found"<<endl;
				break;
			
			case 7:
				A.sort();
				break;
				
			case 8:
				A.dupremoval();
				break;
			
			case 0:
				cout<<"\n Exiting :) \n";
				break;
			
			default:
				cout<<"\n Wrong choice entered \n";
		}
	}while(ch!=0);
	
	return 0;
}
