// Program on file handling {i/o operations on binary files}

#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
using namespace std;

class INVENTORY
{
	char name[20];
	int code;
	float cost;
	public:
		void getdata()
		{
			cout<<"\n Enter name : ";
			fflush(stdin);
			cin>>name;
			
			cout<<"\n Enter code : ";
			fflush(stdin);
			cin>>code;
			
			cout<<"\n Enter cost : ";
			cin>>cost;
		}
		
		void putdata()
		{
			cout<<setiosflags(ios::right)<<setw(10)<<name<<setw(10)<<setiosflags(ios::right)<<code<<setprecision(3)<<setw(10)<<"Rs. "<<cost<<endl;
		}		
};
int main()
{
	INVENTORY item[3];
	
	fstream file;
	
	file.open("ITEM", ios::in | ios::out);
	
	cout<<"\n ------------------------ENTER DETAILS OF 3 ITEMS----------------------------"<<endl;
	for(int i=0; i<3; i++)
	{
		item[i].getdata();
		file.write((char *)&item[i], sizeof(item[i]));
	}
	
	cout<<"\n ------------------------DETAILS----------------------------"<<endl;
	//cout<<setiosflags(ios::left)<<setw(10)<<"NAME"<<setw(10)<<setiosflags(ios::right)<<"CODE"<<setprecision(3)<<setw(10)<<"COST"<<endl;
	for(int i=0; i<3; i++)
	{
		file.read((char *)&item[i], sizeof(item[i]));
		item[i].putdata();
	}
	
	file.close();
		
	return 0;
}
