//print first n odd natural number
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the value of natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
        i=i+1;
    }
    getch();
}
