#include<iostream>
using namespace std;
//int ispresent(int arr[][],int n,int m,int key);
int ispresent(int arr[],int n,int m,int key)
{
    int p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                return 1;
            }
            else
                return -1;
        }
    }
}

int main()
{
    int arr[3][4],i,j,p,n=3,m=4;
    cout<<"Enter 3*3 array:";
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++)
    {
    cin>>arr[i][j];
    }
    }
    cout<<endl<<"array is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<endl<<"Enter a number which you wants to search:";
    cin>>p;
    cout<<endl<<ispresent(arr,n,m,p);
  return 0;
}

