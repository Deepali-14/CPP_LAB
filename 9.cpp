#include<iostream>

using namespace std;

int main()
{
	int i=56;
	float j=32.5;
    float *k=&j;
	
	cout<<"\n I="<<float(i)<<endl;
	cout<<"\n J="<<int(j)<<endl;
	cout<<"\n K="<<float(*k)<<endl;
	cout<<"\n K="<<(float)*k<<endl;
	
	return 0;
}
