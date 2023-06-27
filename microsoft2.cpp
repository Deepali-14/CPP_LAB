// To check if a string is valid or not
//Given a string str, the task is to check if the string is a valid identifier or not. In order to qualify as a valid identifier, the string must satisfy the following conditions:  
//
//It must start with either underscore(_) or any of the characters from the ranges [‘a’, ‘z’] and [‘A’, ‘Z’].
//There must not be any white space in the string.
//And, all the subsequent characters after the first character must not consist of any special characters like $, #, % etc.

#include<iostream>

#include<bits/stdc++.h>

using namespace std;

bool isvalid(string s)
{
	if( ! ( s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z') ) )
		return false;
		
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]==' ')
			return false;
	}
	
	for(int i=1; i<s.length(); i++)
	{
		int c=s[i];
		
		if(c<=47 && c>=32 || c<=64 && c>=58 || c<=96 && c>=91 || c<=126 && c>=123)
			return false;
	}
	
	return true;
}

int main()
{
	string s="deephh__";
	
	if(isvalid(s))
		cout<<"\n Valid"<<endl;
		
	else
		cout<<"\n Invalid"<<endl;
		
	return 0;
}
