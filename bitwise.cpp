#include<iostream>

using namespace std;

int main()
{
    int a=7,b=5;
    
    cout<<"\n a : "<<a<<"\t b : "<<b;
    cout<<"\n a & b : " << (a&b);
    cout<<"\n a | b : " << (a|b);
    cout<<"\n a ^ b : " << (a^b);
    cout<<"\n ~a : " << (~a);
    cout<<"\n ~b : " << (~b);
    cout<<"\n a >> 1 : " << (a>>1);  // division by 2
    cout<<"\n a << 1 : " << (a<<1);  // multiply by 2
    cout<<"\n a >> b : " << (a>>b);  // division by b(5)   = 0
    cout<<"\n a << b : " << (a<<b);  // division by b(5)   = 0
    
    return 0;
}
