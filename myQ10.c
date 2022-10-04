#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",n+1-i);
    getch();
}
