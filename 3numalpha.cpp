#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter any character"<<endl;
    cin>>a;
    int b=a;
    if(b>=48&&b<=57)
    {
        cout<<"it is number\n";
    }
    else if(b>=65&&b<=90)
    {
        cout<<"it is a capital letter alphabet\n";
    }
    else if (b>=97&&b<=122)
    {
        cout<<"it is a small letter alphabet\n";
    }
    else
    cout<<"it is a special character\n";
    

}