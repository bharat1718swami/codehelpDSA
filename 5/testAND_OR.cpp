#include<iostream>

using namespace std;
int main()
{
int a,b;
cout<<"enter values for a and b\n";
cin>>a>>b;

cout<<"a AND b: "<<(a&b)<<endl;
cout<<"a OR b: "<<(a|b)<<endl;
cout<<"NOT a: "<<~a<<endl;
cout<<"NOT b: "<<~b<<endl;
cout<<"a XOR b: "<<(a^b)<<endl; 

return 0;
}