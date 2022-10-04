//print first n natural number
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    getch();
}
