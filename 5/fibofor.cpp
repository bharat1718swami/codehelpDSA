#include<iostream>

using namespace std;
int main()
{
    int a=0,b=1,c,n;
    cout<<"enter number of terms for fibonacci series(min. 2)\n";
    cin>>n;
    cout<<"fibonacci series upto "<<n<<" numbers\n"<<a<<", "<<b<<", ";
    for (int i = 2; i < n; i++)
    {
        c=a+b;
        cout<<c<<", ";
        a=b;
        b=c;
    }
    
return 0;
}