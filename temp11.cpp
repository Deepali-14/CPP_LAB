//Program on page no. 365 chapter Templates

#include<iostream>

using namespace std;

template <class T>

//template <class T, int size>
//class array
//{
//	T a[size];
//	
//	
//}
//invoked as array<int, 10> a1;
//array<float, 5> a2;
//Here the template supplies the size of the array as an argument.
//Thus the size is known to the compiler at compile time only

class vector
{
	T *v;
 	int size;
 	
 	public:
 		vector(int m);
 		vector(T *a);
 		
 		void display()
 		{
 			for(int i=0; i<size; i++)
 				cout<<v[i]<<" ";
 			cout<<endl;
		}
};

template <class T>

vector<T> :: vector(int m)
{
	v=new T[size=m];
	
	for(int i=0; i<size; i++)
		v[i]=0;
}

template <class T>

vector<T> :: vector(T *a)
{
	for(int i=0; i<size; i++)
		v[i]=a[i];
}

int main()
{
	int a[]={1,2,3,4,5};
	float b[]={1.1,2.2,3.3,4.4,5.5};
	vector <int> v1(5);
	v1=a;
	vector <float> v2(5);
	v2=b;
	
	cout<<"\n Display integer array elements : ";
	v1.display();
	
	cout<<"\n Display float array elements : ";
	v2.display();
	
	return 0;
}
