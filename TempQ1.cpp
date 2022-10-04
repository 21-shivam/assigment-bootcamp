 #include<iostream>
 using namespace std;
 int binarysearch(int *input,int n,int val);
 int main()
 {
     int arr[5],n=5,val;
     cout<<"Enter 5 array elements:";
     for(int i=0;i<n;i++)
        cin>>arr[i];
     cout<<"Enter value which you wants to search:";
     cin>>val;
     cout<<"Index no is:"<<binarysearch(arr,n,val);
     return 0;
 }
 int binarysearch(int *input,int n,int val)
 {
   int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<=high)
    {
        if(input[mid]==val)
        {
            return mid;
        }
       else if(val<input[mid])
           {
            high=mid-1;
        }
        else
        {
            low=high+1;
        }
        mid=low+(high-low)/2;
    }
    return -1;
}
