#include<iostream>
using namespace std;
#include<conio.h>
int Bubblesort(int arr[],int n);
int Bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    return 0;
}
int main()
{

    int arr[5],n=5,i;
    cout<<"Enter 10 array elements:";
    for(i=0;i<n;i++)
        cin>>arr[i];
    Bubblesort(arr,n);
    cout<<endl<<"Sorted array are:";
    for(i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    return 0;
}
