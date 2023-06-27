//Program page no. 356 chapter Templates

#include<iostream>

using namespace std;

template<class T1, class T2>

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
	Test<int, float>test1(1,22.3);
	cout<<"\n Instantiating the class template as test1 with one int and one float data types "<<endl;
	test1.show();
	
	Test<float, float>test2(1.66,22.3);
	cout<<"\n Instantiating the class template as test2 with both float data types "<<endl;
	test2.show();
	
	Test<int, int>test3(1,2);
	cout<<"\n Instantiating the class template as test3 with both int data types "<<endl;
	test3.show();
	
	Test<float, int>test4(1.66,2);
	cout<<"\n Instantiating the class template as test4 with one float and one int data types "<<endl;
	test4.show();
	
	Test<int, char>test5(1,'A');
	cout<<"\n Instantiating the class template as test5 with one int and one char data types "<<endl;
	test5.show();
	
	return 0;
}
