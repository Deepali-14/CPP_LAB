#include<iostream>

#include<iomanip>

using namespace std;

class sample
{
	private:
		int data1;
		char data2;
		
	public:
		void set(int i,char c)
		{
			data1=i;
			data2=c;
		}
		void display(void)
		{
			int basic=250;
			double total=980;
			
			cout<<"\n Data1 = "<<setw(5)<<data1;
			cout<<"\n Data2 = "<<data2<<endl;
			cout<<setw(10)<<"Basic"<<setw(10)<<basic<<endl;
			cout<<setw(10)<<"Total"<<setw(10)<<total<<endl;
            cout<<setw(10)<<"Total"<<fixed<<setprecision(2)<<setw(10)<<total<<endl;
		}
};

int main()
{
	sample *s_ptr;
	
	try
	{
		cout<<"\n In try";
	 	s_ptr=new sample;
	}
	
	catch (bad_alloc ba)
	{
		cout<<"\n Bad allocation occurred...the program will terminate now...";
		return 1;
	}
	
	s_ptr->set(25,'A');
	
	s_ptr->display();
	
	delete s_ptr;
	
	return 1;
}
