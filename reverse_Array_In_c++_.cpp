#include<iostream>
using namespace std;
int input(int arr[],int n);
int output(int arr[],int n);
int reversearray(int arr[],int n);
int main()
{
    int arr[10],n=10;
    input(arr,n);
    output(arr,n);
    reversearray(arr,n);
    return 0;
}
int input(int arr[],int n)
{
    cout<<"Enter 10 Array elements is:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    return 0;
}
int output(int arr[],int n)
{
    cout<<"Element is:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
        return 0;
}
int reversearray(int arr[],int n)
{
    cout<<"Elements in reverse order:";
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<"\t";
    return 0;
}

