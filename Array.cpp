#include<iostream>
using namespace std;
void input(int arr[],int n);
void output(int arr[],int n);
void sum(int arr[],int n);
int main()
{
    int arr[10],n=10;
    input(arr,n);
    output(arr,n);
    sum(arr,n);
    return 0;
}
void input(int arr[],int n)
{

    for(int i=0;i<n;i++)
        cin>>arr[i];
}
void output(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
}
void sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    cout<<endl<<"Sum is="<<sum;
}
