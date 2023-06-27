//Program on binary check and if yes then display its ones complement

#include<iostream>

#include<string>

using namespace std;

class binary
{
	string s;
	
	public :
		void read(void)
		{
			cout<<"\n Enter a binary number : ";
			cin>>s;
		}
		
		void chk_bin(void)
		{
			for(int i=0; i<s.length(); i++)
			{
				if(s.at(i)!='0' && s.at(i)!='1')
				{
					cout<<"\n Incorrect binary number format.. the program will quit ..!";
					
					exit(0);
				}
			}
		}
		
		void ones(void)
		{
			chk_bin();
			
			for(int i=0; i<s.length(); i++)
			{
				if(s.at(i)=='0')
					s.at(i)='1';
					
				else
				 	s.at(i)='0';
			}
		}
		
		void displayones(void)
		{
			ones();
		
			cout<<"\n The 1's complement of entered binary number is "<<s<<endl;
		}
};

int main()
{
	binary b;
	
	b.read();
	
	b.displayones();
	
	return 0;
}
