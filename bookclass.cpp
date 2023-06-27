//Program on Book Class

#include<iostream>

#include<iomanip>

#include<cstring>

using namespace std;

class Book
{
	int bid, bprice;
	char bname[100], bauthor[100];
	
	public:
		void getdata();
		
		void showdata();
		
		int searchdata(char [], int);
		
		void searchdata(Book *,char [], int, int);
		
		void sortdata(Book *, int);
};

void Book :: getdata()
{
	static int i=1;
	
	cout<<"\n Enter Book record "<<i<<" :\n";
	
	cout<<"\n Enter Book Id : ";
	cin>>bid;
	
	cout<<"\n Enter Book Name : ";
	fflush(stdin);
	gets(bname);
	
	cout<<"\n Enter Book's Author Name : ";
	gets(bauthor);
	
	cout<<"\n Enter Book's price : ";
	cin>>bprice;
	
	i++;
}

void Book :: showdata()
{	
	cout<<"\n Book Id \t Book Name \t\t Author Name \t\t Price \n";
	cout<<" "<<bid<<setw(25)<<bname<<setw(25)<<bauthor<<setw(20)<<bprice<<endl;
}

int Book :: searchdata(char b[], int id)
{
    if (strcmp(bname,b)==0 && bid==id)
        return 1;
    
	else
        return 0;
}

void Book :: searchdata(Book *Z, char b[], int id, int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		if(strcmp(Z[i].bname,b)==0 && Z[i].bid==id)
		{
			cout<<"\n Book found \n";
			Z[i].showdata();
			break;
		}
	}
	
	if(i==n)
	cout<<"\n Book not found \n";
}

void Book :: sortdata(Book *Z, int n)
{
	int max;
	Book temp;
	
	for(int i=0; i<n-1; i++)
	{
		max=i;
		for(int j=i+1; j<n; j++)
	    {
	    	if(Z[i].bprice<Z[j].bprice)
	    	max=j;
		}
		
		if(max!=i)
		{
			temp=Z[i];
			Z[i]=Z[max];
			Z[max]=temp;
		}
	}
}


int main()
{
	Book B[100];
	char b[100];
	int ch,n,r,id;
	
	cout<<"\n Enter total no. of book records : ";
	cin>>n;
	
	do
	{
		cout<<"\n ***** BOOKS RECORD *****\n";
		
		cout<<"\n 1. Read \n 2. Display \n 3. Search \n 4. Sort \n 0. Exit \n";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				
				for(int i=0; i<n; i++)
				B[i].getdata();
				break;
				
			case 2:
				
				cout<<"\n Books data : \n";
				for(int i=0; i<n; i++)
				B[i].showdata();
				break;
				
			case 3:
				
				cout<<"\n Enter Book Name and Book Id you want to search for : ";
				fflush(stdin);
				gets(b);
				cin>>id;
				
				cout<<"\n Approach 1 : \n";
				
				for(int i=0; i<n; i++)
        		{
        			r=B[i].searchdata(b,id);
        			
        			if(r==1)
        			{
        				cout<<"\n Book found \n";
        				B[i].showdata();
       					break;
        			}
        		}
        		
        		if(r!=1)
        			cout<<"\n Book not found \n";
				
				cout<<"\n Approach 2 : \n";
				B[0].searchdata(B,b,id,n);
				break;
				
		    case 4:
		    	
		    	cout<<"\n Sorting books data in descending order based on price \n";
		    	B[0].sortdata(B,n);
		    	break;
				
			case 0:
				
				cout<<"\n Exiting...Bye :) \n";
				break;
				
			default:
				
				cout<<"\n Wrong choice \n";	
		}
		
	}while(ch!=0);
	
	return 0;
}
