//Progra of vector from E Balagurusamy

#include<iostream>

#include<vector>

using namespace std;

void display(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

int main()
{
	vector<int> v;
	
	cout<<"\n Initial size : "<<v.size()<<endl;
	
	int x;
	
	cout<<"\n Enter five integer values : ";
	for(int i=0; i<5; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	cout<<"\n Size after reading 5 values : "<<v.size()<<endl;
	
	cout<<"\n Displaying current elements : ";
	display(v);
	
	v.push_back(6.6);
	
	cout<<"\n Size after adding 6.6 to previous vector : "<<v.size()<<endl;
	
	cout<<"\n Current elements : ";
	display(v);
	
	vector<int> :: iterator itr = v.begin();
	itr=itr+3;
	v.insert(itr,1,9); //Here 1 is no. of occurrence of 1 i.e., v.insert(itr pointer, no. of occurrence, element to be inserted)
	
	cout<<"\n Size after adding 9 to previous vector once : "<<v.size()<<endl;
	
	cout<<"\n Displaying elements after insertion : ";
	display(v);
	
	v.erase(v.begin()+3, v.begin()+5);//This statement means 3 and 4 element will be deleted and 5 element will not be deleted
		
	cout<<"\n Size after deleting elements from previous vector : "<<v.size()<<endl;
	
	cout<<"\n Displaying elements after deletion : ";
	display(v);
	
	cout<<"\n END"<<endl;
	return 0;
}
