#include <iostream>

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

int unique(int output[], int arr[], int n)
{
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                    break;
            }
        }
        if (j == n)
        {
            output[o] = arr[i];
            o++;
        }
    }
    return o;
}

int duplicates(int duplicate[], int arr[], int n)
{
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        int val = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                val++;
            }
        }
        if (val == 1)
        {
            duplicate[d] = arr[i];
            d++;
        }
    }
    return d;
}

void insertion_sort(int sort[],int n)
{
    int current;
    for(int i=1;i<n;i++)
    {
       current=sort[i];
       int j;
        for(j=i-1;j>=0;j--)
        {
            if(current<sort[j])
            {
               // int temp=sort[j+1];
                sort[j+1]=sort[j];
               // sort[j]=temp;
            }
            else
            break;
        }
        sort[j+1]=current;
    }
}

int main()
{
    int arr[1000], size;
    int output[1000] = {0}, o;
    int duplicate[1000] = {0}, d;
    int sort[1000]={0},s;
    cout << "enter size of arry\n";
    cin >> size;
    arry_input(arr, size);
    o = unique(output, arr, size);
    print_arry(output, o);
    d = duplicates(duplicate, arr, size);
    print_arry(duplicate, d);
    insertion_sort(arr,size);
    print_arry(arr,size);

    return 0;
}