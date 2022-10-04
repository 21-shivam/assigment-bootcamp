#include<iostream>
using namespace std;
#include<conio.h>
int firstocc(int arr[],int n,int key)
{
    int first=0,last,mid,ans=-1;
    last=n-1;
    mid=first+(last-first)/2;
    while(first<=last)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            last=mid-1;
        }
        else if(key>arr[mid])
            first=mid+1;
        else
            last=mid-1;
    mid=first+(last-first)/2;
    }
    return ans;
}
int secondocc(int arr[],int n,int key)
{
    int first=0,last,mid,ans=-1;
    last=n-1;
    mid=first+(last-first)/2;
    while(first<=last)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            first=mid+1;
        }
        else if(key>arr[mid])
            first=mid+1;
        else
            last=mid-1;
    mid=first+(last-first)/2;
    }
    return ans;
}
int main()
{
    int arr[10],n=10,key;
    cout<<"Enter 10 array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Enter element which you wants to search:";
    cin>>key;
    cout<<endl<<"Element at index="<<firstocc(arr,n,key);
    cout<<endl<<"Element at index="<<secondocc(arr,n,key);
}
