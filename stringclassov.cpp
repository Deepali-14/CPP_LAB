//WOOP over string class to overload + and ~ operators

#include<iostream>

#include<cstring>

using namespace std;

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
		
		String(const char c[])
		{
			l=strlen(c);
			p=new char[l+1];
			strcpy(p,c);
		}
		
		void show()
		{
			cout<<"\n String : "<<p<<"\n Length : "<<l<<endl;
		}
		
		friend String operator +(String a, String b)
		{
			String temp;
			
			temp.l=strlen(a.p)+strlen(b.p);
			temp.p=new char[temp.l+1];
			strcpy(temp.p,a.p);
			strcat(temp.p,b.p);
			
			return temp;
		}
		
//		friend void operator ~(String &a)
//		{
//			strrev(a.p);
//		}

		void operator ~()
		{
			strrev(p);
		}
};

int main()
{
	String a("Deepali"),b(" Singh"),c;
	
	a.show();
	b.show();
	
	c=a+b;
	
	c.show();
	
	~c;
	
	c.show();

	return 0;
}
