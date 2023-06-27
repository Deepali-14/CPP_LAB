//WOOP over complex class for overloading >>, <<, pre ++, post ++ , pre --, + and () operator on the class

#include<iostream>

using namespace std;

class Complex
{
	float r,i;
	
	public:
//		Complex ()
//		{
//			r=i=0.0f;
//		}
//		
//		Complex (float a, float b)
//		{
//			r=a;
//			i=b;
//		}

		friend void operator >>(istream &din, Complex &a)
		{
			cout<<"\n Enter real part : ";
			din>>a.r;
			
			cout<<"\n Enter imaginary part : ";
			din>>a.i;
		}
		
		friend void operator <<(ostream &dout, Complex &a)
		{
			dout<<a.r<<" + i "<<a.i<<endl;
		}
		
		Complex operator ++()
		{
			Complex temp;
			
			temp.r=++r;
			temp.i=++i;
			
			return temp;
		}
		
		Complex operator --()
		{
			Complex temp;
			
			temp.r=--r;
			temp.i=--i;
			
			return temp;
		}
		
		Complex operator ++(int)
		{
			Complex temp;
			
			temp.r=r;
			r++;
			
			temp.i=i;
			i++; 
			
			return temp;
		}
		
		Complex operator ()(Complex x, Complex y)
		{
			Complex temp;
			
			temp.r=x.r+y.r;
			temp.i=x.i+y.i;
			
			return temp;
		}
		
//		void show()
//		{
//			cout<<r<<" + i "<<i<<endl;
//		}
		
		Complex operator +(Complex x)
		{
			Complex temp;
			
			temp.r=r+x.r;
			temp.i=i+x.i;
			
			return temp;
		}
		
		friend Complex operator +(Complex x, float z)
		{
			Complex temp;
			
			temp.r=x.r+z;
			temp.i=x.i+z;
			
			return temp;
		}
		
		friend Complex operator +(float z, Complex x)
		{
			Complex temp;
			
			temp.r=z+x.r;
			temp.i=z+x.i;
			
			return temp;
		}
		
		void operator =(Complex a)
		{
			r=a.r;
			i=a.i;
		}
};

int main()
{
	Complex a,b,c,d;
	
	cout<<"\n Reading complex number 1 : "<<endl;
	cin>>a;
	
	cout<<"\n Reading complex number 2 : "<<endl;
	cin>>b;
	
	cout<<"\n Complex number 1 : ";
	cout<<a;
	
	cout<<"\n Complex number 2 : ";
	cout<<b;
	
	cout<<"\n After pre decrementing complex number 1 : ";
	c=--a;
	cout<<c;
	
	cout<<"\n After pre decrementing complex number 2 : ";
	c=--b;
	cout<<c;
	
	cout<<"\n After pre incrementing complex number 1 : ";
	c=++a;
	cout<<c;
	
	cout<<"\n After pre incrementing complex number 2 : ";
	c=++b;
	cout<<c;
	
	cout<<"\n After post incrementing complex number 1 : ";
	c=a++;
	cout<<c;
	
	cout<<"\n After post incrementing complex number 2 : ";
	c=b++;
	cout<<c;
	
	cout<<"\n Complex number 1 : ";
	cout<<a;
	
	cout<<"\n Complex number 2 : ";
	cout<<b;
	
	cout<<"\n After adding complex number 1 and complex number 2 : ";
	c=c(a,b);
	cout<<c;
	
	cout<<"\n Sum 1 : ";
	c=a+b;
	cout<<c;
	
	cout<<"\n Sum 2 : ";
	c=a+8.4;
	cout<<c;
		
	cout<<"\n Sum 3 : ";
	c=4.8+b;
	cout<<c;
	
	cout<<"\n Object d : ";
	d=b;
	cout<<d;
	
	return 0;
}
