//Program on page no. 252

#include<iostream>

#include<cstring>

using namespace std;

int main()
{
	const char *ptr[10]={"books", "television", "sports", "computer", "laptop", "books"};
	
	char str[25];
	
	cout<<"\n Enter string : ";
	cin>>str;
	
	int flag=0;
	for(int i=0; i<5; i++)
	{
		if(!strcmp(str,*ptr[i]))
		{
			cout<<"\n String found"<<endl;
			flag=1;
		}
	}
	
	if(flag==0)
		cout<<"\n String not found"<<endl;
		
	return 0;
}
