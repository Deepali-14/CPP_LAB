//Program page no. 357 chapter Templates

#include<iostream>

using namespace std;

template<class T1=int, class T2=int>

class Test
{
	T1 a;
	T2 b;
	
	public:
		Test(T1 x, T2 y)
		{
			a=x;
			b=y;
		}
		
			
		void show()
		{
			cout<<"\n a = "<<a<<" and b = "<<b<<endl;
		}
};

int main()
{
	Test<int, float>test1(1,2.33);
	cout<<"\n Instantiating the class template as test1 with one int and one float data types "<<endl;
	test1.show();
	
	Test<float, float>test2(1.22,2.33);
	cout<<"\n Instantiating the class template as test2 with both float data types "<<endl;
	test2.show();
	
	Test<>test3('A',2.33);
	cout<<"\n Instantiating the class template as test3 with default data types "<<endl;
	test3.show();
	
	Test<char>test4('A',2.33);
	cout<<"\n Instantiating the class template as test4 with one default data type "<<endl;
	test4.show();
	
	return 0;
}
