#include<iostream>

#include<cstdarg>

using namespace std;

int findmaximum(int count, ...)
{
	int max, value;
	
	va_list list;
	
	va_start(list,count);
	
	max=va_arg(list,int);
	
	for(int arg=1; arg<count; ++arg)
	{
		value=va_arg(list,int);
		
		if(max<value)
			max=value;
	}
	
	va_end(list);
	
	return max;
}

int main()
{
	cout<<findmaximum(5, 14, 15, 12, 13, 10)<<endl;
	
	cout<<findmaximum(3, 10, 11, 12)<<endl;
	
	return 0;
}
