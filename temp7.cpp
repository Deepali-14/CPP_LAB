//Program page no. 360 chapter Templates

#include<iostream>

using namespace std;

template <class T>

void bubble(T a[], int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=n-1; i<j; j--)
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
}

template <class X>

void swap(X &a, X &b)
{
	X temp=a;
	a=b;
	b=temp;
}

template <class T>

void display(T a[],int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
	int x[]={1,5,3,4,2};
	float y[]={1.1,5.5,3.3,4.4,2.2};
	
	bubble(x,5);
	bubble(y,5);
	
	cout<<"\n Sorted array x : ";
	display(x,5);
	
	cout<<"\n Sorted array y : ";
	display(y,5);
	return 0;
}
