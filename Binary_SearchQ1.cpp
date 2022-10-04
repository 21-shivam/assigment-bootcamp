#include<iostream>
using namespace std;
#include<conio.h>
int Binarysearch(int arr[],int n,int ele)
{
    int first,mid,last;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]==ele)
            return mid;
        if(ele>arr[mid])
            first=mid+1;
        else
            last=mid-1;
        mid=(first+last)/2;
    }
    return -1;
}
int input(int arr[],int n)
{
    cout<<"Enter 10 array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    return 0;
}
int output(int arr[],int n)
{
    cout<<"array elements is:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
        cout<<endl;
    return 0;
}
int main()
{
    int arr[10],n=10,key;
    input(arr,n);
    output(arr,n);
    cout<<"Enter element which you wants to search:";
    cin>>key;
   cout<<"Element found at position:"<<Binarysearch(arr,n,key);
}
