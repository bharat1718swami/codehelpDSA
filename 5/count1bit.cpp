// count number of bits in a number
#include<iostream>

using namespace std;
int main()
{
    int n,one=0;
    cout<<"enter a number\n";
    cin>>n;
    int a=n;
    while (n>0)
    {
        if(n&1){
            one++;
        }
        n=n>>1;
    }

    cout<<"numer of 1 bits in "<<a<<" is: "<<one;
    
return 0;
}