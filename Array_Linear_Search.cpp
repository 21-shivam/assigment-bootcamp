#include<iostream>
using namespace std;
int input(int arr[],int n);
int output(int arr[],int n);
int Linearsearch(int arr[],int n);
int main()
{
    int arr[10],n;
    input(arr,n);
    output(arr,n);
    Linearsearch(arr,n);
    return 0;
}
int input(int arr[],int n)
{
    cout<<endl<<"Enter 10 Array elements:";
    for(int i=0;i<10;i++)
        cin>>arr[i];
        return 0;
}
int output(int arr[],int n)
{
    cout<<"Array is=";
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
int Linearsearch(int arr[],int n)
{
    int x,flag=0;
    cout<<endl<<"Enter Element which you wants to search:";
    cin>>x;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            cout<<endl<<"Element found at index number "<<i<<" is="<<arr[i];
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"Element not found";
    return 0;
}
