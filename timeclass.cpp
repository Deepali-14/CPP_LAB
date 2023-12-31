//Program for time class functions

#include<iostream>

using namespace std;

class Time
{
	int hr,min,sec;
	
	public:
		void read();
		
		void display();
		
		void add(Time,Time);
		
		Time add(Time);
		
		void sub(Time,Time);
		
		Time sub(Time);
};

void Time :: read()
{
	cout<<"\n Enter time as 24 hr:60 min:60 sec";
	cout<<"\n Enter hours, minute and seconds respectively : ";
	cin>>hr>>min>>sec;
}

void Time :: display()
{
	cout<<" "<<hr<<":"<<min<<":"<<sec<<endl;
}

void Time :: add(Time y,Time z)
{
	hr=y.hr+z.hr;
	
	min=y.min+z.min;
	if(min>60)
	{
		min=min-60;
		hr=hr+1;
	}
	
	sec=y.sec+z.sec;
	if(sec>60)
	{
		sec=sec-60;
		min=min+1;
	}
}

Time Time :: add(Time y)
{
	Time temp;
	
	temp.hr=hr+y.hr;

	temp.min=min+y.min;
	if(temp.min>60)
	{
		temp.min=temp.min-60;
		temp.hr=temp.hr+1;
	}
	
	temp.sec=sec+y.sec;
	if(temp.sec>60)
	{
		temp.sec=temp.sec-60;
		temp.min=temp.min+1;
	}
	
	return temp;
}

void Time :: sub(Time y,Time z)
{
	if(y.hr>z.hr)
	{
		hr=0;
		min=((y.hr*60)+y.min+(y.sec/60))-((z.hr*60)+z.min+(z.sec/60));
		sec=0;
	}
	
	else
	{
		hr=0;
		min=((z.hr*60)+z.min+(z.sec/60))-((y.hr*60)+y.min+(y.sec/60));
		sec=0;
	}
}

Time Time :: sub(Time y)
{
	Time temp;
	
	if(y.hr>hr)
	{
		temp.hr=0;
		temp.min=((y.hr*60)+y.min+(y.sec/60))-((hr*60)+min+(sec/60));
		temp.sec=0;
	}
	
	else
	{
		temp.hr=0;
		temp.min=((hr*60)+min+(sec/60))-((y.hr*60)+y.min+(y.sec/60));
		temp.sec=0;
	}
	
	return temp;
}

int main()
{
	Time a,b,c;
	int ch;
	
	do
	{
		cout<<"\n ***** TIME FUNCTIONS ***** \n";
		
		cout<<"\n 1. Read \n 2. Display \n 3. Addition \n 4. Subtraction \n 0. Exit";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\n Reading time 1 : \n";
				a.read();
				
				cout<<"\n Reading time 2 : \n";
				b.read();
				break;
				
			case 2:
				cout<<"\n Displaying time 1 : \n";
				a.display();
				
				cout<<"\n Displaying time 2 : \n";
				b.display();
				break;
				
			case 3:
				cout<<"\n Approach 1 \n";
				c.add(a,b);
				cout<<"\n Displaying time after addition : \n";
				c.display();
				
				cout<<"\n Approach 2 \n";
				c=b.add(a);
				cout<<"\n Displaying time after addition : \n";
				c.display();
				
				cout<<"\n Approach 3 \n";
				c=a.add(b);
				cout<<"\n Displaying time after addition : \n";
				c.display();
				break;
				
			case 4:
				cout<<"\n Approach 1 \n";
				c.sub(a,b);
				cout<<"\n Displaying time after subtraction : \n";
				c.display();
				
				cout<<"\n Approach 2 \n";
				c=b.sub(a);
				cout<<"\n Displaying time after subtraction : \n";
				c.display();
				
				cout<<"\n Approach 3 \n";
				c=a.sub(b);
				cout<<"\n Displaying time after subtraction : \n";
				c.display();
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
