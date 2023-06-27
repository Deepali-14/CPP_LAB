//WOOP to overload unary (++(F)), -(M)) and binary (*(F)), !=(M)) over integer class

#include<iostream>

using namespace std;

class Integer
{
	int x;
		public:
			Integer()
			{
				x=0;
			}
			
			Integer(int a)
			{
				x=a;
			}
			
			void show()
			{
				cout<<"\n x : "<<x<<endl;
			}
			
			friend void operator ++(Integer &a)
			{
				++a.x;
			}
			
			void operator -()
			{
				x=-x;
			}
			
			friend Integer operator *(Integer a, Integer b)
			{
				Integer temp;
				
				temp.x=a.x*b.x;
				
				return temp;
			}
			
			int operator !=(Integer a)
			{
				if(x!=a.x)
					return 1;
					
				else
					return 0;
			}
};

int main()
{
	Integer a(100),b(4),c;
	
	a.show();
	b.show();
	c.show();
	
	++a;
	a.show();
	
	-b;
	b.show();
	
	c=a*b;
	c.show();
	
	if(a!=b)
		cout<<"\n Objects are not equal"<<endl;
		
	else
		cout<<"\n Objects are equal"<<endl;
	
	return 0;
}
