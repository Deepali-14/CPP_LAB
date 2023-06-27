#include<bits/stdc++.h>

#include<iostream>

#include<stack>

using namespace std;

int main()
{
	string s;
	
	cout<<"\n Enter string : ";
	getline(cin,s);
	
	int n=s.size();
	cout<<"\n Size of string : "<<n<<endl;
	
	stack<string>st;
	
	for(int i=0; i<n; i++)
	{
		if(s[i]=='+' || s[i]=='-'|| s[i]=='*'|| s[i]=='/')
		{
			string temp;
			temp='('+st.top()+s[i];
			st.pop();
			temp+=st.top()+')';
			st.pop();
		}
		
		else
		st.push(string(1,s[i]));
	}
	
	return 0;
}
