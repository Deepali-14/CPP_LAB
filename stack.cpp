//Program to check brace validity using stack in cpp stl

#include<iostream>

#include<cstring>

#include<stack>

using namespace std;

int main()
{
	int tc;
	
	cout<<"\n Enter number of test cases : ";
	cin>>tc;
	
	int i=0;
	while(tc-->0)
	{
		stack<char>st;
		
		string s;
		cout<<"\n Enter string "<<++i<<" : ";
		cin>>s;
		
		bool rem=true;
		int n=s.size();
		
		for(int i=0; i<n; i++)
		{
			if(s[i]=='(')
				st.push(s[i]);
				
			else
			{
				if(st.empty())
				{
					cout<<"\n NOT VALID"<<endl;
					rem=false;
					break;
				}
				
				else
				{
					st.pop();
				}
			}
		}
		
		if(rem==true)
		{
			if(st.empty())
				cout<<"\n VALID"<<endl;
			
			else
				cout<<"\n NOT VALID"<<endl;
		}
	}
	return 0;
}
