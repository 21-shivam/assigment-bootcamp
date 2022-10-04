#include<iostream>
using namespace std;
int input(int arr[][3],int n,int m)
{
    cout<<"Enter 12 Array elements:";
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    cin>>arr[i][j];
    }
    return 0;
}
int output(int arr[][3],int n,int m)
{
    cout<<endl<<"Array elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<"\t";
    }
    cout<<"\n";
    }
    return 0;
}
bool ispresent(int arr[][3],int n,int m,int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(arr[i][j]==key)
        return 1;
        }
    }
        return 0;
}
int main()
{
    int arr[4][3],n=4,m=3,key;
    input(arr,n,m);
    output(arr,n,m);
    cout<<endl<<"Enter a number which you want to search:";
    cin>>key;
    if(ispresent(arr,n,m,key))
        cout<<"IS present";
    else
        cout<<"Not present:";
    return 0;
}

