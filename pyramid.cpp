//Program on pyramid 
//    1
//   12
//  123
// 1234
//12345
    
#include<iostream>

using namespace std;

class Number
{
	int n;
	
	public:
		void getdata(void);
		void pyramid(void);
};

void Number :: getdata(void)
{
	cout<<"Enter number of rows in pyramid : ";
	cin>>n;
}

void Number :: pyramid(void)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		cout<<" ";
		
		for(int k=1;k<=i;k++)
		cout<<k;
		
		cout<<endl;
	}
}

int main()
{
	Number num;
	
	num.getdata();
	
	num.pyramid();
	
	return 0;
}
