#include<iostream>
#include<math.h>

using namespace std;
int main()
{
int n,binary=0,bit;
cout<<"enter a number\n";
cin>>n;
int a=n;
int i=0;
while (n>0)
{
    bit=n&1;
    binary=(bit*pow(10,i))+binary;
    n=n>>1;
    i++;
}

cout<<"binary representation of "<<a<<" is: "<<binary;

return 0;
}