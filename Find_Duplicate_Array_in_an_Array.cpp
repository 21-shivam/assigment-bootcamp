#include<conio.h>
#include<iostream>
using namespace std;
int findunique(int arr[],int n)
{
    int sum=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]||sum)
            break;
    }
    return sum;
}
int create(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
        return 0;
}
int output(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<"Array is="<<arr[i]<<endl;
    return 0;
}
int main()
{
    int arr[10],n=10;
    create(arr,n);
    output(arr,n);
    findunique(arr,n);
    return 0;
}
