#include<iostream>

using namespace std;

int main()
{
	int *arr;
	int size;
	
	cout<<"\n Enter the size of the integer array : ";
	cin>>size;
	
	cout<<"\n Creating an array of size "<<size<<".."<<endl;
	arr=new int(size);
	
	if(!arr)
	cout<<"\n Allocation failed..!"<<endl;
	
	else
	cout<<"\n Dynamic allocation of memory for array arr is successful..!"<<endl;
	
	delete []arr;
	
	return 0;
}
