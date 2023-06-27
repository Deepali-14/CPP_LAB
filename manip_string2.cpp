//Program on manipulating strings

#include<iostream>

#include<string>

using namespace std;

int main()
{
	string s1("Deepali"), s2(" Singh"), s=("abc");
	
	cout<<" s1 = "<<s1<<endl;
	cout<<" s2 = "<<s2<<endl;
	
	string s3=s1+s2;
	cout<<" s3 = "<<s3<<endl;
	
	string s4(s2);
	cout<<" s4 = "<<s4<<endl;
	
	string s5=s3;
	cout<<" s5 = "<<s5<<endl;
	
	s5.insert(3,s);  //(position to insert, value to insert)
	cout<<" s5 = "<<s5<<endl;
	
	s5.erase(3,7);   //(position to erase, total to be erased)
	cout<<" s5 = "<<s5<<endl;
	
	s5.replace(2,7,s2); //(start position, total to be replaced, value to replace with)
	cout<<" s5 = "<<s5<<endl;
	
	s1=("ABC"), s2=("XYZ");
	
	if(s1==s2)
		cout<<"\n s1 and s2 are equal";
		
	else
		cout<<"\n s1 and s2 are not equal";
		
	if(s1>s2)
		cout<<"\n s1 is greater than s2";
		
	else
		cout<<"\n s1 is less than s2";
		
	int x=s2.compare(s3);
	
	if(x==0)
		cout<<"\n s2 and s3 are equal";
		
	else if(x>0)
		cout<<"\n s2 is greater than s3";
		
	else
		cout<<"\n s2 is less than s3";
		
	cout<<"--------------------- FOR s5 -------------------------"<<endl;
		
	cout<<"\n SIZE = "<<s5.size()<<endl;
	cout<<"\n LENGTH = "<<s5.length()<<endl;
	cout<<"\n CAPACITY = "<<s5.capacity()<<endl;
	cout<<"\n MAXIMUM SIZE = "<<s5.max_size()<<endl;
	
	string f;
	cout<<"\n EMPTY = "<<s5.empty()<<endl;	
	cout<<"\n EMPTY = "<<f.empty()<<endl;  // 1 if true and is empty and 0 if false and not empty
	
	return 0;
}
