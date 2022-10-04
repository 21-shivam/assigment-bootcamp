#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,45,3,56,0},n=5;
    int round,i;
    for(round=0;round<n-1;round++)
    {
        for(i=round+1;i<n;i++)
        {
            if(arr[round]>arr[i])
            {
                int temp;
                temp=arr[round];
                arr[round]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Element is:";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;

}
