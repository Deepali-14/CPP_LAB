//Program on manipulating strings

#include<iostream>

#include<string>

using namespace std;

int main()
{
	string s("One two three four five");
	
	cout<<"\n--------------------------- STRING ---------------------------\n"<<endl;
	for(int i=0; i<s.length(); i++)
		cout<<s.at(i);
	cout<<endl;
	
	cout<<"\n--------------------------- AGAIN STRING ---------------------------\n"<<endl;
	for(int i=0; i<s.size(); i++)
		cout<<s[i];
	cout<<endl;
		
	int x1=s.find(" two");
	cout<<endl<<x1<<endl;
	
	int x2=s.find_first_of("two");
	cout<<x2<<endl;
	
	int x3=s.find_last_of("t");
	cout<<x3<<endl;
	
	int x4=s.find_first_of("t");
	cout<<x4<<endl;
	
	cout<<s.substr(x3,7);   //(start position, total to be extracted)
	cout<<endl;
	
	string s1("AYBC"), s2("AXYZ");
	
	int a=s1.compare(0,1,s2,0,1);  //0 equal , 1 inequal
	int b=s1.compare(1,3,s2,1,3);
	
	cout<<"\n SIZE OF S1 = "<<s1.size()<<endl;
	
	cout<<"\n a = "<<a<<endl;
	
	cout<<"\n b = "<<b<<endl;
	
	cout<<"\n--------------------------- BEFORE SWAP ---------------------------\n";
	cout<<"\n s1 = "<<s1<<endl;
	cout<<"\n s2 = "<<s2<<endl;
	s1.swap(s2);
	cout<<"\n--------------------------- AFTER SWAP ---------------------------\n";
	cout<<"\n s1 = "<<s1<<endl;
	cout<<"\n s2 = "<<s2<<endl;
	
	s1="Road", s2="Read";
	string s3="Red";
	
	cout<<"\n "<<s2.compare(s2.size()-1, 1, s3, s3.size()-1, 1)<<endl;  //compare(start, end is exclusive, to compare to, its start, its end is also exclusive) 
	
	return 0;
}
