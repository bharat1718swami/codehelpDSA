#include<iostream>
#include<math.h>

using namespace std;
int main()
{
int n,dec=0,bit;
cout<<"enter binary number\n";
cin>>n;
int a=n;
int i=0;

while (n>0)
{
    bit=n%10;
    dec=(bit*pow(2,i))+dec;
    n/=10;
    i++;
}

cout<<"decimal representation of "<<a<<" is: "<<dec;

return 0;
}