#include<iostream>

using namespace std;
int main()
{
    long sum,i,n;
    cout<<"enter a number \n";
    cin>>n;
    for (sum=0, i = 1; i <=n; i++)
    {
        sum+=i;
    }

    cout<<"sum = "<<sum;
    
return 0;
}