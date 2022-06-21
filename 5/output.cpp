// output=product-sum of a number
#include<iostream>

using namespace std;
int main()
{
    int n,output,product=1,sum=0;
    cout<<"enter a number\n";
    cin>>n;

    while (n>0)
    {
        int rem=n%10;
        product=rem*product;
        sum=rem+sum;
        n/=10;
    }
    output=product-sum;
    cout<<"product-sum of number is: "<<output;
    
return 0;
}