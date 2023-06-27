//Program on page no. 248 chapter Pointers, Virtual functions and Polymorphism

#include<iostream>

using namespace std;

int main()
{
	int num[]={56,75,22,18,90};
	int *ptr;
	int i;
	
	cout<<"\n The array values are : ";
	for(i=0; i<5; i++)
		cout<<num[i]<<" ";
	cout<<endl;
	
	ptr=num;
	
	cout<<"\n Value of ptr : "<<*ptr<<endl;
	
	ptr++;
	
	cout<<"\n Value of ptr++ : "<<*ptr<<endl;
	
	ptr--;
	
	cout<<"\n Value of ptr-- : "<<*ptr<<endl;
	
	++ptr;
	
	cout<<"\n Value of ++ptr : "<<*ptr<<endl;
	
	--ptr;
	
	cout<<"\n Value of --ptr : "<<*ptr<<endl;
		
	ptr+=2;
	
	cout<<"\n Value of ptr+=2; : "<<*ptr<<endl;
		
	ptr+=3;
	
	cout<<"\n Value of ptr+=3; : "<<*ptr<<endl;
		
	ptr-=2;
	
	cout<<"\n Value of ptr-=2; : "<<*ptr<<endl;
		
	ptr-=3;
	
	cout<<"\n Value of ptr-=3; : "<<*ptr<<endl;
	
	return 0;
}
