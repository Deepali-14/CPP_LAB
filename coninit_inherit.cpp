#include<iostream>

using namespace std;

class alpha
{
	int a;
	public:
		alpha(int i)
		{
			a=i;
			cout<<"\n alpha initialized..!"<<endl;
		}
		
		void show()
		{
			cout<<"\n a = "<<a<<endl;
		}
};

class beta
{
	float b,c;
	public:
		beta(float i,float j) : b(i), c(i+j)
		{
			cout<<"\n beta initialized..!"<<endl;
		}
		
		void show()
		{
			cout<<"\n b = "<<b<<" c = "<<c<<endl;
		}
};

class gamma : public beta, public alpha 
{
	int d,e;
	public:
		gamma(int i,int j,float k):beta(k,k),alpha(i*2),d(i)
		{
			e=j;
			cout<<"\n gamma initialized..!"<<endl;
		}
		
		void show()
		{
			cout<<"\n d = "<<d<<" e = "<<e<<endl;
		}
};

int main()
{
	gamma g(2,4,2.5);
	
	g.alpha::show();
	
	g.beta::show();
	
	g.gamma::show();
	
	return 0;
}
