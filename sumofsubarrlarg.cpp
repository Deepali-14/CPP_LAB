#include <iostream>
using namespace std;

void subarr(int a[], int n)
{
    int sum=0,sum1=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum=0;
            for(int k=i; k<=j; k++)
            {
                cout<<a[k]<<"\t";
                sum=sum+a[k];
            }
            cout<<"sum="<<sum<<endl;
            if(sum>sum1)
            	sum1=sum;
        }
        cout<<endl;
    }
    cout<<"Largest subarray sum="<<sum1<<endl;
}

int main() 
{
	int a[]={1,2,3,4};

    int n=sizeof(a)/sizeof(int);

    subarr(a,n);

	return 0;
}
