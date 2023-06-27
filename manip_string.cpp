//Program on manipulating strings

#include<iostream>

#include<string>

using namespace std;

int main()
{
	string s1("Deepali"), s2(" Singh");
	
	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
	
	string s3=s1+s2;
	cout<<"s3="<<s3<<endl;
	
	string s4(s2);
	cout<<"s4="<<s4<<endl;
	
	string s5=s3;
	cout<<"s5="<<s5<<endl;
	
	return 0;
}
