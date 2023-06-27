#include<iostream>

using namespace std;

class invent2;

class invent1
{
	int code;
	int items;
	float price;
	
	public:
		invent1(int a, int b, float c)
		{
			code=a;
			items=b;
			price=c;
		}
		
		void putdata()
		{
			cout<<"\n Code: "<<code<<"\n";
			cout<<"\n Items: "<<items<<"\n";
			cout<<"\n Value: "<<price<<"\n";
		}
		
		int getcode()
		{
			return code;
		}
		
		int getitems()
		{
			return items;
		}
		
		float getprice()
		{
			return price;
		}
		
//		operator invent2()
//		{
//			invent2 temp;
//			
//			temp.code=code;
//			temp.value=price*items;
//			
//			return temp;
//		}
		
		operator float()
		{
			return items*price;
		}
};

class invent2
{
	int code;
	float value;
	
	public:
		invent2()
		{
			code=0;
			value=0;
		}
		
		invent2(int x, float y)
		{
			code=x;
			value=y;
		}
		
		void putdata()
		{
			cout<<"\n Code: "<<code<<"\n";
			cout<<"\n Value: "<<value<<"\n\n";
		}
		
		invent2(invent1 p)
		{
			code=p.getcode();
			value=p.getitems() * p.getprice();
		}		
};

int main()
{
	invent1 s1(100,5,140.0);
	
	invent2 d1;
	
	float total_value;
	
	total_value=s1;
	
	d1=s1;
	
	cout<<"\n Product details - invent1 type"<<"\n";
	s1.putdata();
	
	cout<<"\n Stock value"<<"\n";
	cout<<"\n Value="<<total_value<<"\n\n";
	
	cout<<" Poduct details - invent2 type"<<"\n";
	d1.putdata();
	
	return 0;
}
