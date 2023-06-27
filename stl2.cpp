// Program on STL - (Standard Template Library)

#include<iostream>

#include<list>

#include<cstdlib>     //for using rand() function

using namespace std;

void display(list <int> &lst)
{
	list<int> :: iterator p;
	
	for(p=lst.begin(); p!=lst.end(); ++p)
		cout<<" "<<*p<<", ";
	cout<<endl<<endl;
}

int main()
{
	list<int> list1;
	list<int> list2(5);    // Empty list of size 5

	for(int i=0; i<3; i++)	
		list1.push_back(rand()/100);
		
	list<int> :: iterator p;
	for(p=list2.begin(); p!=list2.end(); ++p)
		*p=rand()/100;
		
	cout<<"\n ---------------------- LIST 1 ------------------------"<<endl;
	display(list1);
	cout<<"\n ---------------------- LIST 2 ------------------------"<<endl;
	display(list2);
	
	list1.push_front(100);
	list1.push_back(200);
	
	list2.pop_front();
	
	cout<<"\n ---------------------- AFTER PUSH AT FRONT AND BACK LIST 1 ------------------------"<<endl;
	display(list1);
	cout<<"\n ---------------------- AFTER POP FROM FRONT LIST 2 ------------------------"<<endl;
	display(list2);
	
	list<int> listA, listB;
	listA=list1;
	listB=list2;
	
	list1.merge(list2);
	
	cout<<"\n ---------------------- MERGED LIST 1 WITH LIST 2 ------------------------"<<endl;
	display(list1);
	
	listA.sort();
	listB.sort();
	
	cout<<"\n ---------------------- SORTED LIST A ------------------------"<<endl;
	display(listA);
	cout<<"\n ---------------------- SORTED LIST B ------------------------"<<endl;
	display(listB);   //This is a function we made ourself hence need to pass parameter else if built in no need
	
	listA.merge(listB);
	
	cout<<"\n ---------------------- MERGED SORTED LIST A WITH B ------------------------"<<endl;
	display(listA);
	
	listA.reverse();
	
	cout<<"\n ---------------------- REVERSED LIST A ------------------------"<<endl;
	display(listA);
	cout<<"\n Finally size : "<<listA.size()<<endl;
	
	return 0;
}
