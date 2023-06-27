//Program on 2-D matrix functions

#include<iostream>

using namespace std;

class Matrix 
{
	int R,C;
	int M[5][5];
	
	public :
		
		void read();
		
		void print();
		
		int sumofelement();
		
		void rowsum();
		
		void colsum();
		
		void transpose(Matrix);
		
		void add(Matrix,Matrix);
		
		Matrix add(Matrix);
		
		void sub(Matrix,Matrix);
		
		Matrix sub(Matrix);
		
		void mul(Matrix,Matrix);
		
		Matrix mul(Matrix);
};

void Matrix :: read()
{
    cout<<"\n Read row size and column size : ";
    cin>>R>>C;
    
    cout<<"\n Enter elements : \n";
	for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>M[i][j];
}

void Matrix :: print()
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        cout<<M[i][j]<<"\t";
        
        cout<<"\n";
    }
}

void Matrix :: transpose(Matrix Y)
{
	R=Y.C;
	C=Y.R;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	M[i][j]=Y.M[j][i];
}


int Matrix :: sumofelement()
{
	int sum=0;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
    sum=sum+M[i][j];
    
    return sum;
}

void Matrix :: rowsum()
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

void Matrix :: colsum()
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

void Matrix :: add(Matrix Y,Matrix Z)
{
	R=Y.R;
	C=Z.R;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	M[i][j]=Y.M[i][j]+Z.M[i][j];
}

Matrix Matrix :: add(Matrix Y)
{
	Matrix temp;
	
	temp.R=R;
	temp.C=C;
	
	for(int i=0;i<temp.R;i++)
	for(int j=0;j<temp.C;j++)
	temp.M[i][j]=M[i][j]+Y.M[i][j];
	
	return temp;
}

void Matrix :: sub(Matrix Y,Matrix Z)
{
	R=Y.R;
	C=Z.R;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	M[i][j]=Y.M[i][j]-Z.M[i][j];
}

Matrix Matrix :: sub(Matrix Y)
{
	Matrix temp;
	
	temp.R=R;
	temp.C=C;
	
	for(int i=0;i<temp.R;i++)
	for(int j=0;j<temp.C;j++)
	temp.M[i][j]=M[i][j]-Y.M[i][j];
	
	return temp;
}

void Matrix :: mul(Matrix Y,Matrix Z)
{
	R=Y.R;
	C=Z.C;
	
	for(int i=0;i<R;i++)
    {
      	for(int j=0;j<C;j++)
      	{
        	M[i][j]=0;
        	for(int k=0;k<C;k++)
          	M[i][j]+=Y.M[i][k]*Z.M[k][j];
      	}
    }
}

Matrix Matrix :: mul(Matrix Y)
{
	Matrix temp;
	
	temp.R=R;
	temp.C=C;
	
	for(int i=0;i<temp.R;i++)
    {
      	for(int j=0;j<temp.C;j++)
      	{
        	temp.M[i][j]=0;
        	for(int k=0;k<temp.C;k++)
          	temp.M[i][j]+=M[i][k]*Y.M[k][j];
      	}
    }
    
    return temp;
}

int main()
{
	Matrix A,B,C;
    int ch,r;
    
    do
    {
    	cout<<"\n ***** 2-D matrix functions *****";
    	
    	cout<<"\n 1. Read \n 2. Display \n 3. Transpose \n 4. Sum of elements";
		cout<<"\n 5. Sum of row elements \n 6. Sum of column elements \n 7. Addition";
		cout<<"\n 8. Subtraction \n 9. Multiplication \n 0. Exit";
    	
    	cout<<"\n Enter your choice : ";
    	cin>>ch;
    	
    	switch(ch)
    	{
    		case 1:
    			cout<<"\n Enter matrix 1 : \n";
    			A.read();
    			
    			cout<<"\n Enter matrix 2 : \n";
    			B.read();
    			
    			break;
    			
    		case 2:
    			cout<<"\n Displaying matrix 1 : \n";
    			A.print();
    			
    			cout<<"\n Displaying matrix 2 : \n";
    			B.print();
    			
    			break;
    			
    		case 3:
    			cout<<"\n Displaying matrix 1 after transpose : \n";
    			C.transpose(A);
    			C.print();
    			
    			cout<<"\n Displaying matrix 2 after transpose : \n";
    			C.transpose(B);
    			C.print();
    			
    			break;
    			
    		case 4: 
    		    r=A.sumofelement();
    		   	cout<<"\n Sum of elements of matrix 1 : "<<r<<endl;
    		   	
    		   	r=B.sumofelement();
    		   	cout<<"\n Sum of elements of matrix 2 : "<<r<<endl;
    		   	
    		   	break;
    		    
    		case 5:
    			cout<<"\n For matrix 1 : \n";
    		    A.rowsum();
    			
    			cout<<"\n For matrix 2 : \n";
    		    B.rowsum();
    			
    			break;
    			
    		case 6:
    			cout<<"\n For matrix 1 : \n";
    			A.colsum();
    			
    			cout<<"\n For matrix 2 : \n";
    			B.colsum();
    			
    			break;
    			
    		case 7:
    			cout<<"\n Approach 1 :\n";
    			C.add(A,B);
    			
    			cout<<"\n Displaying matrix after addition : \n";
    			C.print();
    			
    			cout<<"\n Approach 2 :\n";
    			C=B.add(A);
    			
    			cout<<"\n Displaying matrix after addition : \n";
    			C.print();
    			
    			cout<<"\n Approach 3 :\n";
    			C=A.add(B);
    			
    			cout<<"\n Displaying matrix after addition : \n";
    			C.print();
    			
    			break;
    			
    		case 8:
    			cout<<"\n Approach 1 :\n";
    			C.sub(A,B);
    			
    			cout<<"\n Displaying matrix after subtraction : \n";
    			C.print();
    			
    			cout<<"\n Approach 2 :\n";
    			C=B.sub(A);
    			
    			cout<<"\n Displaying matrix after subtraction : \n";
    			C.print();
    			
    			cout<<"\n Approach 3 :\n";
    			C=A.sub(B);
    			
    			cout<<"\n Displaying matrix after subtraction : \n";
    			C.print();
    			
    			break;
    			
    		case 9:
    			cout<<"\n Approach 1 :\n";
    			C.mul(A,B);
    			
    			cout<<"\n Displaying matrix after multiplication : \n";
    			C.print();
    			
    			cout<<"\n Approach 2 :\n";
    			C=B.mul(A);
    			
    			cout<<"\n Displaying matrix after multiplication : \n";
    			C.print();
    			
    			cout<<"\n Approach 3 :\n";
    			C=A.mul(B);
    			
    			cout<<"\n Displaying matrix after multiplication : \n";
    			C.print();
    			
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
