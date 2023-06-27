//Program on complex class functions 

#include<iostream>

using namespace std;

class Complex
{
	int R,I;
	
	public:
		void read();
		
		void display();
		
		void conjugate();
		
		void add(Complex,Complex);
		
		Complex add(Complex);
		
		void sub(Complex,Complex);
		
		Complex sub(Complex);
};

void Complex :: read()
{
	cout<<"\n Enter value of real and imaginary part respectively : ";
	cin>>R>>I;
}

void Complex :: display()
{
	cout<<" "<<R<<"+i*"<<I<<endl;
}

void Complex :: conjugate()
{
	cout<<" "<<R<<"+i*"<<-1*I<<endl;
}

void Complex :: add(Complex Y,Complex Z)
{
	R=Y.R+Z.R;
	I=Y.I+Z.I;
}

Complex Complex :: add(Complex Y)
{
	Complex temp;
	
	temp.R=R+Y.R;
	temp.I=I+Y.I;
	
	return temp;
}

void Complex :: sub(Complex Y,Complex Z)
{
	R=Y.R-Z.R;
	I=Y.I-Z.I;
}

Complex Complex :: sub(Complex Y)
{
	Complex temp;
	
	temp.R=R-Y.R;
	temp.I=I-Y.I;
	
	return temp;
}

int main()
{
	Complex A,B,C;
	int ch;
	
	do
	{
		cout<<"\n ***** COMPLEX CLASS *****";
		
		cout<<"\n 1. Read \n 2. Display \n 3. Conjugate \n 4. Addition";
		cout<<"\n 5. Subtraction \n 0. Exit";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\n Reading complex number 1 : \n";
				A.read();
				
				cout<<"\n Reading complex number 2 : \n";
				B.read();
				break;
				
			case 2:
				cout<<"\n Displaying complex number 1 : \n";
				A.display();
				
				cout<<"\n Displaying complex number 2 : \n";
				B.display();
				break;
				
			case 3:
				cout<<"\n Conjugate of complex number 1 : \n";
				A.conjugate();
				
				cout<<"\n Conjugate of complex number 2 : \n";
				B.conjugate();
				break;
				
			case 4:
				cout<<"\n Approach 1 :\n";
    			C.add(A,B);
    			
    			cout<<"\n Displaying Complex number after addition : \n";
    			C.display();
    			
    			cout<<"\n Approach 2 :\n";
    			C=B.add(A);
    			
    		    cout<<"\n Displaying Complex number after addition : \n";
    			C.display();
    			
    			cout<<"\n Approach 3 :\n";
    			C=A.add(B);
    			
    			cout<<"\n Displaying Complex number after addition : \n";
    			C.display();
				break;
				
			case 5:
				cout<<"\n Approach 1 :\n";
    			C.sub(A,B);
    			
    			cout<<"\n Displaying Complex number after subtraction : \n";
    			C.display();
    			
    			cout<<"\n Approach 2 :\n";
    			C=B.sub(A);
    			
    		    cout<<"\n Displaying Complex number after subtraction : \n";
    			C.display();
    			
    			cout<<"\n Approach 3 :\n";
    			C=A.sub(B);
    			
    			cout<<"\n Displaying Complex number after subtraction : \n";
    			C.display();
				break;
				
			case 0:
				cout<<"\n Exiting :)";
				break;
				
			default:
				cout<<"\n Wrong choice entered"<<endl;
		}
		
	}while(ch!=0);
	
	return 0;
}
