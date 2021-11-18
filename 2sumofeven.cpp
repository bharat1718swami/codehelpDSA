#include<iostream>
using namespace std;
int main()
{
    int n,sum,i;
    cout<<"enter a number\n";
    cin>>n;
    sum=0;
    i=0;
    while (i<=n)
    {
        sum=i+sum;
        i=i+2;
    }

    cout<<"sum of even numbers is  "<<sum;
    
}