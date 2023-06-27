//Program on account class

#include<iostream>

#include<iomanip>

using namespace std;

class Account
{
	int accno;
	char accname[100];
	float accamt;
	
	public:
		
		void getdata();
		
		void showdata();
	
	    int searchdata(int);
	    
	    void deposit(int);
	    
	    void withdraw(int);
	    
	    int balance(int tempamt)
	    {
	    	if(tempamt > accamt)
	    		return 0;
	    	
	    	else 
	    		return 1;
		}
};

void Account :: getdata()
{
	static int i=1;
	
	cout<<"\n Reading Record "<<i<<":\n";
	
	cout<<"\n Enter account number : ";
	cin>>accno;
	
	cout<<"\n Enter account holder's name : ";
	fflush(stdin);
	gets(accname);
	
	accamt=0;
	
	i++;
}

void Account :: showdata()
{
	static int i=1;
	
	cout<<"\n Showing Record "<<i<<":\n";
	
	cout<<"\n Account Number \t\t Account Holder's Name \t\t Balance Amount \n";
	cout<<" "<<accno<<setw(40)<<accname<<setw(30)<<"Rs."<<accamt<<endl;
	
	i++;
}

int Account :: searchdata(int tempaccno)
{
	if(accno==tempaccno)
		return 1;
	
	else
		return 0;
}

void Account :: deposit(int tempamt)
{
	accamt=accamt+tempamt;
	
	cout<<"\n Your current updated account balance in "<<accno<<" : Rs."<<accamt<<endl;
}

void Account :: withdraw(int tempamt)
{
	if(tempamt > accamt)
	{
		cout<<"\n Insuficient balance \n";
		return;
	}
	
	accamt=accamt-tempamt;
	
	cout<<"\n Your current updated account balance in "<<accno<<" : Rs."<<accamt<<endl;
}

int main()
{
	Account A[100];
	int ch,n;
	
	cout<<"\n Enter number of records : ";
	cin>>n;
	
	do
	{
		cout<<"\n ***** BANK ACCOUNT RECORD ***** \n";
		
		cout<<"\n 1. Read \n 2. Display \n 3. Search \n 4. Deposit \n 5. Withdraw \n 6. Money Transfer \n 0. Exit \n";
		
		cout<<"\n Enter choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				for(int i=0; i<n; i++)
					A[i].getdata();
				break;
			
			case 2:
				for(int i=0; i<n; i++)
					A[i].showdata();
				break;
				
			case 3:
				int tempacc,k;
				
				cout<<"\n Enter account number of account you want to search for : ";
				cin>>tempacc;
				
				for(int i=0; i<n; i++)
				{
					k=A[i].searchdata(tempacc);
					
					if(k==1)
					{
						A[i].showdata();
						break;
					}
				}
				
				if(k!=1)
					cout<<"\n Account not found \n";
				break;
				
			case 4:
				cout<<"\n Enter account number of account you want to search for : ";
				cin>>tempacc;
				
				for(int i=0; i<n; i++)
				{
					k=A[i].searchdata(tempacc);
					
					if(k==1)
					{
						int tempamt;
						
						cout<<"\n Enter amount to be deposited : ";
						cin>>tempamt;
						
						A[i].deposit(tempamt);
						break;
					}
				}
				
				if(k!=1)
					cout<<"\n Account not found \n";
				break;
				
			case 5:
				cout<<"\n Enter account number of account you want to search for : ";
				cin>>tempacc;
				
				for(int i=0; i<n; i++)
				{
					k=A[i].searchdata(tempacc);
					
					if(k==1)
					{
						int tempamt;
						
						cout<<"\n Enter amount to be deposited : ";
						cin>>tempamt;
						
						A[i].withdraw(tempamt);
						break;
					}
				}
				
				if(k!=1)
					cout<<"\n Account not found \n";
				break;
			
			case 6:
				cout<<"\n Enter account number of account you want to withdraw from : ";
				cin>>tempacc;
				
				for(int i=0; i<n; i++)
				{
					k=A[i].searchdata(tempacc);
					
					if(k==1)
					{
						int tempamt,l;
						
						cout<<"\n Enter account number of account you want to deposit in : ";
						cin>>tempacc;
						
						for(int j=0; j<n; j++)
				        {
							l=A[j].searchdata(tempacc);
							
						    if(l==1)
						    {
						    	cout<<"\n Enter amount to be deposited : Rs.";
								cin>>tempamt;
									
						    	if(A[i].balance(tempamt))
						    		A[j].deposit(tempamt);
						    		
								break;
							}
				    	}
				    	
				    	if(l!=1)
				    	{
				    		cout<<"\n Account not found \n";
							break;
						}
						
						A[i].withdraw(tempamt);
						break;
					}
				}
				
				if(k!=1)
					cout<<"\n Account not found \n";
				break;
				
			case 0:
				cout<<"\n Exiting...Good Bye...! \n";
				break;
				
			default:
				cout<<"\n Wrong choice \n";
		}
	}while(ch!=0);
	
	return 0;
}
