// Program on STL - (Standard Template Library)

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<" "<<v[i]<<" ";
		//cout<<v.at(i)<<" ";
	cout<<"\n";
}

int main()
{
	vector<int> v;
	
	cout<<"\n Initial Size : "<<v.size()<<endl;
	
	int x;
	cout<<"\n ------------------ Enter five integers -------------------"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	cout<<"\n Size after adding 5 values : "<<v.size()<<endl;
	
	cout<<"\n --------------------- Current integer vector ---------------------- "<<endl;
	display(v);
	
	v.push_back(6.6);
	
	cout<<"\n Size after pushing 6.6 : "<<v.size()<<endl;
	
	cout<<"\n --------------------- Current integer vector ---------------------- "<<endl;
	display(v);
	
	vector<int> :: iterator itr = v.begin();
	itr=itr+3;
	v.insert(itr, 2, 9);     //(start pointer, total no. of values to be added, value)
	
	cout<<"\n Size after inserting two 9's at 4th and 5th position and 3rd and 4th index : "<<v.size()<<endl;
	
	cout<<"\n --------------------- Current integer vector ---------------------- "<<endl;
	display(v);
	
	v.erase(v.begin()+3, v.begin()+5);
	
	cout<<"\n Size after removing 4th and 5th position and 3rd and 4th index element : "<<v.size()<<endl;
	
	cout<<"\n --------------------- Current integer vector ---------------------- "<<endl;
	display(v);
		
	return 0;
}
