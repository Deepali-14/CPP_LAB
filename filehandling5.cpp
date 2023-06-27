// Program on file handling {reading and writing character by character}

#include<iostream>

#include<fstream>

#include<cstring>

using namespace std;

int main()
{
	char name[80];
	cout<<"\n Enter string : ";
	cin>>name;
	int n=strlen(name);
	
	fstream file;
	
	file.open("STRING.txt", ios::trunc);
	file.open("STRING.txt", ios::in | ios::out);
	
	for(int i=0; i<n; i++)
		file.put(name[i]);
	
	file.seekg(0);
	char ch;
	for(int i=0; i<n; i++)
	{
		file.get(ch);
		cout<<ch;
	}
	file.close();	
	
	return 0;
}
