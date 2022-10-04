#include<stdio.h>
#include<conio.h>
int fibonnaci(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   fibonnaci(n);
   return 0;
}
int fibonnaci(int n)
{
    int i,j=0,p;
    for(i=0;i<=n;i++)
    {
        p=i+j;
        printf("%d\t",p);
    }
    return 0;
}
