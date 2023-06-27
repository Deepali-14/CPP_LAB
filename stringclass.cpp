//Program on string class to reverse a string

#include<iostream>

#include<cstring>

using namespace std;

#define max 20

class String
{
 	char *p;
 	int l;
 	
 	public:
 		String()
 		{
 			l=0;
 			p=new char[l+1];
 			strcpy(p,"\0");
		}
		
		String(const char *z)
		{
			l=strlen(z);
			p=new char[l+1];
			strcpy(p,z);
		}
		
		void showdata()
		{
			puts(p);
		}
		
		friend String reverse(String s2)
		{
			String Temp;
			
			Temp.p=new char[s2.l+1];
			strcpy(Temp.p,strrev(s2.p));
			
			return Temp;
		}
 };
 
 int main()
 {
 	String s2,s3;
 	char s[max];
 	
 	cout<<"\n Enter string : ";
 	gets(s);
 	
 	s2=String(s);
 	
 	cout<<"\n Original string : ";
 	s2.showdata();
 	
 	cout<<"\n Reversed string : ";
 	s3=reverse(s2);
 	s3.showdata();
 	
 	return 0;
 }
