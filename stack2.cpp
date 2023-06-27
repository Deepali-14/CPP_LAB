//Program to check brace validity in cpp stl another method

#include<iostream>

#include<cstring>

using namespace std;

int main()
{
	int tc;
	
	cout<<"\n Enter number of test cases : ";
	cin>>tc;
	
	int i=0, ans=0;
	bool check=true;
	
	while(tc-->0)
	{
		string s;
		
		cout<<"\n Enter string "<<++i<<" : ";
		cin>>s;
		
		int n=s.size();
		
		for(int i=0; i<n; i++)
		{
			if(s[i]=='(')
				ans=ans+1;
				
			else 
			{
				ans=ans-1;
//				if(ans<0)
//				{
//					cout<<"\n NOT VALID"<<endl;
//					check=false;
//					break;
//				}	
			}
		}
		
		if(check==true)
		{
			if(ans==0)
				cout<<"\n VALID"<<endl;
				
			else
				cout<<"\n NOT VALID"<<endl;
		}
	}
	return 0;
}
