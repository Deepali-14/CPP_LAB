//Program on page no. 253

#include<iostream>

#include<cstring>

using namespace std;

int main()
{
	char str[]="\n c++ is better than c";
	int len=strlen(str);
	
	char *substr=new char[len];
	
	cout<<"\n The main string is : "<<str<<endl;
	
	cout<<"\n Enter substring to be searched : ";
	cin>>substr;
	
	int k,l=strlen(substr),flag=0;
	
	for(int i=0; i<len; i++)
	{
		k=i;
		
		for(int j=0; j<l; j++)
		{
			if(str[k]==substr[j])
			{
				if(j==l-1)
				{
					cout<<"\n The substring is present in the string"<<endl;
					flag=1;
					exit(0);
				}
				k++;
			}
		
			else
				break;
		}
	}
	
	if(flag==0)
		cout<<"\n The substring is not present in the string"<<endl;
		
	return 0;
}
