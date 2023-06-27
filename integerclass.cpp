//WOOP over integer class for overloading pre--, post-- and logical && over the class

#include<iostream>

using namespace std;

class Integer
{
	int a;
	
	public:
		Integer()
		{
			a=0;
		}
		
		Integer(int x)
		{
			a=x;
		}
		
		Integer operator --()
		{
			Integer Temp;
			
			Temp.a=--a;
			
			return Temp;
		}
		
		Integer operator --(int)
		{
			Integer Temp;
			
			Temp.a=a;
			
			a--;
			
			return Temp;
		}
		
//		friend int operator &&(Integer x, Integer y)
//		{
//			if(x.a==y.a)
//				return 1;
//				
//			else
//				return 0;
//		}
		
		void show()
		{
			cout<<"\n Value of a : "<<a<<endl;
		}
};

int main()
{
	Integer x(5),y;
	
	y=x--;
	
	y.show();
	x.show();

	y=--x;
	
	y.show();
	x.show();
	
	return 0;
}
