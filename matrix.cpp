// Program on 2-D matrix functions

#include<iostream>

using namespace std;

class Matrix
{
    int M[5][5];
    int R,C;

    public:
        void Read();
        
        void Print();
        
        void Sumelement();
        
        void Sumofrow();
        
        void Sumofcol();
        
        void Transpose();
        
        void Add();       
		 
        void Sub();
        
        void Mul();
};

void Matrix :: Read()
{
    cout<<"\n Read row size and column size : ";
    cin>>R>>C;
    
    cout<<"\n Enter matrix 1 : \n";
	for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>M[i][j];
}

void Matrix :: Print()
{
    cout<<"\n Given matrix : \n";
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        cout<<M[i][j]<<"\t";
        
        cout<<"\n";
    }
}

void Matrix :: Sumelement()
{
	int sum=0;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
    sum=sum+M[i][j];
    
    cout<<"\n Sum of elements of given matrix : "<<sum<<endl;
}

void Matrix :: Sumofrow()
{
	int sum;
	
	for(int i=0;i<R;i++)
	{
		sum=0;
		
		for(int j=0;j<C;j++)
	    sum=sum+M[i][j];
	    
	    cout<<"\n Sum of row "<<i<<" = "<<sum<<endl;
	}
}

void Matrix :: Sumofcol()
{
	int sum;
	
	for(int i=0;i<C;i++)
	{
		sum=0;
		
		for(int j=0;j<R;j++)
	    sum=sum+M[j][i];
	    
	    cout<<"\n Sum of column "<<i<<" = "<<sum<<endl;
	}
}

void Matrix :: Transpose()
{
	int N[5][5];
	
	for(int i=0;i<C;i++)
	for(int j=0;j<R;j++)
	N[i][j]=M[j][i];
	
	cout<<"\n Matrix after transpose : \n";
	for(int i=0;i<C;i++)
	{
		for(int j=0;j<R;j++)
		cout<<N[i][j]<<"\t";
		
		cout<<"\n";
	}
}

void Matrix :: Add()
{
	int N[5][5],O[5][5];
	
	cout<<"\n Enter "<<R<<"*"<<C<<" matrix 2 for addition : \n";
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>N[i][j];
    
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    O[i][j]=M[i][j]+N[i][j];
    
    cout<<"\n Matrix after addition : \n";
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		cout<<O[i][j]<<"\t";
		
		cout<<"\n";
	}	
}

void Matrix :: Sub()
{
	int N[5][5],O[5][5];
	
	cout<<"\n Enter "<<R<<"*"<<C<<" matrix 2 for subtraction : \n";
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>N[i][j];
    
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    O[i][j]=M[i][j]-N[i][j];
    
    cout<<"\n Matrix after subtraction : \n";
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		cout<<O[i][j]<<"\t";
		
		cout<<"\n";
	}	
}

void Matrix :: Mul()
{
	int N[5][5],O[5][5];
	
    cout<<"\n Enter "<<R<<"*"<<C<<" matrix 2 for multiplication : \n";
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>N[i][j];
    
    if(R!=C)
    {
    	for(int i=0;i<C;i++)
	    for(int j=0;j<R;j++)
	    N[i][j]=N[j][i];
	}
	
    for(int i=0;i<R;i++)
    {
      	for(int j=0;j<R;j++)
      	{
        	O[i][j]=0;
        	for(int k=0;k<C;k++)
          	O[i][j]+=M[i][k]*N[k][j];
      	}
    }
    
    cout<<"\n Matrix after multiplication : \n";
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<R;j++)
		cout<<O[i][j]<<"\t";
		
		cout<<"\n";
	}	
}

int main()
{
    Matrix A;
    int ch;
    
    A.Read();
    
    do
    {
    	cout<<"\n ***** Matrix functions *****";
    	cout<<"\n 1. Read \n 2. Display \n 3. Sum of elements \n 4. Sum of row elements \n 5. Sum of column elements";
    	cout<<"\n 6. Transpose \n 7. Addition \n 8. Subtraction \n 9. Multiplication \n 0. Exit";
    	
    	cout<<"\n Enter your choice : ";
    	cin>>ch;
    	
    	switch(ch)
    	{
    		case 1:
    			A.Read();
    			break;
    			
    		case 2:
    			A.Print();
    			break;
    			
    		case 3:
    			A.Sumelement();
    			break;
    			
    		case 4:
    			A.Sumofrow();
    			break;
    			
    		case 5:
    			A.Sumofcol();
    			break;
    			
    		case 6:
    			A.Transpose();
    			break;
    			
    		case 7:
    			A.Add();
    			break;
    			
    		case 8:
    			A.Sub();
    			break;
    			
    		case 9:
    			A.Mul();
    			break;
    			
    		case 0:
    			printf("\n Exiting :)");
    			break;
    			
    		default:
    			printf("\n Wrong choice entered");	
		}
	}while(ch!=0);
	
    return 0;
}
