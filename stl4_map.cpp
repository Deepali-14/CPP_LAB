// Program on STL - (Standard Template Library)

#include<iostream>

#include<map>

#include<string>

using namespace std;

typedef map<string, int> phonemap;

int main()
{
	string name;
	int number;
	phonemap phone;
	
	cout<<"\n Enter three sets of name and number : ";
	for(int i=0; i<3; i++)
	{
		cin>>name;
		cin>>number;
		phone[name]=number;
	}
	
	phone["Jacob"]=4444;
	
	phone.insert(pair<string, int> ("Bose", 5555));
	
	cout<<"\n Size of map : "<<phone.size()<<endl;
	
	cout<<"---------------------------  MAP -----------------------------"<<endl;
	phonemap :: iterator p;
	
	for(p=phone.begin(); p!=phone.end(); p++)
	{
		cout<<"\n "<<(*p).first<<" "<<(*p).second<<endl;
	}
	
	cout<<endl;
	
	cout<<"\n Enter a name : ";
	cin>>name;
	number=phone[name];
	
	cout<<"\n Number (value) : "<<number<<" corresponding to key : "<<name<<endl;
	
	return 0;
}
