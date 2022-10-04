#include<stdio.h>
#include<conio.h>
int Rec(int n);
int main()
{
    int n,p;
    printf("Enter a number:");
    scanf("%d",&n);
    p=Rec(n);
    printf("Sum is=%d",p);
    return 0;
}
int Rec(int n)
{
    if(n==1)
    {
        return 1;
    }
    int x;
    x=Rec(n-1)+n;
    return x;
}
