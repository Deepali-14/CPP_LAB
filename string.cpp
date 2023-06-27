//Program on string functions 

#include<iostream>

#include<cstdio>

#include<cstring>

#include<ctype.h>

using namespace std;

class String
{
	char s[100];
	
	public:
		void input(void);
		
		void output(void);
		
		void vccount(void);
		
		void luchange(void);
		
		void clength(void);
		
		void cchartype(void);
		
		void sreverse(void);
		
		void charsearch(char);
		
		void charsr(char, char);
		
		void wordsearch(char []);
};

void String :: input()
{
	cout<<" Enter String : ";
	gets(s);
}

void String :: output()
{
	cout<<" String : \n";
	cout<<" ";
	puts(s);
}

void String :: vccount()
{
	char c;
	int vc=0,cc=0;
	
	for(int i=0;s[i]!='\0';i++)
	{
		c=s[i];
	
	    if(isalpha(c))
		{
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
			vc++;
		
		    else
			cc++;
		}
	}
	
	cout<<" Vowel = "<<vc<<"\n Consonant = "<<cc<<endl;
}

void String :: luchange()
{
	char c;
	
	for(int i=0;s[i]!='\0';i++)
	{
		c=s[i];
		
		if(isalpha(c))
		{
			if(isupper(c))
			s[i]=tolower(c);
			
			else
			s[i]=toupper(c);
		}
	}
}

void String :: clength()
{
	int c;
	
	for(int i=0;s[i]!='\0';i++)
    	c++; 
	
	cout<<" Length of String : "<<c<<endl;
}

void String :: cchartype()
{
	int a=0,n=0,space=0,sp=0;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(isalpha(s[i]))
		a++;
		
		else if(isdigit(s[i]))
		n++;
		
		else if(s[i]==' ')
		space++;
		
		else
		sp++;
	}
	
	cout<<" Alphabets = "<<a<<"\n Digits = "<<n<<endl;
	cout<<" Spaces = "<<space<<"\n Special symbols = "<<sp<<endl;
}

void String :: sreverse()
{
	char c;
    int l=strlen(s);
	
	for(int i=0;i<=l/2;i++)
	{
		c=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=c;
	}
}

void String :: charsearch(char c)
{
	int cn=0; 
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		{
			cn++;
			cout<<" "<<c<<" found at location "<<i<<endl;
		}
	}
	if(cn!=0)
	cout<<" "<<c<<" is found "<<cn<<" times"<<endl;
	
	else
	cout<<" "<<c<<" not found"<<endl;
}

void String :: charsr(char c, char d)
{
	for(int i=0;s[i]!='\0';i++)
	    if(s[i]==c)
		    s[i]=d;
}

void String :: wordsearch(char sub[])
{
    int j=0,cn=0;
    char ch;
      
    for(int i=0;i<strlen(s);i++)
    {
     	ch=s[i];
     	if(ch==sub[j])
     	{
     		j++;
			if(j==strlen(sub))
			{
				cn++;
				j=0;
			}	
		}
		else
		j=0;
	}
	cout<<" Substring found " << cn <<" times in the string"<<endl;
}

int main()
{
	char sub[100];
	char c,d;
	int ch;
	String o;
	
	o.input();
	do
	{
		cout<<"\n 1. INPUT \n 2. OUTPUT \n 3. COUNT VOWELS AND CONSONANTS \n 4. CASE CHANGE";
		cout<<"\n 5. COUNT LENGTH OF STRING \n 6. COUNT ALPHABETS, DIGITS, SPACES AND SPECIAL SYMBOLS";
		cout<<"\n 7. REVERSE STRING \n 8. CHARACTER SEARCH \n 9. CHARACTER SEARCH FOLLOWED BY REPLACE";
		cout<<"\n 10. SUBSTRING SEARCH \n 0. EXIT \n";
		
		cout<<" Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				o.input();
				break;
				
			case 2:
				o.output();
				break;
				
		    case 3:
		    	o.vccount();
		    	break;
		    	
		    case 4:
		    	o.luchange();
		    	break;
		    	
		    case 5:
		    	o.clength();	
		    	break;
		    	
		    case 6:
		    	o.cchartype();
		    	break;
		    	
		    case 7:
		    	o.sreverse();
		    	break;
		    	
		    case 8:
		    	cout<<" Read character to search : ";
                cin>>c;
	            
				o.charsearch(c);
		    	break;
		    	
		    case 9:
		    	cout<<" Read character to search for : ";
                cin>>c;
               
			    cout<<" Read character to replace with : ";
                cin>>d;
	            
				o.charsr(c,d);
		    	break;
		    	
		    case 10:
		    	cout<<" Read string to search : ";
	            fflush(stdin);
                gets(sub);
	            
				o.wordsearch(sub);
		    	break;
		    	
		    case 0:
		    	cout<<"Exiting :)";
		    	break;
		    	
		    default:
		    	cout<<"\n Wrong choice entered";
		}
	}while(ch!=0);
	
	return 0;
}
