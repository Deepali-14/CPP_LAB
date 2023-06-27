#include<iostream>

using namespace std;

void TOH(int d, char tower1, char tower2, char tower3)
{
	if(d==1)
	{
		cout<<"\n Shift disk "<<d<<" from tower "<<tower1<<" to "<<tower2<<endl;
		return;
	}
	
	TOH(d-1,tower1,tower3,tower2);
	
	cout<<"\n Shift disk "<<d<<" from tower "<<tower1<<" to "<<tower2<<endl;
	
	TOH(d-1,tower3,tower2,tower1);
	
}

int main()
{
	int disk;
	
	cout<<"\n Enter no. of disks : ";
	cin>>disk;
	
	if(disk<1)
		cout<<"\n There are no disks to shift"<<endl;
	else
		cout<<"\n There are "<<disk<<" disks in the tower 1 to be shifted to tower 2 via tower 3"<<endl;
		
	TOH(disk,'1','2','3');
	
	cout<<"\n "<<disk<<" disks from tower 1 are successfully shifted to tower 2 via tower 3"<<endl;
	
	return 0;
}
