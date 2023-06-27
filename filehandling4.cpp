// Program on file handling {i/o operations on binary files}

#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;

const char * filename = "BINARY";

int main()
{
	float h[]={1.2, 4.6, 6.7, 8.9};
	int n=sizeof(h)/sizeof(float);
	
	ofstream outfile;
	outfile.open(filename);
	outfile.write((char *) &h, sizeof(h));
	outfile.close();
	
	for(int i=0; i<n; i++)
	h[i]=0.0;
	
	ifstream infile;
	infile.open(filename);
	infile.read((char *) &h, sizeof(h));
	
	cout<<"\n Displaying float array with 4 elements : ";
	for(int i=0; i<n; i++)
	{
		cout.setf(ios::showpoint);
		cout<<setw(10)<<setprecision(3)<<h[i];
	}
	infile.close();
	
	return 0;
}
