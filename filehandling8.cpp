// Program on file handling {Random access}
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
	INVENTORY item;
	
	fstream inoutfile;
	
	inoutfile.open("STOCK.DAT", ios::trunc | ios::binary);
	
	inoutfile.open("STOCK.DAT", ios::ate | ios::in | ios::out | ios::binary);
	
	inoutfile.seekg(0, ios::beg);
	
	cout<<"\n ---------------------- CURRENT CONTENTS OF STOCK ---------------------------"<<endl;
	
	while(inoutfile.read((char *) & item, sizeof(item)))
		item.putdata();
	
	inoutfile.clear();
	
	cout<<"\n ---------------------- ADD ONE MORE ITEM ---------------------------"<<endl;
	
	item.getdata();
	char ch;
	cin.get(ch);
	inoutfile.write((char *) & item, sizeof(item));
	
	inoutfile.seekg(0);
	
	cout<<"\n ---------------------- CONTENTS OF APPENDED FILE ---------------------------"<<endl;
	
	while(inoutfile.read((char *) & item, sizeof(item)))
		item.putdata();
		
	cout<<"\n ---------------------- NUMBER OF OBJECTS IN THE FILE ---------------------------"<<endl;
	
	int last=inoutfile.tellg();
	int n=last/sizeof(item);
	
	cout<<"\n Number of objects = "<<n<<endl;
	cout<<"\n Total bytes in the file = "<<last<<endl;
	
	cout<<"\n ---------------------- MODIFY THE DETAILS OF AN ITEM ---------------------------"<<endl;
	
	cout<<"\n Enter object number to be updated : ";
	int object;
	cin>>object;
	
	cin.get(ch);
	
	int location=(object-1) * sizeof(item);
	
	if(inoutfile.eof())
	inoutfile.clear();
	
	inoutfile.seekp(location);
	cout<<"\n Enter new values of the object : "<<endl;
	item.getdata();
	cin.get(ch);
	
	inoutfile.write((char *) & item, sizeof(item))<<flush;
	
	cout<<"\n ---------------------- SHOW UPDATED FILE ---------------------------"<<endl;
	
	inoutfile.seekg(0);
	
	while(inoutfile.read((char *) & item, sizeof(item)))
	item.putdata();
	
	inoutfile.close();
	
	return 0;
}
