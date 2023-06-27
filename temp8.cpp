#include<iostream>

using namespace std;

#define arr_max 5

template <class T>

T find_min(T arr[])
{
	T min=arr[0];
	
	for(int i=1; i<arr_max; i++)
		if(min>arr[i])
			min=arr[i];
			
	return min;
}

int main()
{
	int a[arr_max]={1,2,3,4,5};
	
	float b[arr_max]={1.2,-0.9,4.5,5.55,7.8};
	
	char c[arr_max]={'a','C','1','/','_'};
	
	cout<<"\n Miimum value in integer array = "<<find_min(a)<<endl;
	
	cout<<"\n Miimum value in float array = "<<find_min(b)<<endl;
	
	cout<<"\n Miimum value in character array = "<<find_min(c)<<endl;
	
	return 0;
}
