#include<iostream>
#include<cmath>

using namespace std;

void arry_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print_arry(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

void findSecondLargest(int *input, int n)
{
    //Write your code here
    int Max;
    for(int i=1;i<n;i++){
        Max=max(Max,input[i]);
        int j;
        for(j=i-1;j>=0;j--){
            if(input[j]<Max){
                input[j+1]=input[j];
            }
            else
                break;
        }
        input[j+1]=Max;
    }
}

int main()
{
    int second_large[1000],n;
    cout<<"enter size\n";
    cin>>n;
    arry_input(second_large,n);
    findSecondLargest(second_large,n);
    print_arry(second_large,n);
    


return 0;
}